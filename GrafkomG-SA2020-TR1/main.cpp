#include <GL/freeglut.h>
#include <windows.h>
#include <iostream>

double rotate_y = 0, rotate_x = 0, zoom = 0.5;
float xrot = 0.0f, yrot = 0.0f;
int is_depth, a;

void Gedung() {

	//gedung belakang
	glBegin(GL_POLYGON);
	glColor3ub(240, 230, 140);
	glVertex3f(0.8, 0, -0.4);
	glVertex3f(0.8, 0, 1.6);
	glVertex3f(0.35, 0, 1.6);
	glVertex3f(0.35, 0, 1.5);
	glVertex3f(0, 0, 1.5);
	glVertex3f(0, 0, 1.4);
	glVertex3f(-0.45, 0, 1.4);
	glVertex3f(-0.45, 0, 1.2);
	glVertex3f(-1, 0, 1.2);
	glVertex3f(-1, 0, -0.4);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-1.1, 0, 1.2);
	glVertex3f(-1, 0, 1.2);
	glVertex3f(-1, 0, -0.4);
	glVertex3f(-1.1, 0, -0.4);
	glEnd();

	//tengah belakang
	glBegin(GL_POLYGON);
	glColor3ub(240, 230, 140);
	glVertex3f(1, -0.2, 1.6);
	glVertex3f(0.8, 0, 1.6);
	glVertex3f(0.8, 0, -0.4);
	glVertex3f(1, -0.2, -0.4);
	glEnd();

	//belakang
	glBegin(GL_POLYGON);
	glColor3ub(240, 230, 140);
	glVertex3f(1, -0.2, -0.4);
	glVertex3f(1, -0.2, 1.6);
	glVertex3f(1, -0.65, 1.6);
	glVertex3f(1, -0.65, 1.5);
	glVertex3f(1, -0.95, 1.5);
	glVertex3f(1, -0.95, 1.4);
	glVertex3f(1, -1.4, 1.4);
	glVertex3f(1, -1.4, 1.2);
	glVertex3f(1, -2, 1.2);
	glVertex3f(1, -2, -0.4);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(240, 230, 140);
	glVertex3f(1, -2.1, -0.4);
	glVertex3f(1, -2, -0.4);
	glVertex3f(1, -2, 1.2);
	glVertex3f(1, -2.1, 1.2);
	glEnd();

	//samping kiri
	glBegin(GL_POLYGON);
	glColor3ub(211, 211, 211);
	glVertex3f(-1, 0, 1.2);
	glVertex3f(-1, -0.45, 1.2);
	glVertex3f(-1, -0.45, -0.4);
	glVertex3f(-1, 0, -0.4);
	glEnd();

	//dalam kiri
	glBegin(GL_POLYGON);
	glColor3ub(240, 230, 140);
	glVertex3f(0.35, -0.45, 0);
	glVertex3f(0.35, -0.45, 1.6);
	glVertex3f(0.35, -0.45, 1.5);
	glVertex3f(0, -0.45, 1.5);
	glVertex3f(0, -0.45, 1.4);
	glVertex3f(-0.45, -0.45, 1.4);
	glVertex3f(-0.45, -0.45, 1.2);
	glVertex3f(-1, -0.45, 1.2);
	glVertex3f(-1, -0.45, 0);
	glEnd();

	//tengahtengah
	glBegin(GL_POLYGON);
	glColor3ub(240, 230, 140);
	glVertex3f(0.35, -0.45, 0);
	glVertex3f(0.55, -0.65, 0);
	glVertex3f(0.55, -0.65, 1.6);
	glVertex3f(0.35, -0.45, 1.6);
	glEnd();

	//dalam kanan
	glBegin(GL_POLYGON);
	glColor3ub(240, 230, 140);
	glVertex3f(0.55, -0.65, 0);
	glVertex3f(0.55, -0.65, 1.6);
	glVertex3f(0.55, -0.65, 1.5);
	glVertex3f(0.55, -0.95, 1.5);
	glVertex3f(0.55, -0.95, 1.4);
	glVertex3f(0.55, -1.4, 1.4);
	glVertex3f(0.55, -1.4, 1.2);
	glVertex3f(0.55, -2, 1.2);
	glVertex3f(0.55, -2, 0);
	glEnd();

	//samping kanan
	glBegin(GL_QUADS);
	glColor3ub(211, 211, 211);
	glVertex3f(0.55, -2, 0);
	glVertex3f(1, -2, 0);
	glVertex3f(1, -2, 1.2);
	glVertex3f(0.55, -2, 1.2);
	glEnd();

	//atap 1
	glBegin(GL_QUADS);
	glColor3ub(200, 200, 200);
	glVertex3f(-1, 0, 1.2);
	glVertex3f(-0.45, 0, 1.2);
	glVertex3f(-0.45, -0.45, 1.2);
	glVertex3f(-1, -0.45, 1.2);
	glEnd();

	//atap 2
	glBegin(GL_QUADS);
	glColor3ub(200, 200, 200);
	glVertex3f(-0.45, 0, 1.4);
	glVertex3f(-0.45, -0.45, 1.4);
	glVertex3f(0, -0.45, 1.4);
	glVertex3f(0, 0, 1.4);
	glEnd();

	//atap 3
	glBegin(GL_QUADS);
	glColor3ub(200, 200, 200);
	glVertex3f(0.35, 0, 1.5);
	glVertex3f(0.35, -0.45, 1.5);
	glVertex3f(0, -0.45, 1.5);
	glVertex3f(0, 0, 1.5);
	glEnd();

	//atap 4
	glBegin(GL_QUADS);
	glColor3ub(200, 200, 200);
	glVertex3f(1, -0.65, 1.5);
	glVertex3f(0.55, -0.65, 1.5);
	glVertex3f(0.55, -0.95, 1.5);
	glVertex3f(1, -0.95, 1.5);
	glEnd();

	//atap 5
	glBegin(GL_QUADS);
	glColor3ub(200, 200, 200);
	glVertex3f(0.55, -0.95, 1.4);
	glVertex3f(1, -0.95, 1.4);
	glVertex3f(1, -1.4, 1.4);
	glVertex3f(0.55, -1.4, 1.4);
	glEnd();

	//atap 6
	glBegin(GL_QUADS);
	glColor3ub(200, 200, 200);
	glVertex3f(0.55, -1.4, 1.2);
	glVertex3f(1, -1.4, 1.2);
	glVertex3f(1, -2, 1.2);
	glVertex3f(0.55, -2, 1.2);
	glEnd();

	//atap tengah
	glBegin(GL_POLYGON);
	glColor3ub(200, 200, 200);
	glVertex3f(0.35, 0, 1.6);
	glVertex3f(0.35, -0.45, 1.6);
	glVertex3f(0.55, -0.65, 1.6);
	glVertex3f(1, -0.65, 1.6);
	glVertex3f(1, -0.2, 1.6);
	glVertex3f(0.8, 0, 1.6);
	glEnd();

	//dinding atap 1
	glBegin(GL_QUADS);
	glColor3ub(105, 105, 105);
	glVertex3f(-0.45, 0, 1.2);
	glVertex3f(-0.45, -0.45, 1.2);
	glVertex3f(-0.45, -0.45, 1.4);
	glVertex3f(-0.45, 0, 1.4);

	glEnd();
	//dinding atap 2
	glBegin(GL_QUADS);
	glColor3ub(105, 105, 105);
	glVertex3f(0, 0, 1.4);
	glVertex3f(0, -0.45, 1.4);
	glVertex3f(0, -0.45, 1.5);
	glVertex3f(0, 0, 1.5);

	glEnd();
	//dinding atap 3
	glBegin(GL_QUADS);
	glColor3ub(105, 105, 105);
	glVertex3f(0.35, 0, 1.5);
	glVertex3f(0.35, 0, 1.6);
	glVertex3f(0.35, -0.45, 1.6);
	glVertex3f(0.35, -0.45, 1.5);

	glEnd();
	//dinding atap 4
	glBegin(GL_QUADS);
	glColor3ub(105, 105, 105);
	glVertex3f(0.55, -0.65, 1.5);
	glVertex3f(0.55, -0.65, 1.6);
	glVertex3f(1, -0.65, 1.6);
	glVertex3f(1, -0.65, 1.5);

	glEnd();
	//dinding atap 5
	glBegin(GL_QUADS);
	glColor3ub(105, 105, 105);
	glVertex3f(0.55, -0.95, 1.4);
	glVertex3f(0.55, -0.95, 1.5);
	glVertex3f(1, -0.95, 1.5);
	glVertex3f(1, -0.95, 1.4);
	glEnd();

	//dinding atap 6
	glBegin(GL_QUADS);
	glColor3ub(105, 105, 105);
	glVertex3f(0.55, -1.4, 1.4);
	glVertex3f(1, -1.4, 1.4);
	glVertex3f(1, -1.4, 1.2);
	glVertex3f(0.55, -1.4, 1.2);
	glEnd();
}

void Atapbawah() {
	//atas
	glBegin(GL_POLYGON);
	glColor3ub(128, 0, 0);
	glVertex3f(0.55, -2, 0.3);
	glVertex3f(-0.4, -2, 0.3);
	glVertex3f(-1, -1.4, 0.3);
	glVertex3f(-1, -0.45, 0.3);
	glVertex3f(0.35, -0.45, 0.3);
	glVertex3f(0.55, -0.65, 0.3);

	glEnd();
	//bwh
	glBegin(GL_POLYGON);
	glColor3ub(128, 0, 0);
	glVertex3f(0.55, -2, 0.1);
	glVertex3f(-0.4, -2, 0.1);
	glVertex3f(-1, -1.4, 0.1);
	glVertex3f(-1, -0.45, 0.1);
	glVertex3f(0.35, -0.45, 0.1);
	glVertex3f(0.55, -0.65, 0.1);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(-1, -0.45, 0.3);
	glVertex3f(-1, -1.4, 0.3);
	glVertex3f(-1, -1.4, 0.1);
	glVertex3f(-1, -0.45, 0.1);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(-1, -1.4, 0.3);
	glVertex3f(-1, -1.4, 0.1);
	glVertex3f(-0.4, -2, 0.1);
	glVertex3f(-0.4, -2, 0.3);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(-0.4, -2, 0.1);
	glVertex3f(-0.4, -2, 0.3);
	glVertex3f(0.55, -2, 0.3);
	glVertex3f(0.55, -2, 0.1);
	glEnd();


}

void Lantaibwh() {
	//atas
	glBegin(GL_POLYGON);
	glColor3ub(255, 0, 0);
	glVertex3f(0.55, -2, 0);
	glVertex3f(-0.4, -2, 0);
	glVertex3f(-1, -1.4, 0);
	glVertex3f(-1, -0.45, 0);
	glVertex3f(0.35, -0.45, 0);
	glVertex3f(0.55, -0.65, 0);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	glVertex3f(0.55, -2, 0);
	glVertex3f(-0.4, -2, 0);
	glVertex3f(-1, -1.4, 0);
	glVertex3f(-1, -0.45, 0);
	glVertex3f(0.35, -0.45, 0);
	glVertex3f(0.55, -0.65, 0);
	glEnd();

	//bwh
	glBegin(GL_POLYGON);
	glColor3ub(0, 100, 0);
	glVertex3f(0.55, -2, -0.1);
	glVertex3f(-0.4, -2, -0.1);
	glVertex3f(-1, -1.4, -0.1);
	glVertex3f(-1, -0.45, -0.1);
	glVertex3f(0.35, -0.45, -0.1);
	glVertex3f(0.55, -0.65, -0.1);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-1, -0.45, 0);
	glVertex3f(-1, -1.4, 0);
	glVertex3f(-0.4, -2, 0);
	glVertex3f(0.55, -2, 0);
	glVertex3f(0.55, -2, -0.1);
	glVertex3f(-0.4, -2, -0.1);
	glVertex3f(-1, -1.4, -0.1);
	glVertex3f(-1, -0.45, -0.1);
	glEnd();
}

void Lataran() {
	glBegin(GL_POLYGON);
	glColor3ub(10, 10, 10);
	glVertex3f(-1, -1, -0.1);
	glVertex3f(-1.6, -1, -0.1);
	glVertex3f(-1.6, -2, -0.1);
	glVertex3f(-1.45, -2, -0.1);
	glVertex3f(-1, -2.45, -0.1);
	glVertex3f(-1, -2.6, -0.1);
	glVertex3f(0, -2.6, -0.1);
	glVertex3f(0, -2, -0.1);
	glVertex3f(-0.4, -2, -0.1);
	glVertex3f(-1, -1.4, -0.1);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3ub(20, 20, 20);
	glVertex3f(-1, -1, -0.2);
	glVertex3f(-1.6, -1, -0.2);
	glVertex3f(-1.6, -2, -0.2);
	glVertex3f(-1.45, -2, -0.2);
	glVertex3f(-1, -2.45, -0.2);
	glVertex3f(-1, -2.6, -0.2);
	glVertex3f(0, -2.6, -0.2);
	glVertex3f(0, -2, -0.2);
	glVertex3f(-0.4, -2, -0.2);
	glVertex3f(-1, -1.4, -0.2);
	glEnd();

	//tembok bawah
	glBegin(GL_QUADS);
	glColor3ub(200, 200, 200);
	glVertex3f(-1, -1, -0.1);
	glVertex3f(-1.6, -1, -0.1);
	glVertex3f(-1.6, -1, -0.4);
	glVertex3f(-1, -1, -0.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(-1.6, -1, -0.4);
	glVertex3f(-1.6, -1, -0.1);
	glVertex3f(-1.6, -2, -0.1);
	glVertex3f(-1.6, -2, -0.4);
	glEnd();
	//kanan
	glBegin(GL_QUADS);
	glVertex3f(-1, -2.6, -0.1);
	glVertex3f(0, -2.6, -0.1);
	glVertex3f(0, -2.6, -0.4);
	glVertex3f(-1, -2.6, -0.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(0, -2, -0.1);
	glVertex3f(0, -2.6, -0.1);
	glVertex3f(0, -2.6, -0.4);
	glVertex3f(0, -2, -0.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(-1, -2.45, -0.4);
	glVertex3f(-1, -2.45, -0.1);
	glVertex3f(-1.45, -2, -0.1);
	glVertex3f(-1.45, -2, -0.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(-1.45, -2, -0.1);
	glVertex3f(-1.6, -2, -0.1);
	glVertex3f(-1.6, -2, -0.4);
	glVertex3f(-1.45, -2, -0.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(-1, -2.45, -0.1);
	glVertex3f(-1, -2.6, -0.1);
	glVertex3f(-1, -2.6, -0.4);
	glVertex3f(-1, -2.45, -0.4);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(-0.95, -0.45, 1.1);
	glVertex3f(-0.95, -0.45, 1);
	glVertex3f(-0.85, -0.45, 1);
	glVertex3f(-0.85, -0.45, 1.1);
	glEnd();

	//bangunan tambahan
					//atap kiri
	glBegin(GL_POLYGON);
	glColor3ub(200, 200, 200);
	glVertex3f(-1.1, -0.2, 1.2);
	glVertex3f(-1, -0.2, 1.2);
	glVertex3f(-1, 0, 1.2);
	glVertex3f(-1.1, 0, 1.2);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex3f(-1, -0.2, 1.2);
	glVertex3f(-1.1, -0.2, 1.2);
	glVertex3f(-1.1, -0.2, 0.05);
	glVertex3f(-1, -0.2, 0.05);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 255);
	glVertex3f(-1.1, -1, 0.05);
	glVertex3f(-1.1, -0.2, 0.05);
	glVertex3f(-1, -0.2, 0.05);
	glVertex3f(-1, -1, 0.05);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(211, 211, 211);
	glVertex3f(-1.1, -0.2, 1.2);
	glVertex3f(-1.1, -0.2, 0.05);
	glVertex3f(-1.1, 0, 0.05);
	glVertex3f(-1.1, 0, 1.2);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(211, 211, 211);
	glVertex3f(-1.1, -1, 0.05);
	glVertex3f(-1.1, 0, 0.05);
	glVertex3f(-1.1, 0, -0.4);
	glVertex3f(-1.1, -1, -0.4);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(211, 211, 211);
	glVertex3f(-1, -1, 0.05);
	glVertex3f(-1.1, -1, 0.05);
	glVertex3f(-1.1, -1, -0.4);
	glVertex3f(-1, -1, -0.4);
	glEnd();


	//pembatas 
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(-1.35, -1, -0.09);
	glVertex3f(-1.6, -1, -0.09);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1.6, -1, -0.09);
	glVertex3f(-1.6, -2, -0.09);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1, -2.6, -0.09);
	glVertex3f(0, -2.6, -0.09);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1, -2.45, -0.09);
	glVertex3f(-1.45, -2, -0.09);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1.45, -2, -0.09);
	glVertex3f(-1.6, -2, -0.09);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-1, -2.45, -0.09);
	glVertex3f(-1, -2.6, -0.09);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0, -2.6, -0.1);
	glVertex3f(1, -2.6, -0.4);
	glEnd();

	//atap kanan
	glBegin(GL_POLYGON);
	glColor3ub(200, 200, 200);
	glVertex3f(0.8, -2, 1.2);
	glVertex3f(1, -2, 1.2);
	glVertex3f(1, -2.1, 1.2);
	glVertex3f(0.8, -2.1, 1.2);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 255, 255);
	glVertex3f(0.8, -2.1, 0.05);
	glVertex3f(0.8, -2, 0.05);
	glVertex3f(0.8, -2, 1.2);
	glVertex3f(0.8, -2.1, 1.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(0.8, -2, 0.05);
	glVertex3f(0, -2, 0.05);
	glVertex3f(0, -2.1, 0.05);
	glVertex3f(0.8, -2.1, 0.05);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(211, 211, 211);
	glVertex3f(0, -2.1, 0.05);
	glVertex3f(0, -2, 0.05);
	glVertex3f(0, -2, -0.4);
	glVertex3f(0, -2.1, -0.4);

	glEnd();

	//tembok kanan
	glBegin(GL_QUADS);
	glColor3ub(211, 211, 211);
	glVertex3f(1, -2.1, 0.05);
	glVertex3f(0, -2.1, 0.05);
	glVertex3f(0, -2.1, -0.4);
	glVertex3f(1, -2.1, -0.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(1, -2.1, 0.05);
	glVertex3f(0.8, -2.1, 0.05);
	glVertex3f(0.8, -2.1, 1.2);
	glVertex3f(1, -2.1, 1.2);
	glEnd();

	//tanjakan kanan
	glBegin(GL_QUADS);
	glColor3ub(20, 20, 20);
	glVertex3f(1, -2.6, -0.401);
	glVertex3f(0, -2.6, -0.101);
	glVertex3f(0, -2.1, -0.101);
	glVertex3f(1, -2.1, -0.401);
	glEnd();

	//sebelah tanjakan
	glBegin(GL_TRIANGLES);
	glColor3ub(200, 200, 200);
	glVertex3f(0, -2.6, -0.101);
	glVertex3f(1, -2.6, -0.401);
	glVertex3f(0, -2.6, -0.401);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3ub(255, 255, 255);
	glVertex3f(0, -2.35, -0.110);
	glVertex3f(1, -2.35, -0.410);
	glEnd();

	//tanjakan kiri
	glBegin(GL_QUADS);
	glColor3ub(20, 20, 20);
	glVertex3f(-1.37, -1, -0.1);
	glVertex3f(-1.1, -1, -0.1);
	glVertex3f(-1.1, 0, -0.4);
	glVertex3f(-1.37, 0, -0.4);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(-1.37, 0, -0.4);
	glVertex3f(-1.37, -1, -0.1);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(200, 200, 200);
	glVertex3f(-1.37, 0, -0.4);
	glVertex3f(-1.37, -1, -0.1);
	glVertex3f(-1.37, -1, -0.4);
	glEnd();




}

void Tambahan() {
	//tiang
	glBegin(GL_LINE_STRIP);
	glColor3ub(245, 245, 245);
	glVertex3f(-1, -1.4, 0.1);
	glVertex3f(-1, -1.4, -0.1);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glColor3ub(245, 245, 245);
	glVertex3f(-0.4, -2, 0.1);
	glVertex3f(-0.4, -2, -0.1);
	glEnd();

	//dasar gedung
	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex3f(-0.9, -2.8, -0.4);
	glVertex3f(1.7, -2.8, -0.4);
	glVertex3f(1.7, 0.7, -0.4);
	glVertex3f(-1.8, 0.8, -0.4);
	glVertex3f(-1.8, -2, -0.4);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3ub(220, 220, 220);
	glVertex3f(-0.9, -2.8, -0.4);
	glVertex3f(1.7, -2.8, -0.4);
	glVertex3f(1.7, 0.7, -0.4);
	glVertex3f(-1.8, 0.8, -0.4);
	glVertex3f(-1.8, -2, -0.4);
	glEnd();

	//taman
	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex3f(-1.7, -2.5, -0.4);
	glVertex3f(1.7, -2.8, -0.4);
	glVertex3f(1.7, 0.7, -0.4);
	glVertex3f(-1.8, 0.8, -0.4);
	glEnd();

}

void Jendela() {
	//kiri depan
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex3f(-0.95, -0.46, 1.1);
	glVertex3f(-0.95, -0.46, 0.3);
	glVertex3f(0.5, -0.46, 0.3);
	glVertex3f(0.5, -0.46, 1.1);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(-0.35, -0.46, 1.3);
	glVertex3f(0.5, -0.46, 1.3);
	glVertex3f(0.5, -0.46, 1.1);
	glVertex3f(-0.35, -0.46, 1.1);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(0.05, -0.46, 1.4);
	glVertex3f(0.5, -0.46, 1.4);
	glVertex3f(0.5, -0.46, 1.1);
	glVertex3f(0.05, -0.46, 1.1);
	glEnd();

	//stripnya
	glBegin(GL_LINES);
	glColor3ub(240, 230, 140);
	glVertex3f(0.05, -0.46, 1.5);
	glVertex3f(0.5, -0.46, 1.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.35, -0.46, 1.4);
	glVertex3f(0.5, -0.46, 1.4);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.35, -0.46, 1.3);
	glVertex3f(0.5, -0.46, 1.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.95, -0.46, 1.2);
	glVertex3f(0.5, -0.46, 1.2);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.95, -0.46, 1.1);
	glVertex3f(0.5, -0.46, 1.1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.95, -0.46, 1.0);
	glVertex3f(0.5, -0.46, 1.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.95, -0.46, 0.9);
	glVertex3f(0.5, -0.46, 0.9);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.95, -0.46, 0.8);
	glVertex3f(0.5, -0.46, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.95, -0.46, 0.7);
	glVertex3f(0.5, -0.46, 0.7);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.95, -0.46, 0.6);
	glVertex3f(0.5, -0.46, 0.6);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.95, -0.46, 0.5);
	glVertex3f(0.5, -0.46, 0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.95, -0.46, 0.4);
	glVertex3f(0.5, -0.46, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.95, -0.46, 0.3);
	glVertex3f(0.5, -0.46, 0.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.95, -0.46, 0.2);
	glVertex3f(0.5, -0.46, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.95, -0.46, 0.1);
	glVertex3f(0.5, -0.46, 0.1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.95, -0.46, 0);
	glVertex3f(0.5, -0.46, 0);
	glEnd();



	//vertikal


	glBegin(GL_LINES);
	glVertex3f(0.25, -0.46, 1.4);
	glVertex3f(0.25, -0.46, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.15, -0.46, 1.4);
	glVertex3f(0.15, -0.46, 0.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.05, -0.46, 1.4);
	glVertex3f(0.05, -0.46, 0.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.05, -0.46, 1.4);
	glVertex3f(-0.05, -0.46, 0.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.15, -0.46, 1.4);
	glVertex3f(-0.15, -0.46, 0.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.25, -0.46, 1.4);
	glVertex3f(-0.25, -0.46, 0.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.35, -0.46, 1.3);
	glVertex3f(-0.35, -0.46, 0.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.45, -0.46, 1.2);
	glVertex3f(-0.45, -0.46, 0.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.55, -0.46, 1.2);
	glVertex3f(-0.55, -0.46, 0.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.65, -0.46, 1.2);
	glVertex3f(-0.65, -0.46, 0.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.75, -0.46, 1.2);
	glVertex3f(-0.75, -0.46, 0.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.85, -0.46, 1.2);
	glVertex3f(-0.85, -0.46, 0.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.95, -0.46, 1.2);
	glVertex3f(-0.95, -0.46, 0.3);
	glEnd();











	//kanan depan
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex3f(0.54, -1.95, 1.1);
	glVertex3f(0.54, -1.95, 0.3);
	glVertex3f(0.54, -0.55, 0.3);
	glVertex3f(0.54, -0.55, 1.1);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(0.54, -1.35, 1.1);
	glVertex3f(0.54, -1.35, 1.3);
	glVertex3f(0.54, -0.6, 1.3);
	glVertex3f(0.54, -0.6, 1.1);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(0.54, -0.6, 1.1);
	glVertex3f(0.54, -0.95, 1.1);
	glVertex3f(0.54, -0.95, 1.4);
	glVertex3f(0.54, -0.6, 1.4);
	glEnd();


	//horizontal
	glBegin(GL_LINES);
	glColor3ub(240, 230, 140);
	glVertex3f(0.54, -0.95, 1.4);
	glVertex3f(0.54, -0.55, 1.4);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -0.95, 1.3);
	glVertex3f(0.54, -0.55, 1.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.95, 1.2);
	glVertex3f(0.54, -0.55, 1.2);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.95, 1.1);
	glVertex3f(0.54, -0.55, 1.1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.95, 1);
	glVertex3f(0.54, -0.55, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.95, 0);
	glVertex3f(0.54, -0.55, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.95, 0.9);
	glVertex3f(0.54, -0.55, 0.9);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.95, 0.8);
	glVertex3f(0.54, -0.55, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.95, 0.7);
	glVertex3f(0.54, -0.55, 0.7);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.95, 0.6);
	glVertex3f(0.54, -0.55, 0.6);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.95, 0.5);
	glVertex3f(0.54, -0.55, 0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.95, 0.4);
	glVertex3f(0.54, -0.55, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.95, 0.3);
	glVertex3f(0.54, -0.55, 0.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.95, 0.2);
	glVertex3f(0.54, -0.55, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.95, 0.1);
	glVertex3f(0.54, -0.55, 0.1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.95, 0);
	glVertex3f(0.54, -0.55, 0);
	glEnd();



	//vertikal

	glBegin(GL_LINES);
	glVertex3f(0.54, -1.95, 1.1);
	glVertex3f(0.54, -1.95, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.85, 1.1);
	glVertex3f(0.54, -1.85, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.75, 1.1);
	glVertex3f(0.54, -1.75, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.65, 1.1);
	glVertex3f(0.54, -1.65, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.55, 1.1);
	glVertex3f(0.54, -1.55, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.45, 1.2);
	glVertex3f(0.54, -1.45, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.35, 1.3);
	glVertex3f(0.54, -1.35, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.25, 1.3);
	glVertex3f(0.54, -1.25, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.15, 1.3);
	glVertex3f(0.54, -1.15, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -1.05, 1.3);
	glVertex3f(0.54, -1.05, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -0.95, 1.5);
	glVertex3f(0.54, -0.95, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -0.85, 1.5);
	glVertex3f(0.54, -0.85, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.54, -0.75, 1.5);
	glVertex3f(0.54, -0.75, 0);
	glEnd();







	//kaca tambahan kiri
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex3f(-1.11, -0.21, 1.1);
	glVertex3f(-1, -0.21, 1.1);
	glVertex3f(-1, -0.21, 0.3);
	glVertex3f(-1.11, -0.21, 0.3);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(-1.11, -0.21, 1.1);
	glVertex3f(-1.11, -0.1, 1.1);
	glVertex3f(-1.11, -0.1, 0.3);
	glVertex3f(-1.11, -0.21, 0.3);
	glEnd();
	//strip nya
	glBegin(GL_LINE_STRIP);
	glColor3ub(200, 200, 200);
	glVertex3f(-1.11, -0.1, 1);
	glVertex3f(-1.11, -0.21, 1);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(-1.11, -0.1, 0.9);
	glVertex3f(-1.11, -0.21, 0.9);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(-1.11, -0.1, 0.8);
	glVertex3f(-1.11, -0.21, 0.8);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(-1.11, -0.1, 0.7);
	glVertex3f(-1.11, -0.21, 0.7);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(-1.11, -0.1, 0.6);
	glVertex3f(-1.11, -0.21, 0.6);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(-1.11, -0.1, 0.5);
	glVertex3f(-1.11, -0.21, 0.5);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(-1.11, -0.1, 0.4);
	glVertex3f(-1.11, -0.21, 0.4);
	glEnd();

	//satunya
	glBegin(GL_LINE_STRIP);
	glVertex3f(-1.11, -0.21, 1);
	glVertex3f(-1, -0.21, 1);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(-1.11, -0.21, 0.9);
	glVertex3f(-1, -0.21, 0.9);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(-1.11, -0.21, 0.8);
	glVertex3f(-1, -0.21, 0.8);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(-1.11, -0.21, 0.7);
	glVertex3f(-1, -0.21, 0.7);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(-1.11, -0.21, 0.6);
	glVertex3f(-1, -0.21, 0.6);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(-1.11, -0.21, 0.5);
	glVertex3f(-1, -0.21, 0.5);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(-1.11, -0.21, 0.4);
	glVertex3f(-1, -0.21, 0.4);
	glEnd();

	//tambahan kaca kanan
	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex3f(0.79, -2, 1.1);
	glVertex3f(0.79, -2.1, 1.1);
	glVertex3f(0.79, -2.1, 0.3);
	glVertex3f(0.79, -2, 0.3);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(0.78, -2.101, 1.1);
	glVertex3f(0.9, -2.101, 1.1);
	glVertex3f(0.9, -2.101, 0.3);
	glVertex3f(0.78, -2.101, 0.3);
	glEnd();

	//stripnya
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(0.78, -2.101, 1);
	glVertex3f(0.9, -2.101, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.78, -2.101, 0.9);
	glVertex3f(0.9, -2.101, 0.9);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.78, -2.101, 0.8);
	glVertex3f(0.9, -2.101, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.78, -2.101, 0.7);
	glVertex3f(0.9, -2.101, 0.7);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.78, -2.101, 0.6);
	glVertex3f(0.9, -2.101, 0.6);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.78, -2.101, 0.5);
	glVertex3f(0.9, -2.101, 0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.78, -2.101, 0.4);
	glVertex3f(0.9, -2.101, 0.4);
	glEnd();
	//satunya
	glBegin(GL_LINES);
	glVertex3f(0.79, -2, 1);
	glVertex3f(0.79, -2.1, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.79, -2, 0.9);
	glVertex3f(0.79, -2.1, 0.9);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.79, -2, 0.8);
	glVertex3f(0.79, -2.1, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.79, -2, 0.7);
	glVertex3f(0.79, -2.1, 0.7);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.79, -2, 0.6);
	glVertex3f(0.79, -2.1, 0.6);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.79, -2, 0.5);
	glVertex3f(0.79, -2.1, 0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.79, -2, 0.4);
	glVertex3f(0.79, -2.1, 0.4);
	glEnd();


	//kaca belakang
	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex3f(0.75, 0.01, 1.1);
	glVertex3f(-1.05, 0.01, 1.1);
	glVertex3f(-1.05, 0.01, 0);
	glVertex3f(0.75, 0.01, 0.);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(-0.34, 0.01, 1.3);
	glVertex3f(-0.34, 0.01, 0);
	glVertex3f(0.75, 0.01, 1.3);
	glVertex3f(0.75, 0.01, 0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(0.05, 0.01, 1.4);
	glVertex3f(0.05, 0.01, 0);
	glVertex3f(0.75, 0.01, 1.4);
	glVertex3f(0.75, 0.01, 0);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(0.45, 0.01, 1.5);
	glVertex3f(0.45, 0.01, 0);
	glVertex3f(0.75, 0.01, 1.5);
	glVertex3f(0.75, 0.01, 0);
	glEnd();

	//stripnya
	glBegin(GL_LINES);
	glColor3ub(240, 230, 140);
	glVertex3f(0.79, 0.01, 1);
	glVertex3f(-1.05, 0.01, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.79, 0.01, 1.1);
	glVertex3f(-1.05, 0.01, 1.1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.79, 0.01, 0.9);
	glVertex3f(-1.05, 0.01, 0.9);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.79, 0.01, 0.8);
	glVertex3f(-1.05, 0.01, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.79, 0.01, 0.7);
	glVertex3f(-1.05, 0.01, 0.7);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.79, 0.01, 0.6);
	glVertex3f(-1.05, 0.01, 0.6);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.79, 0.01, 0.5);
	glVertex3f(-1.05, 0.01, 0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.79, 0.01, 0.4);
	glVertex3f(-1.05, 0.01, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.79, 0.01, 0.3);
	glVertex3f(-1.05, 0.01, 0.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.79, 0.01, 0.2);
	glVertex3f(-1.05, 0.01, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.79, 0.01, 0.1);
	glVertex3f(-1.05, 0.01, 0.1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.79, 0.01, 1.2);
	glVertex3f(-0.38, 0.01, 1.2);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.79, 0.01, 1.3);
	glVertex3f(-0.38, 0.01, 1.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.79, 0.01, 1.4);
	glVertex3f(-0, 0.01, 1.4);
	glEnd();
	glVertex3f(0.79, 0.01, 1.5);
	glVertex3f(-0.2, 0.01, 1.5);
	glEnd();

	//strip vertikal
	glBegin(GL_LINES);
	glVertex3f(0.65, 0.01, 1.1);
	glVertex3f(0.65, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.55, 0.01, 1.1);
	glVertex3f(0.55, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.45, 0.01, 1.1);
	glVertex3f(0.45, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.35, 0.01, 1.1);
	glVertex3f(0.35, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.25, 0.01, 1.1);
	glVertex3f(0.25, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.15, 0.01, 1.1);
	glVertex3f(0.15, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.05, 0.01, 1.1);
	glVertex3f(0.05, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.05, 0.01, 1.1);
	glVertex3f(-0.05, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.15, 0.01, 1.1);
	glVertex3f(-0.15, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.25, 0.01, 1.1);
	glVertex3f(-0.25, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.35, 0.01, 1.1);
	glVertex3f(-0.35, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.45, 0.01, 1.1);
	glVertex3f(-0.45, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.55, 0.01, 1.1);
	glVertex3f(-0.55, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.65, 0.01, 1.1);
	glVertex3f(-0.65, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.75, 0.01, 1.1);
	glVertex3f(-0.75, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.85, 0.01, 1.1);
	glVertex3f(-0.85, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.95, 0.01, 1.1);
	glVertex3f(-0.95, 0.01, 0);
	glEnd();

	glBegin(GL_LINES);
	glVertex3f(0.65, 0.01, 1.5);
	glVertex3f(0.65, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.55, 0.01, 1.5);
	glVertex3f(0.55, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.45, 0.01, 1.4);
	glVertex3f(0.45, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.35, 0.01, 1.4);
	glVertex3f(0.35, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.25, 0.01, 1.4);
	glVertex3f(0.25, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.15, 0.01, 1.4);
	glVertex3f(0.15, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.05, 0.01, 1.4);
	glVertex3f(0.05, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.05, 0.01, 1.3);
	glVertex3f(-0.05, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.15, 0.01, 1.3);
	glVertex3f(-0.15, 0.01, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(-0.25, 0.01, 1.3);
	glVertex3f(-0.25, 0.01, 0);
	glEnd();







	//jendela belakang tengah
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex3f(0.98, -0.16, 1.5);
	glVertex3f(0.83, -0.03, 1.5);
	glVertex3f(0.83, -0.03, 0);
	glVertex3f(0.98, -0.16, 0);
	glEnd();
	//linenya jendela belakang	
	glBegin(GL_LINES);
	glColor3ub(240, 230, 140);
	glVertex3f(0.98, -0.16, 1.4);
	glVertex3f(0.83, -0.03, 1.4);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.98, -0.16, 1.3);
	glVertex3f(0.83, -0.03, 1.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.98, -0.16, 1.2);
	glVertex3f(0.83, -0.03, 1.2);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.98, -0.16, 1.1);
	glVertex3f(0.83, -0.03, 1.1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.98, -0.16, 1);
	glVertex3f(0.83, -0.03, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.98, -0.16, 0.9);
	glVertex3f(0.83, -0.03, 0.9);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.98, -0.16, 0.8);
	glVertex3f(0.83, -0.03, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.98, -0.16, 0.7);
	glVertex3f(0.83, -0.03, 0.7);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.98, -0.16, 0.6);
	glVertex3f(0.83, -0.03, 0.6);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.98, -0.16, 0.5);
	glVertex3f(0.83, -0.03, 0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.98, -0.16, 0.4);
	glVertex3f(0.83, -0.03, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.98, -0.16, 0.3);
	glVertex3f(0.83, -0.03, 0.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.98, -0.16, 0.2);
	glVertex3f(0.83, -0.03, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.98, -0.16, 0.1);
	glVertex3f(0.83, -0.03, 0.1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(0.98, -0.16, 0);
	glVertex3f(0.83, -0.03, 0);
	glEnd();



	//belakang kanan
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex3f(1.01, -2.05, 1.1);
	glVertex3f(1.01, -0.25, 1.1);
	glVertex3f(1.01, -0.25, 0);
	glVertex3f(1.01, -2.05, 0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(1.01, -1.35, 1.3);
	glVertex3f(1.01, -0.25, 1.3);
	glVertex3f(1.01, -0.25, 1.1);
	glVertex3f(1.01, -1.35, 1.1);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(1.01, -0.85, 1.4);
	glVertex3f(1.01, -0.25, 1.4);
	glVertex3f(1.01, -0.25, 1.1);
	glVertex3f(1.01, -0.85, 1.1);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(1.01, -0.55, 1.5);
	glVertex3f(1.01, -0.25, 1.5);
	glVertex3f(1.01, -0.25, 1.1);
	glVertex3f(1.01, -0.55, 1.1);
	glEnd();


	//linenya jendela belakang kanan
	glBegin(GL_LINES);
	glColor3ub(240, 230, 140);
	glVertex3f(1.01, -2.05, 1);
	glVertex3f(1.01, -0.25, 1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -2.05, 1.1);
	glVertex3f(1.01, -0.25, 1.1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -2.05, 0.9);
	glVertex3f(1.01, -0.25, 0.9);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -2.05, 0.8);
	glVertex3f(1.01, -0.25, 0.8);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -2.05, 0.7);
	glVertex3f(1.01, -0.25, 0.7);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -2.05, 0.6);
	glVertex3f(1.01, -0.25, 0.6);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -2.05, 0.5);
	glVertex3f(1.01, -0.25, 0.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -2.05, 0.4);
	glVertex3f(1.01, -0.25, 0.4);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -2.05, 0.3);
	glVertex3f(1.01, -0.25, 0.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -2.05, 0.2);
	glVertex3f(1.01, -0.25, 0.2);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -2.05, 0.1);
	glVertex3f(1.01, -0.25, 0.1);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -2.05, 0);
	glVertex3f(1.01, -0.25, 0);
	glEnd();

	//vertikal kiri berlakang
	glBegin(GL_LINES);
	glVertex3f(1.01, -0.25, 1.5);
	glVertex3f(1.01, -0.25, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -0.35, 1.5);
	glVertex3f(1.01, -0.35, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -0.45, 1.5);
	glVertex3f(1.01, -0.45, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -0.55, 1.5);
	glVertex3f(1.01, -0.55, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -0.65, 1.4);
	glVertex3f(1.01, -0.65, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -0.75, 1.4);
	glVertex3f(1.01, -0.75, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -0.85, 1.4);
	glVertex3f(1.01, -0.85, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -0.95, 1.3);
	glVertex3f(1.01, -0.95, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -1.05, 1.3);
	glVertex3f(1.01, -1.05, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -1.15, 1.3);
	glVertex3f(1.01, -1.15, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -1.25, 1.3);
	glVertex3f(1.01, -1.25, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -1.35, 1.3);
	glVertex3f(1.01, -1.35, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -1.45, 1.1);
	glVertex3f(1.01, -1.45, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -1.55, 1.1);
	glVertex3f(1.01, -1.55, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -1.65, 1.1);
	glVertex3f(1.01, -1.65, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -1.75, 1.1);
	glVertex3f(1.01, -1.75, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -1.85, 1.1);
	glVertex3f(1.01, -1.85, 0);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -1.95, 1.1);
	glVertex3f(1.01, -1.95, 0);
	glEnd();


	glBegin(GL_LINES);
	glVertex3f(1.01, -0.6, 1.5);
	glVertex3f(1.01, -0.25, 1.5);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -0.9, 1.4);
	glVertex3f(1.01, -0.25, 1.4);
	glEnd();

	glBegin(GL_LINES);
	glVertex3f(1.01, -1.35, 1.3);
	glVertex3f(1.01, -0.25, 1.3);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -1.35, 1.2);
	glVertex3f(1.01, -0.25, 1.2);
	glEnd();
	glBegin(GL_LINES);
	glVertex3f(1.01, -2.05, 1.1);
	glVertex3f(1.01, -0.25, 1.1);
	glEnd();

}

void strip() {
	glBegin(GL_LINE_STRIP);
	glColor3ub(245, 245, 245);
	glVertex3f(0, -2, 0);
	glVertex3f(0, -2, 0.1);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glColor3ub(245, 245, 245);
	glVertex3f(-1, -1, 0);
	glVertex3f(-1, -1, 0.1);
	glEnd();
	//atap lobby
	glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	glVertex3f(0.55, -2, 0.3);
	glVertex3f(-0.4, -2, 0.3);
	glVertex3f(-1, -1.4, 0.3);
	glVertex3f(-1, -0.45, 0.3);
	glVertex3f(0.35, -0.45, 0.3);
	glVertex3f(0.55, -0.65, 0.3);
	glEnd();

	//lobby bwh
	glBegin(GL_LINE_LOOP);
	glColor3ub(0, 0, 0);
	glVertex3f(0.55, -2, 0.1);
	glVertex3f(-0.4, -2, 0.1);
	glVertex3f(-1, -1.4, 0.1);
	glVertex3f(-1, -0.45, 0.1);
	glVertex3f(0.35, -0.45, 0.1);
	glVertex3f(0.55, -0.65, 0.1);
	glEnd();
	//jndela tengah
	glBegin(GL_QUADS);
	glVertex3f(0.37, -0.48, 1.5);
	glVertex3f(0.52, -0.62, 1.5);
	glVertex3f(0.52, -0.62, 0.0);
	glVertex3f(0.37, -0.48, 0.0);
	glEnd();


	//jndela tengah
	glBegin(GL_LINE_STRIP);
	glColor3ub(240, 230, 140);
	glVertex3f(0.37, -0.48, 1.4);
	glVertex3f(0.52, -0.62, 1.4);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(0.37, -0.48, 1.3);
	glVertex3f(0.52, -0.62, 1.3);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(0.37, -0.48, 1.2);
	glVertex3f(0.52, -0.62, 1.2);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(0.37, -0.48, 1.1);
	glVertex3f(0.52, -0.62, 1.1);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(0.37, -0.48, 1);
	glVertex3f(0.52, -0.62, 1);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(0.37, -0.48, 0.9);
	glVertex3f(0.52, -0.62, 0.9);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(240, 230, 140);
	glVertex3f(0.37, -0.48, 0.8);
	glVertex3f(0.52, -0.62, 0.8);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(0.37, -0.48, 0.7);
	glVertex3f(0.52, -0.62, 0.7);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(240, 230, 140);
	glVertex3f(0.37, -0.48, 0.6);
	glVertex3f(0.52, -0.62, 0.6);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(0.37, -0.48, 0.5);
	glVertex3f(0.52, -0.62, 0.5);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(0.37, -0.48, 0.4);
	glVertex3f(0.52, -0.62, 0.4);
	glEnd();
}

void Render() {

	if (a) {
		if (is_depth) {
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			Gedung();
		}
		else
			glClear(GL_COLOR_BUFFER_BIT);
		Gedung();
		Atapbawah();
		Lantaibwh();
		Lataran();
		Tambahan();
		Jendela();

	}
	else
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	Gedung();
	Atapbawah();
	Lantaibwh();
	Lataran();
	Tambahan();
	Jendela();
	strip();

	glPopMatrix();
	glutSwapBuffers();
}

void Init() {
	glClearColor(0, 0, 0, 0);
	glLoadIdentity();
	gluLookAt(0.2, 0.4, 5.0,
		3, 3, 3,
		4.5, 4.5, 100);
	glRotatef(xrot, 1.0f, 0.0f, 0.0f);
	glRotatef(yrot, 0.0f, 1.0f, 0.0f);
	glMatrixMode(GL_PROJECTION);
	glEnable(GL_DEPTH_TEST);
	is_depth = 1;
	glMatrixMode(GL_MODELVIEW);
}

void Ukuran(int w, int h) {

	if (h == 0) h = 1;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45, 1.0 * w / h, 1.5, 45);
	glTranslated(-1, 4.5, -4.2);
	glMatrixMode(GL_MODELVIEW);

}

void Mouse(int button, int state, int x, int y) {

	if (button == GLUT_RIGHT_BUTTON) {

		glTranslated(0.05, 0.05, 0); //Zoom In
	}

	else if (button == GLUT_LEFT_BUTTON) {

		glTranslated(-0.05, -0.05, 0); //Zoom Out
	}
	glutPostRedisplay();
}

void Keyboard(unsigned char key, int x, int y) {

	switch (key) {

	case 'd'://putar kanan
		glRotated(1.5, 0, 0, 1.5);
		break;
	case 'a'://putar kiri
		glRotated(1.5, 0, 0, -1.5);
		break;
	case 'w'://putar naik
		glRotated(1.5, -1.5, 1.5, 0);
		break;
	case 's'://putar turun
		glRotated(1.5, 1.5, -1.5, 0);
		break;
	case 'y'://geser atas
		glTranslated(0, 0, 0.01);
		break;
	case 'h'://geser bawah
		glTranslated(0, 0, -0.01);
		break;
	case 'g'://geser kiri
		glTranslated(-0.01, 0.01, 0);
		break;
	case 'j'://geser kanan
		glTranslated(0.01, -0.01, 0);
		break;
	}
	Render();
}

int main(int argc, char** argv) {

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1366, 768);
	glutCreateWindow("Plaza Indonesia");

	Init();
	glLineWidth(5);
	glutDisplayFunc(Render);
	glutKeyboardFunc(Keyboard);
	glutMouseFunc(Mouse);
	glutReshapeFunc(Ukuran);

	glutMainLoop();

	return 0;
}