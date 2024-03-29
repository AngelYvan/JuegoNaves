#ifndef SPACE_SPRITES_H_INCLUDED
#define SPACE_SPRITES_H_INCLUDED

#include <string.h>
//La verdadera obra de arte esta en la creacion de los sprites xD, la mecanica del juego fue saliendo
//de esto
/***********************************************************************************************************/
int sprites[6][8][11]={
{                               //HONGO
    {0,0,0,0,1,1,1,0,0,0,0},
    {0,0,0,1,1,1,1,1,0,0,0},
    {0,0,1,1,1,1,1,1,1,0,0},
    {0,1,1,0,1,1,1,0,1,1,0},
    {0,1,1,1,1,1,1,1,1,1,0},
    {0,0,0,1,0,0,0,1,0,0,0},
    {0,0,1,0,1,1,1,0,1,0,0},
    {0,1,0,1,0,0,0,1,0,1,0}
},
{                               //ALIEN
    {0,0,1,0,0,0,0,0,1,0,0},
    {0,0,0,1,0,0,0,1,0,0,0},
    {0,0,1,1,1,1,1,1,1,0,0},
    {0,1,1,0,1,1,1,0,1,1,0},
    {1,1,1,1,1,1,1,1,1,1,1},
    {1,0,1,1,1,1,1,1,1,0,1},
    {1,0,1,0,0,0,0,0,1,0,1},
    {0,0,0,1,1,0,1,1,0,0,0}
},
{                               //PULPO
    {0,0,0,1,1,1,1,1,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,0},
    {1,1,1,1,1,1,1,1,1,1,1},
    {1,1,1,0,0,1,0,0,1,1,1},
    {1,1,1,1,1,1,1,1,1,1,1},
    {0,0,0,1,1,0,1,1,0,0,0},
    {0,0,1,1,0,1,0,1,1,0,0},
    {1,1,1,0,0,0,0,0,1,1,1}
},
{                               //UFO
    {0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,1,1,1,0,0,0,0},
    {0,0,1,1,1,1,1,1,1,0,0},
    {0,1,0,1,0,1,0,1,0,1,0},
    {1,1,1,1,1,1,1,1,1,1,1},
    {0,1,1,1,0,1,0,1,1,1,0},
    {0,0,1,0,0,0,0,0,1,0,0},
    {0,0,0,0,0,0,0,0,0,0,0}
},
{                               //NAVE
    {0,0,0,0,0,1,0,0,0,0,0},
    {0,0,0,0,1,1,1,0,0,0,0},
    {0,0,0,0,1,1,1,0,0,0,0},
    {0,1,1,1,1,1,1,1,1,1,0},
    {1,1,1,1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1,1,1,1}
},
{                               //EXPLOTAR
    {0,0,1,0,0,1,0,0,1,0,0},
    {1,0,0,1,0,1,0,1,0,0,1},
    {0,1,1,0,1,0,1,0,1,1,0},
    {0,0,0,1,0,0,0,1,0,0,0},
    {0,0,0,1,0,0,0,1,0,0,0},
    {0,1,1,0,1,0,1,0,1,1,0},
    {1,0,0,1,0,1,0,1,0,0,1},
    {0,0,1,0,0,1,0,0,1,0,0}

}
};
int numbers[10][7][5]={
{                   //0
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0}
},
{                   //1
    {0,0,0,1,0},
    {0,0,1,1,0},
    {0,1,0,1,0},
    {1,0,0,1,0},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {1,1,1,1,1}
},
{                   //2
    {0,1,1,1,0},
    {1,0,0,0,1},
    {0,0,0,1,0},
    {0,0,1,0,0},
    {0,1,0,0,0},
    {1,0,0,0,1},
    {1,1,1,1,1}
},
{                   //3
    {0,1,1,1,0},
    {1,0,0,0,1},
    {0,0,0,0,1},
    {0,1,1,1,0},
    {0,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0}
},
{                   //4
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {1,1,1,1,1},
    {0,0,0,0,1},
    {0,0,0,0,1},
    {0,0,0,0,1}
},
{                   //5
    {1,1,1,1,1},
    {1,0,0,0,0},
    {1,0,0,0,0},
    {1,1,1,1,0},
    {0,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0}
},
{                   //6
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,0},
    {1,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0}
},
{                   //7
    {1,1,1,1,1},
    {1,0,0,0,1},
    {0,0,0,1,0},
    {0,0,0,1,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0}
},
{                   //8
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0}
},
{                   //9
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,1},
    {0,0,0,0,1},
    {1,0,0,0,1},
    {0,1,1,1,0}
}
};
int simbols[3][7][5]={
{                   //?
    {0,1,1,1,0},
    {1,0,0,0,1},
    {1,0,0,0,1},
    {0,0,0,1,0},
    {0,0,1,0,0},
    {0,0,0,0,0},
    {0,0,1,0,0}
},
{                   //!
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,1,0,0},
    {0,0,0,0,0},
    {0,0,1,0,0}
},
{                   //=
    {0,0,0,0,0},
    {0,0,0,0,0},
    {1,1,1,1,1},
    {0,0,0,0,0},
    {1,1,1,1,1},
    {0,0,0,0,0},
    {0,0,0,0,0}
}
};
int barrera[3][11]={                    // Actualmente fuera de uso
    {1,1,1,1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1,1,1,1},
    {1,1,1,1,1,1,1,1,1,1,1}
};
int space[7][47]={                      // La palabra "space"
    {1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,0,1,1,1,1,1},
    {1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0},
    {1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,1,1,1,1,0,1,0,0,0,1,0,1,0,1,1,1,1,1,0,1,0,0,0,0,0,1,0,1,1,1,1,1},
    {1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,1},
    {1,0,1,0,0,0,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,0,1,0,1,0,1,1,1,1,1,0,1,0,0,0,0,0,1,0,1,1,1,1,1},
    {0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};
/*int space[7][29]={                      // La palabra "space"
    {1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1},
    {1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0},
    {1,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,0,1,0,0,0,0,0,1,1,1,1,1},
    {0,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0},
    {1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1},
    {0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};*/
int invaders[7][61]={                   // La palabra "invaders"
    {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,1,1,1,1,0,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,0,1,0,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1},
    {1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0},
    {1,0,0,0,1,0,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,0,1,0,1,1,1,1,1,0,1,0,0,0,1,1,1,1,1,0,1,0,0,1,0,0,1,0,1,1,1,1,1,0,1,1,1,1,1},
    {1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1},
    {1,1,1,1,1,0,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,0,1,0,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,0,1,0,0,1,0,0,1,0,1,1,1,1,1,0,1,1,1,1,1}
};

/*int invaders[7][43]={                   // La palabra "invaders"
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,0,1,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1},
    {1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0},
    {1,0,1,0,0,0,1,0,1,0,0,1,0,0,1,1,1,1,1,0,1,0,0,0,1,0,1,1,1,1,1,0,1,0,0,0,0,0,1,1,1,1,1},
    {1,0,1,0,0,0,1,0,1,0,0,1,0,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1},
    {1,0,1,0,0,0,1,0,1,1,1,0,0,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,0,0,0,1,1,1,1,1}
};*/

int pts[9][19]={                        // sigla pts. (puntos... dont say...!)
    {0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,0},
    {1,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,0},
    {1,0,0,0,1,0,1,0,0,0,0,0,1,1,1,1,1,0,0},
    {1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0},
    {1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
};
/***********************************************************************************************************/
void ubicar_sprite(int sprite, float six, float siy, float tam_pix){    // imprime en pantalla el sprite
    float x, y;                                                         // de un enemigo
    int i, j;                                                           // "sprite" = numero del enemigo correspondiente
    six=six-10;                                                         // "six" y "siy" siempre seran posion (x, y)
    siy=siy-10;                                                         // "tam_pix" indica el tama�o del pixel o zoom
    for(j=0, y=0; j<8; j++, y=y-tam_pix){
        for(i=0, x=0; i<11; i++, x=x+tam_pix){
            if(sprites[sprite][j][i]==1){
                glRectf(0.0+x+six, 0.0+y+siy, tam_pix+x+six, tam_pix+y+siy);
            }
        }
    }
}
/***********************************************************************************************************/
void simbolo(int sprite, float six, float siy){                         // imprime en pantalla el sprite
    float x, y;                                                         // un simbolo ya sea "?", "!" o "="
    int i, j;
    six=six-10;
    siy=siy-10;
    for(j=0, y=0; j<7; j++, y=y-0.1){
        for(i=0, x=0; i<5; i++, x=x+0.1){
            if(simbols[sprite][j][i]==1){
                glRectf(0.0+x+six, 0.0+y+siy, 0.1+x+six, 0.1+y+siy);
            }
        }
    }
}
/***********************************************************************************************************/
void say_space(float six, float siy){                                   // imprime en pantalla la palabra space
    float x, y;
    int i, j;
    six=six-10;
    siy=siy-10;
    for(j=0, y=0; j<7; j++, y=y-0.3){
        for(i=0, x=0; i<47; i++, x=x+0.3){
            if(space[j][i]==1){
                glRectf(0.0+x+six, 0.0+y+siy, 0.3+x+six, 0.3+y+siy);
            }
        }
    }
}
/***********************************************************************************************************/
void say_invaders(float six, float siy){                                // imprime en pantalla la palabra invaders
    float x, y;
    int i, j;
    six=six-10;
    siy=siy-10;
    for(j=0, y=0; j<7; j++, y=y-0.3){
        for(i=0, x=0; i<61; i++, x=x+0.3){
            if(invaders[j][i]==1){
                glRectf(0.0+x+six, 0.0+y+siy, 0.3+x+six, 0.3+y+siy);
            }
        }
    }
}
/***********************************************************************************************************/
void say_pts(float six, float siy){                                     // imprime en pantalla la sigla pts
    float x, y;
    int i, j;
    six=six-10;
    siy=siy-10;
    for(j=0, y=0; j<9; j++, y=y-0.10){
        for(i=0, x=0; i<19; i++, x=x+0.10){
            if(pts[j][i]==1){
                glRectf(0.0+x+six, 0.0+y+siy, 0.10+x+six, 0.10+y+siy);
            }
        }
    }
}
/***********************************************************************************************************/
void numero(int num, float six, float siy){             // funcion que trapasa a sprite un numero dado
    int fragmento;
    int numero_v[100];
    int indice=0;
    float x, y, z;
    int i, j, k;
    six=six-10;
    siy=siy-10;
    z=0;
    if(num !=0){
        while(num>0){
            fragmento=num%10;
            num=num/10;
            numero_v[indice]=fragmento;
            indice++;
        }
        for(k=indice-1; k>=0; k--){
            for(j=0, y=0; j<7; j++, y=y-0.10){
                for(i=0, x=0; i<5; i++, x=x+0.10){
                    if(numbers[numero_v[k]][j][i]==1){
                        glRectf(0.0+x+six+z, 0.0+y+siy, 0.10+x+six+z, 0.10+y+siy);
                    }
                }
            }
            z=z+0.6;
        }
    }
    else{
        numero_v[indice]=0;
            for(j=0, y=0; j<7; j++, y=y-0.10){
                for(i=0, x=0; i<5; i++, x=x+0.10){
                    if(numbers[numero_v[0]][j][i]==1){
                        glRectf(0.0+x+six+z, 0.0+y+siy, 0.10+x+six+z, 0.10+y+siy);
                    }
                }
            }
            z=z+0.6;
    }

}
/***********************************************************************************************************/
void bala(float six, float siy){                        // imprime el sprite del disparo de la nave
    six=six-10;
    siy=siy-10;
    glRectf(six, siy, 0.08+six, 0.30+siy);
}
/***********************************************************************************************************/
void bomba(float bRad){
    //glRectf(six, siy, 0.08+six, 0.30+siy);
    glutSolidSphere(bRad,32,32);
}
/***********************************************************************************************************/
void mostrar_text(char cadena[], float x, float y){     //  funcion que muestra texto "no sprite"
    int tmp;
    for(tmp=0; tmp < strlen(cadena); tmp++) {
        glRasterPos2f( x + tmp*0.3, y );
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15,(int)cadena[tmp]);
    }
}


#endif // SPACE_SPRITES_H_INCLUDED

