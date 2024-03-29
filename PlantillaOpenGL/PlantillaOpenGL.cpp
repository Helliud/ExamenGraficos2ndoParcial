// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

#include "Shader.h"
#include "Vertice.h"

#include "Modelo.h"

using namespace std;

Shader *shader;
GLuint posicionID;
GLuint colorID;

Modelo *triangulo;
Modelo *cuadrado;
Modelo *fantasma;
Modelo *ojos;

void inicializarFantasma(){
	fantasma = new Modelo();

	Vertice v1 = {
		vec3(-0.1,0.9,0.0),
		vec4(1.0,0.5,0,1.0)
	};
	Vertice v2 = {
		vec3(-0.1,0.85,0.0),
		vec4(1,0.5,0,1.0)
	};
	Vertice v3 = {
		vec3(0.1,0.85,0.0),
		vec4(1,0.5,0,1.0)
	};
	Vertice v4 = {
		vec3(0.1,0.9,0.0),
		vec4(1,0.5,0,1.0)
	};


	/*---------------------------------------------*/
	Vertice v5 = {
		vec3(-0.2,0.85,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v6 = {
		vec3(-0.2,0.8,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v7 = {
		vec3(0.2,0.8,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v8 = {
		vec3(0.2,0.85,0.0),
		vec4(1,0.5,0,1.0)
	};

	/*---------------------------------------------*/
	Vertice v9 = {
		vec3(-0.25,0.8,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v10 = {
		vec3(-0.25,0.75,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v11 = {
		vec3(0.25,0.75,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v12 = {
		vec3(0.25,0.8,0.0),
		vec4(1,0.5,0,1.0)
	};

	/*---------------------------------------------*/
	Vertice v13 = {
		vec3(-0.3,0.75,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v14 = {
		vec3(-0.3,0.7,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v15 = {
		vec3(0.3,0.7,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v16 = {
		vec3(0.3,0.75,0.0),
		vec4(1,0.5,0,1.0)
	};

	/*---------------------------------------------*/
	Vertice v17 = {
		vec3(-0.3,0.7,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v18 = {
		vec3(-0.3,0.65,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v19 = {
		vec3(0.3,0.65,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v20 = {
		vec3(0.3,0.7,0.0),
		vec4(1,0.5,0,1.0)
	};

	/*---------------------------------------------*/
	Vertice v21 = {
		vec3(-0.3,0.65,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v22 = {
		vec3(-0.3,0.6,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v23 = {
		vec3(0.3,0.6,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v24 = {
		vec3(0.3,0.65,0.0),
		vec4(1,0.5,0,1.0)
	};

	/*---------------------------------------------*/
	Vertice v25 = {
		vec3(-0.35,0.6,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v26 = {
		vec3(-0.35,0.55,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v27 = {
		vec3(0.35,0.55,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v28 = {
		vec3(0.35,0.6,0.0),
		vec4(1,0.5,0,1.0)
	};

	/*---------------------------------------------*/
	Vertice v29 = {
		vec3(-0.35,0.55,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v30 = {
		vec3(-0.35,0.5,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v31 = {
		vec3(0.35,0.5,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v32 = {
		vec3(0.35,0.55,0.0),
		vec4(1,0.5,0,1.0)
	};

	/*---------------------------------------------*/
	Vertice v33 = {
		vec3(-0.35,0.5,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v34 = {
		vec3(-0.35,0.45,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v35 = {
		vec3(0.35,0.45,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v36 = {
		vec3(0.35,0.5,0.0),
		vec4(1,0.5,0,1.0)
	};

	/*---------------------------------------------*/
	Vertice v37 = {
		vec3(-0.35,0.45,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v38 = {
		vec3(-0.35,0.4,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v39 = {
		vec3(0.35,0.4,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v40 = {
		vec3(0.35,0.45,0.0),
		vec4(1,0.5,0,1.0)
	};

	/*---------------------------------------------*/
	Vertice v41 = {
		vec3(-0.35,0.4,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v42 = {
		vec3(-0.35,0.35,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v43 = {
		vec3(0.35,0.35,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v44 = {
		vec3(0.35,0.4,0.0),
		vec4(1,0.5,0,1.0)
	};

	/*---------------------------------------------*/
	Vertice v45 = {
		vec3(-0.35,0.35,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v46 = {
		vec3(-0.35,0.3,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v47 = {
		vec3(0.35,0.3,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v48 = {
		vec3(0.35,0.35,0.0),
		vec4(1,0.5,0,1.0)
	};

	/*---------------------------------------------*/
	Vertice v49 = {
		vec3(-0.35,0.3,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v50 = {
		vec3(-0.35,0.25,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v51 = {
		vec3(0.35,0.25,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v52 = {
		vec3(0.35,0.3,0.0),
		vec4(1,0.5,0,1.0)
	};

	/*---------------------------------------------*/
	Vertice v53 = {
		vec3(-0.35,0.25,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v54 = {
		vec3(-0.35,0.2,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v55 = {
		vec3(0.35,0.2,0.0),
		vec4(1,0.5,0,1.0)
	};

	Vertice v56 = {
		vec3(0.35,0.25,0.0),
		vec4(1,0.5,0,1.0)
	};

	/*---------------------------------------------*/
	Vertice v57 = {
		vec3(-0.3,0.25,0.0),
		vec4(1,1,1,1.0)
	};

	Vertice v58 = {
		vec3(-0.3,0.2,0.0),
		vec4(1,1,1,1.0)
	};

	Vertice v59 = {
		vec3(-0.15,0.2,0.0),
		vec4(1,1,1,1.0)
	};

	Vertice v60 = {
		vec3(-0.15,0.25,0.0),
		vec4(1,1,1,1.0)
	};


	/*---------------------------------------------*/
	Vertice v61 = {
		vec3(-0.25,0.3,0.0),
		vec4(1,1,1,1.0)
	};

	Vertice v62 = {
		vec3(-0.25,0.25,0.0),
		vec4(1,1,1,1.0)
	};

	Vertice v63 = {
		vec3(-0.2,0.25,0.0),
		vec4(1,1,1,1.0)
	};

	Vertice v64 = {
		vec3(-0.2,0.3,0.0),
		vec4(1,1,1,1.0)
	};

	/*---------------------------------------------*/
	Vertice v65 = {
		vec3(-0.05,0.3,0.0),
		vec4(1,1,1,1.0)
	};

	Vertice v66 = {
		vec3(-0.05,0.2,0.0),
		vec4(1,1,1,1.0)
	};

	Vertice v67 = {
		vec3(0.05,0.2,0.0),
		vec4(1,1,1,1.0)
	};

	Vertice v68 = {
		vec3(0.05,0.3,0.0),
		vec4(1,1,1,1.0)
	};


	/*---------------------------------------------*/
	Vertice v69 = {
		vec3(0.25,0.3,0.0),
		vec4(1,1,1,1.0)
	};

	Vertice v70 = {
		vec3(0.25,0.25,0.0),
		vec4(1,1,1,1.0)
	};

	Vertice v71 = {
		vec3(0.2,0.25,0.0),
		vec4(1,1,1,1.0)
	};

	Vertice v72 = {
		vec3(0.2,0.3,0.0),
		vec4(1,1,1,1.0)
	};

	/*---------------------------------------------*/
	Vertice v73 = {
		vec3(0.3,0.25,0.0),
		vec4(1,1,1,1.0)
	};

	Vertice v74 = {
		vec3(0.3,0.2,0.0),
		vec4(1,1,1,1.0)
	};

	Vertice v75 = {
		vec3(0.15,0.2,0.0),
		vec4(1,1,1,1.0)
	};

	Vertice v76 = {
		vec3(0.15,0.25,0.0),
		vec4(1,1,1,1.0)
	};


	fantasma->vertices.push_back(v1);
	fantasma->vertices.push_back(v2);
	fantasma->vertices.push_back(v3);
	fantasma->vertices.push_back(v4);

	fantasma->vertices.push_back(v5);
	fantasma->vertices.push_back(v6);
	fantasma->vertices.push_back(v7);
	fantasma->vertices.push_back(v8);

	fantasma->vertices.push_back(v9);
	fantasma->vertices.push_back(v10);
	fantasma->vertices.push_back(v11);
	fantasma->vertices.push_back(v12);

	fantasma->vertices.push_back(v13);
	fantasma->vertices.push_back(v14);
	fantasma->vertices.push_back(v15);
	fantasma->vertices.push_back(v16);

	fantasma->vertices.push_back(v17);
	fantasma->vertices.push_back(v18);
	fantasma->vertices.push_back(v19);
	fantasma->vertices.push_back(v20);

	fantasma->vertices.push_back(v21);
	fantasma->vertices.push_back(v22);
	fantasma->vertices.push_back(v23);
	fantasma->vertices.push_back(v24);

	fantasma->vertices.push_back(v25);
	fantasma->vertices.push_back(v26);
	fantasma->vertices.push_back(v27);
	fantasma->vertices.push_back(v28);

	fantasma->vertices.push_back(v29);
	fantasma->vertices.push_back(v30);
	fantasma->vertices.push_back(v31);
	fantasma->vertices.push_back(v32);

	fantasma->vertices.push_back(v33);
	fantasma->vertices.push_back(v34);
	fantasma->vertices.push_back(v35);
	fantasma->vertices.push_back(v36);

	fantasma->vertices.push_back(v37);
	fantasma->vertices.push_back(v38);
	fantasma->vertices.push_back(v39);
	fantasma->vertices.push_back(v40);

	fantasma->vertices.push_back(v41);
	fantasma->vertices.push_back(v42);
	fantasma->vertices.push_back(v43);
	fantasma->vertices.push_back(v44);

	fantasma->vertices.push_back(v45);
	fantasma->vertices.push_back(v46);
	fantasma->vertices.push_back(v47);
	fantasma->vertices.push_back(v48);

	fantasma->vertices.push_back(v49);
	fantasma->vertices.push_back(v50);
	fantasma->vertices.push_back(v51);
	fantasma->vertices.push_back(v52);
	
	fantasma->vertices.push_back(v53);
	fantasma->vertices.push_back(v54);
	fantasma->vertices.push_back(v55);
	fantasma->vertices.push_back(v56);


	fantasma->vertices.push_back(v57);
	fantasma->vertices.push_back(v58);
	fantasma->vertices.push_back(v59);
	fantasma->vertices.push_back(v60);
	
	fantasma->vertices.push_back(v61);
	fantasma->vertices.push_back(v62);
	fantasma->vertices.push_back(v63);
	fantasma->vertices.push_back(v64);
	
	fantasma->vertices.push_back(v65);
	fantasma->vertices.push_back(v66);
	fantasma->vertices.push_back(v67);
	fantasma->vertices.push_back(v68);
	
	fantasma->vertices.push_back(v69);
	fantasma->vertices.push_back(v70);
	fantasma->vertices.push_back(v71);
	fantasma->vertices.push_back(v72);
	
	fantasma->vertices.push_back(v73);
	fantasma->vertices.push_back(v74);
	fantasma->vertices.push_back(v75);
	fantasma->vertices.push_back(v76);
}



void inicializarOjos() {
	ojos = new Modelo();

	/*---------------------------------------------*/
	Vertice v1 = {
		vec3(-0.15,0.75,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v2 = {
		vec3(-0.15,0.7,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v3 = {
		vec3(-0.05,0.7,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v4 = {
		vec3(-0.05,0.75,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	/*---------------------------------------------*/
	Vertice v5 = {
		vec3(-0.2,0.7,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v6 = {
		vec3(-0.2,0.65,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v7 = {
		vec3(0.0,0.65,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v8 = {
		vec3(0.0,0.7,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	/*----------1-----------------------------------*/
	Vertice v9 = {
		vec3(-0.2,0.65,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v10 = {
		vec3(-0.2,0.6,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v11 = {
		vec3(0.0,0.6,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v12 = {
		vec3(0.0,0.65,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	/*---------------------------------------------*/
	Vertice v13 = {
		vec3(-0.2,0.6,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v14 = {
		vec3(-0.2,0.55,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v15 = {
		vec3(0.0,0.55,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v16 = {
		vec3(0.0,0.6,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	/*---------------------------------------------*/
	Vertice v17 = {
		vec3(-0.15,0.55,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v18 = {
		vec3(-0.15,0.5,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v19 = {
		vec3(-0.05,0.5,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v20 = {
		vec3(-0.05,0.55,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	/*---------------------------------------------*/
	Vertice v21 = {
		vec3(0.25,0.75,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v22 = {
		vec3(0.25,0.7,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v23 = {
		vec3(0.15,0.7,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v24 = {
		vec3(0.15,0.75,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	/*---------------------------------------------*/
	Vertice v25 = {
		vec3(0.3,0.7,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v26 = {
		vec3(0.3,0.65,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v27 = {
		vec3(0.1,0.65,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v28 = {
		vec3(0.1,0.7,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	/*---------------------------------------------*/
	Vertice v29 = {
		vec3(0.3,0.65,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v30 = {
		vec3(0.3,0.6,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v31 = {
		vec3(0.1,0.6,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v32 = {
		vec3(0.1,0.65,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	/*---------------------------------------------*/
	Vertice v33 = {
		vec3(0.3,0.6,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v34 = {
		vec3(0.3,0.55,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v35 = {
		vec3(0.1,0.55,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v36 = {
		vec3(0.1,0.6,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};


	/*---------------------------------------------*/
	Vertice v37 = {
		vec3(0.25,0.55,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v38 = {
		vec3(0.25,0.5,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v39 = {
		vec3(0.15,0.5,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};

	Vertice v40 = {
		vec3(0.15,0.55,0.0),
		vec4(1.0,1.0,1.0,1.0)
	};


	/*---------------------------------------------*/
	Vertice v41 = {
		vec3(-0.1,0.65,0.0),
		vec4(0.0,0.0,1.0,1.0)
	};

	Vertice v42 = {
		vec3(-0.1,0.55,0.0),
		vec4(0.0,0.0,1.0,1.0)
	};

	Vertice v43 = {
		vec3(0.0,0.55,0.0),
		vec4(0.0,0.0,1.0,1.0)
	};

	Vertice v44 = {
		vec3(0.0,0.65,0.0),
		vec4(0.0,0.0,1.0,1.0)
	};

	/*---------------------------------------------*/
	Vertice v45 = {
		vec3(0.3,0.65,0.0),
		vec4(0.0,0.0,1.0,1.0)
	};

	Vertice v46 = {
		vec3(0.3,0.55,0.0),
		vec4(0.0,0.0,1.0,1.0)
	};

	Vertice v47 = {
		vec3(0.2,0.55,0.0),
		vec4(0.0,0.0,1.0,1.0)
	};

	Vertice v48 = {
		vec3(0.2,0.65,0.0),
		vec4(0.0,0.0,1.0,1.0)
	};


	ojos->vertices.push_back(v1);
	ojos->vertices.push_back(v2);
	ojos->vertices.push_back(v3);
	ojos->vertices.push_back(v4);

	ojos->vertices.push_back(v5);
	ojos->vertices.push_back(v6);
	ojos->vertices.push_back(v7);
	ojos->vertices.push_back(v8);

	ojos->vertices.push_back(v9);
	ojos->vertices.push_back(v10);
	ojos->vertices.push_back(v11);
	ojos->vertices.push_back(v12);

	ojos->vertices.push_back(v13);
	ojos->vertices.push_back(v14);
	ojos->vertices.push_back(v15);
	ojos->vertices.push_back(v16);

	ojos->vertices.push_back(v17);
	ojos->vertices.push_back(v18);
	ojos->vertices.push_back(v19);
	ojos->vertices.push_back(v20);


	ojos->vertices.push_back(v21);
	ojos->vertices.push_back(v22);
	ojos->vertices.push_back(v23);
	ojos->vertices.push_back(v24);
	
	ojos->vertices.push_back(v25);
	ojos->vertices.push_back(v26);
	ojos->vertices.push_back(v27);
	ojos->vertices.push_back(v28);
	
	ojos->vertices.push_back(v29);
	ojos->vertices.push_back(v30);
	ojos->vertices.push_back(v31);
	ojos->vertices.push_back(v32);
	
	ojos->vertices.push_back(v33);
	ojos->vertices.push_back(v34);
	ojos->vertices.push_back(v35);
	ojos->vertices.push_back(v36);

	ojos->vertices.push_back(v37);
	ojos->vertices.push_back(v38);
	ojos->vertices.push_back(v39);
	ojos->vertices.push_back(v40);



	ojos->vertices.push_back(v41);
	ojos->vertices.push_back(v42);
	ojos->vertices.push_back(v43);
	ojos->vertices.push_back(v44);

	
	ojos->vertices.push_back(v45);
	ojos->vertices.push_back(v46);
	ojos->vertices.push_back(v47);
	ojos->vertices.push_back(v48);
}

void inicializarCuadrado() {
	cuadrado = new Modelo();

	Vertice v1 = {
		vec3(-0.8,0.8,0.0),
		vec4(1,0.5,0,1.0)
	};
	Vertice v2 = {
		vec3(-0.4,0.8,0.0),
		vec4(1,0.5,0,1.0)
	};
	Vertice v3 = {
		vec3(-0.4,0.5,0.0),
		vec4(1,0.5,0,1.0)
	};
	Vertice v4 = {
		vec3(-0.8,0.5,0.0),
		vec4(1,0.5,0,1.0)
	};

	cuadrado->vertices.push_back(v1);
	cuadrado->vertices.push_back(v2);
	cuadrado->vertices.push_back(v3);
	cuadrado->vertices.push_back(v4);
}

void inicializarTriangulo() {
	triangulo = new Modelo();

	Vertice v1 =
	{
		vec3(0.0f,0.3f,0.0f),
		vec4(1.0f,0.8f,0.0f,1.0f)
	};
	Vertice v2 =
	{
		vec3(-0.3f,-0.3f,0.0f),
		vec4(1.0f,0.8f,0.0f,1.0f)
	};
	Vertice v3 =
	{
		vec3(0.3f,-0.3f,0.0f),
		vec4(1.0f,0.8f,0.0f,1.0f)
	};

	triangulo->vertices.push_back(v1);
	triangulo->vertices.push_back(v2);
	triangulo->vertices.push_back(v3);
}

void dibujar() {
	//triangulo->dibujar(GL_TRIANGLES);
	//cuadrado->dibujar(GL_QUADS);
	fantasma->dibujar(GL_QUADS);
	ojos->dibujar(GL_QUADS);
}

void actualizar() {

}

int main()
{
	//Declaramos apuntador de ventana
	GLFWwindow *window;
	
	//Si no se pudo iniciar glfw
	//terminamos ejcución
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}
	//Si se pudo iniciar GLFW
	//entonces inicializamos la ventana
	window =
		glfwCreateWindow(1024, 768, "Ventana", 
			NULL, NULL);
	//Si no podemos iniciar la ventana
	//Entonces terminamos ejecucion
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//Establecemos el contexto
	glfwMakeContextCurrent(window);

	//Una vez establecido  el contexto
	//Activamos funciones modernas
	glewExperimental = true;
	GLenum errorGlew = glewInit();
	if (errorGlew != GLEW_OK) {
		cout << 
			glewGetErrorString(errorGlew);
	}

	const GLubyte *versionGL =
		glGetString(GL_VERSION);
	cout << "Version OpenGL: "
		<< versionGL;

	inicializarTriangulo();
	inicializarCuadrado();
	inicializarFantasma();
	inicializarOjos();

	const char *rutaVertex = 
		"VertexShader.shader";
	const char *rutaFragment = 
		"FragmentShader.shader";

	shader = new Shader(rutaVertex, rutaFragment);

	//Mapeo de atributos
	posicionID =
		glGetAttribLocation(shader->getID(), "posicion");
	colorID =
		glGetAttribLocation(shader->getID(), "color");

	//Desenlazar el shader
	shader->desenlazar();

	//Establecer shader al modelo
	triangulo->shader = shader;

	//Inicializar vertex array
	triangulo->inicializarVertexArray(posicionID, colorID);
	
	//Establecer shader al modelo
	cuadrado->shader = shader;

	//Inicializar vertex array
	cuadrado->inicializarVertexArray(posicionID, colorID);

	//Establecer shader del modelo ALIEN
	fantasma->shader = shader;

	//Inicializar vertex array del ALIEN
	fantasma->inicializarVertexArray(posicionID, colorID);

	//Establecer shader del modelo ALIEN
	ojos->shader = shader;

	//Inicializar vertex array del ALIEN
	ojos->inicializarVertexArray(posicionID, colorID);


	//Ciclo de dibujo (Draw loop)
	while (!glfwWindowShouldClose(window)) {
		//Esablecer region de dibujo
		glViewport(0, 0, 1024, 768);
		//Establece el color de borrado
		glClearColor(1, 1, 1, 1);
		//Borramos
		glClear(
			GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo
		dibujar();
		actualizar();

		//Cambiar los buffers
		glfwSwapBuffers(window);
		//Reconocer si hay entradas
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();

    return 0;
}