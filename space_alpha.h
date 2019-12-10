#ifndef SPACE_ALPHA_H_INCLUDED
#define SPACE_ALPHA_H_INCLUDED
#include <irrKlang.h>
using namespace irrklang;
#pragma comment(lib, "irrKlang.lib") // link with irrKlang.dll
/***********************************************************************************************************/
                                    // Variables globales que apoyan el proceso del juego

float tx;                           // tx y ty dan movimiento al conjunto de sprites enemigos
float ty;
float posx;                         // variable que se suma al movimiento de la nave
float posy;                         // variable que se suma al movimiento de la nave
int flagizq;                        // switch que activa o desactiva mov sprites a la izq
int flagder;                        // switch que activa o desactiva mov sprites a la der
int temp_aux;                       // temporizador auxiliar
int attack_flag;                    // flags para soporte al disparo
int bullet_flag;                    // flags para soporte al disparo
int bomb_flag;                      // flag para soporte a la bomba
float bomb_rad;                     // radio de la bomba
float bullet_x;                     // bullet_x y bullet_y posicionan el "sprite" del disparo
float bullet_y;
int puntaje;
int VIVO[55];
int screen;
float ufo[2];
ISoundEngine* engine;
bool introOn;
bool musicaOn;
/***********************************************************************************************************/

void cargar_variables(){
    int i;
    ufo[0]      =   0;
    ufo[1]      =   0;
    tx          =   0.0;
    ty          =   0.0;
    posx        =   0.0;
    flagizq     =   0;
    flagder     =   1;
    attack_flag =   0;
    bullet_flag =   0;
    bomb_rad    =   0.1;
    temp_aux    =   0;
    screen      =   0;
    puntaje     =   0;
    for(i=0; i<55; i++){
        VIVO[i]=1;
    }

    introOn=false;
    musicaOn=false;
    engine = createIrrKlangDevice();
    printf("Got this far. \n");
    if (!engine){
        printf("Engine Not Started");
    }
}

/***********************************************************************************************************/
void disparo() {
    if (attack_flag==1){            // condicion que se activa si se ejecuta el disparo
        if(bullet_flag==0){         // esta condicion permite el posicionamiento respecto al eje x e y,
            bullet_x=10+posx+0.4;   // puesto que el posicionamiento respecto a x es variable segun
            bullet_y=posy+0.4;             // la nave este debe asignarse solo una vez y luego bloquearse
            bullet_flag=1;          // con un el flag "bullet_flag"
        }

        if(bullet_y>=20){
            attack_flag=0;
            bullet_flag=0;
        }
        else{
            bala(bullet_x, bullet_y);
        }
    }
}
/***********************************************************************************************************/
void disparoBomb() {

    if (bomb_flag==1){            // condicion que se activa si se ejecuta el disparo
            if(bomb_rad>=20){
                bomb_flag=0;
                bomb_rad=0.1;
            }else{
                bomb_rad=bomb_rad+0.05;
                bomba(bomb_rad);
            }
        /*if(bullet_flag==0){         // esta condicion permite el posicionamiento respecto al eje x e y,
            bullet_x=10+posx+0.4;   // puesto que el posicionamiento respecto a x es variable segun
            bullet_y=posy+0.4;             // la nave este debe asignarse solo una vez y luego bloquearse
            bullet_flag=1;          // con un el flag "bullet_flag"
        }

        if(bullet_y>=20){
            attack_flag=0;
            bullet_flag=0;
        }
        else{
            bala(bullet_x, bullet_y);
        }*/
    }
}
/***********************************************************************************************************/
void pantalla_de_juego(){

    float a, b;
    int c=0;
    int enemigo=0;
    glMatrixMode(GL_MODELVIEW);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glColor3f(1.0f,1.0f,1.0f);
    say_pts(1, 19.5);
    numero(puntaje, 3.1, 19.5);
    for(a=16, c=0; a>=11.5; a=a-1.1000, c++){           // Ciclo y condicionales funcionan como
        for(b=3.1; b<=16.4; b=b+1.3000){                // ubicadores de sprite y detectores de colisiones
            if(c==0){                                   // a base de MBR
                if (!(
                      (((bullet_x>= b+tx) && (bullet_x<=(b+tx)+0.08*11)) &&
                      ((bullet_y<= a+ty) && (bullet_y>=(a+ty)-0.08*8))) ||
                      (bomb_rad*2>sqrt(pow(b+tx,2)+pow(a+ty,2)))
                      )  && VIVO[enemigo]==1){
                    ubicar_sprite(0, b+tx, a+ty, 0.08);
                }else{
                    if(VIVO[enemigo]!=0){
                        ubicar_sprite(5, b+tx, a+ty, 0.08);
                        VIVO[enemigo]=0;
                        engine->play2D("C:/musica/kill.wav");
                        attack_flag=0;
                        bullet_flag=0;
                        bullet_y=20;
                        puntaje=puntaje+300;
                    }
                }
            }else{
                if(c==1 || c==2){
                    if (!(
                          (((bullet_x>= b+tx) && (bullet_x<=(b+tx)+0.08*11)) &&
                          ((bullet_y<= a+ty) && (bullet_y>=(a+ty)-0.08*8))) ||
                          (bomb_rad*2>sqrt(pow(b+tx,2)+pow(a+ty,2)))
                          )  && VIVO[enemigo]==1){
                        ubicar_sprite(1, b+tx, a+ty, 0.08);
                    }else{
                        if(VIVO[enemigo]!=0){
                            ubicar_sprite(5, b+tx, a+ty, 0.08);
                            VIVO[enemigo]=0;
                            engine->play2D("C:/musica/kill.wav");
                            attack_flag=0;
                            bullet_flag=0;
                            bullet_y=20;
                            puntaje=puntaje+200;
                        }
                    }
                }else{
                    if (!(
                          (((bullet_x>= b+tx) && (bullet_x<=(b+tx)+0.08*11)) &&
                          ((bullet_y<= a+ty) && (bullet_y>=(a+ty)-0.08*8))) ||
                          (bomb_rad*2>sqrt(pow(b+tx,2)+pow(a+ty,2)))
                          )  && VIVO[enemigo]==1){
                        ubicar_sprite(2, b+tx, a+ty, 0.08);
                    }
                    else{
                        if(VIVO[enemigo]!=0){
                            ubicar_sprite(5, b+tx, a+ty, 0.08);
                            VIVO[enemigo]=0;
                            engine->play2D("C:/musica/kill.wav");
                            attack_flag=0;
                            bullet_flag=0;
                            bullet_y=20;
                            puntaje=puntaje+100;
                        }
                    }
                }
            }

            enemigo++;
        }

    }
    glColor3f(0.0f,1.0f,0.0f);
    glBegin(GL_LINE_STRIP);
        glVertex3i(-10,-9,0);
        glVertex3i(10,-9,0);
    glEnd();
    ubicar_sprite(4, 10+posx, posy, 0.08);                 // Ubica la nave en la pantalla
    disparo();                                          // Solo produce efectos visibles luego de oprimir
                                                        // el disparador (flecha arriba)
    disparoBomb();

    glutSwapBuffers();
}
/***********************************************************************************************************/
void presentacion(){
    glMatrixMode(GL_MODELVIEW);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glColor3f(1.0f,1.0f,1.0f);
    say_space(3.5, 17);
    glColor3f(0.0f,1.0f,0.0f);
    say_invaders(1, 15);
    glColor3f(1.0f,1.0f,1.0f);
    ubicar_sprite(2, 7, 10.5, 0.1);
    ubicar_sprite(1, 7, 9, 0.1);
    ubicar_sprite(0, 7, 7.5, 0.1);
    glColor3f(1.0f,0.0f,0.0f);
    ubicar_sprite(3, 7+ufo[0], 6+ufo[01], 0.1);
    glColor3f(1.0f,1.0f,1.0f);
    simbolo(2, 8.5, 10.5);
    simbolo(2, 8.5, 9);
    simbolo(2, 8.5, 7.5);
    simbolo(2, 8.5, 6);
    numero(100, 9.3, 10.5);
    numero(200, 9.3, 9);
    numero(300, 9.3, 7.5);
    simbolo(0, 9.3, 6);
    simbolo(0, 9.9, 6);
    simbolo(0, 10.5, 6);
    say_pts(11.5, 10.5);
    say_pts(11.5, 9);
    say_pts(11.5, 7.5);
    say_pts(11.5, 6);
    mostrar_text("Presiona Enter", 2, -10);

    glutSwapBuffers();
}
/***********************************************************************************************************/
void Avanzar(int x){
if(screen==1){                                          // funcion que controla todos los contadores
    if(temp_aux%120==0){                                // que permiten los "movimientos" de los sprites
        if(flagder==1 && tx<=2.0){                      // que el jugador no controla
        tx=tx+0.1;                                      // Gracias a la funcion glutTimerFunc(1,Avanzar,1);
        }                                               // esta se ejecutara cada 1 milesima de segundo
        if(tx>=2.0){                                    // 120 es el valor de que debe incrementarse si es que
            flagder=0;                                  // desea el juego mas lento o disminuir si mas rapido
            flagizq=1;                                  // se quiere hacer
            ty=ty-0.5;
        }
        if(flagizq==1 && tx>=-2.0){
            tx=tx-0.1;
        }
        if(tx<=-2.0){
            flagder=1;
            flagizq=0;
            ty=ty-0.5;
        }
        temp_aux=0;
    }
    if(attack_flag==1){
        bullet_y=bullet_y+0.15;
    }
    temp_aux++;
}
if(screen==0){
    if(temp_aux>=3000 && temp_aux%300){
        if(!(ufo[0]<-20 && ufo[1]>20)){                 // si se deja en descanzo la pantalla de inicio
            ufo[0]=ufo[0]-0.01;                          // esto hace que la nave roja salga de su posicion
            ufo[1]=ufo[1]+0.01;                          // "arrancando" de la pantalla
        }
    }
    else{
        temp_aux++;
    }

}
    glutTimerFunc(1,Avanzar,1);
    glutPostRedisplay();

}

#endif // SPACE_ALPHA_H_INCLUDED
