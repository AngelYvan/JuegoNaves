#define GLUT_DISABLE_ATEXIT_HACK
#include <windows.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

#include <GL/glut.h>
#include <Windows.h>
#include <MMSystem.h>
#include "space_sprites.h"
#include "space_alpha.h"

/***********************************************************************************************************/

void IniciarGLUT() {
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(600,700);
    glutCreateWindow("Space Invaders");
    glClearColor(0., 0., 0., 0.);
    glColor3f(0., 0., 0.);
}
/***********************************************************************************************************/
void PintarEscena() {                                   // primero muestra la patalla de presentacion
    if (screen==0){                                     // si se presiona enter se parte con el juego

        presentacion();
    }
    if (screen==1){
        //sndPlaySound(TEXT("musica.wav"),SND_ASYNC);

        pantalla_de_juego();
    }
}
/***********************************************************************************************************/
void ReProyectar(int w, int h) {                        // Funcion de reacomodo de la pantalla
    GLfloat formato;                                    // se activa cuando se interviene en la pabtalla
    if(h == 0) h = 1;                                   // redimensionamiento o traslacion
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    formato = (GLfloat)w / (GLfloat)h;
    if (w <= h) glOrtho (-10.0f, 10.0f, -10.0f / formato, 10.0f / formato, 1.0f, -1.0f);
    else glOrtho (-10.0f * formato, 10.0f * formato, -10.0f, 10.0f, 1.0f, -1.0f);
}

/***********************************************************************************************************/
void ControlTeclado(unsigned char key, int x, int y){   // Necesario describir?
    switch (key)
    {
            case 13:
                if(screen==0){
                    screen=1;
                    //PlaySound(TEXT("2.wav"),NULL,SND_ASYNC);
                    //PlaySound(TEXT("2.wav"),NULL,SND_FILENAME|SND_LOOP|SND_ASYNC|SND_NOSTOP);
                }
            break;
            case 27:
                if(screen==1){                          // Si se apreta escape 2 veces se termina la ejecucion
                    screen=0;
                }
                else{
                    exit(0);
                }
    }
    glutPostRedisplay();
}

/***********************************************************************************************************/
void ControlFlechas(int key, int x, int y){             // Necesario describir?
    switch (key)
    {
        case GLUT_KEY_LEFT:
            posx=posx-0.2;
            if(posx<-10)
                posx=-10;
        break;
        case GLUT_KEY_RIGHT:
            posx=posx+0.2;
            if(posx>9.2)
                posx=9.2;
        break;
        case GLUT_KEY_UP:
            posy=posy+0.2;
            if(posy>10)
                posy=10;
        break;
        case GLUT_KEY_DOWN:
            posy=posy-0.2;
            if(posy<-1)
                posy=-1;
        break;
        case GLUT_KEY_END:
            attack_flag=1;
            PlaySound(TEXT("disparo.wav"),NULL,SND_ASYNC);
        break;
        case GLUT_KEY_HOME:
            bomb_flag=1;
            PlaySound(TEXT("bomba.wav"),NULL,SND_ASYNC);
        break;
    }
    cout<<"posx="<<posx<<" posy="<<posy<<endl;
    glutPostRedisplay();
}
/***********************************************************************************************************/
int main(int argc, char **argv){

    cargar_variables();
    glutInit(&argc,argv);
    IniciarGLUT();
    glutReshapeFunc(ReProyectar);
    glutDisplayFunc(PintarEscena);
    glutTimerFunc(1,Avanzar,1);
    glutKeyboardFunc(ControlTeclado);
    glutSpecialFunc(ControlFlechas);
    glutMainLoop();
    return 0;
}

