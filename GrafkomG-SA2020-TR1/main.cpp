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
	glColor3ub(240, 230, 140);
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

	glBegin(GL_POLYGON);
	glColor3ub(128, 0, 0);
	glVertex3f(-1, -0.45, 0.1);
	glVertex3f(-1, -1.4, 0.1);
	glVertex3f(-0.4, -2, 0.1);
	glVertex3f(0.55, -2, 0.1);
	glVertex3f(0.55, -2, 0.3);
	glVertex3f(-0.4, -2, 0.3);
	glVertex3f(-1, -1.4, 0.3);
	glVertex3f(-1, -0.45, 0.3);

	glEnd();
}

void Lantaibwh() {
	//atas
	glBegin(GL_POLYGON);
	glColor3ub(128, 0, 0);
	glVertex3f(0.55, -2, 0);
	glVertex3f(-0.4, -2, 0);
	glVertex3f(-1, -1.4, 0);
	glVertex3f(-1, -0.45, 0);
	glVertex3f(0.35, -0.45, 0);
	glVertex3f(0.55, -0.65, 0);
	glEnd();

	//bwh
	glBegin(GL_POLYGON);
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
	glColor3ub(100, 100, 0);
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

	//kanan
	glEnd();
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
	glColor3ub(50, 50, 50);
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
	glVertex3f(1., -2.1, 0.05);
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
	//jalan
	glBegin(GL_QUADS);
	glColor3ub(20, 20, 20);
	glVertex3f(1, -2.6, -0.401);
	glVertex3f(0, -2.6, -0.101);
	glVertex3f(0, -2.1, -0.101);
	glVertex3f(1, -2.1, -0.401);
	glEnd();
	//sebelah tanjakan
	glBegin(GL_TRIANGLES);
	glColor3ub(240, 230, 140);
	glVertex3f(0, -2.6, -0.101);
	glVertex3f(1, -2.6, -0.401);
	glVertex3f(0, -2.6, -0.401);
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
	//jalan
	glBegin(GL_POLYGON);
	glColor3ub(105, 105, 105);
	glVertex3f(-1.8, -2, -0.4);
	glVertex3f(-1.8, 0.8, -0.4);
	glVertex3f(-2.6, 0.8, -0.4);
	glVertex3f(-2.6, -2, -0.4);
	glEnd();

	//glBegin(GL_POLYGON);
	//glColor3ub(105, 105, 105);
	//glVertex3f(1, -2.6, -0.4);
	//glVertex3f(1, -3.5, -0.4);
	//glVertex3f(3, -3.5, -0.4);
	//glVertex3f(3, -2.6, -0.4);
	//glEnd();

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
	glVertex3f(-0.95, -0.46, 1.15);
	glVertex3f(-0.95, -0.46, 0.35);
	glVertex3f(0.3, -0.46, 0.35);
	glVertex3f(0.3, -0.46, 1.15);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(-0.4, -0.46, 1.35);
	glVertex3f(0.3, -0.46, 1.35);
	glVertex3f(0.3, -0.46, 1.15);
	glVertex3f(-0.4, -0.46, 1.15);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(0.05, -0.46, 1.45);
	glVertex3f(0.3, -0.46, 1.45);
	glVertex3f(0.3, -0.46, 1.15);
	glVertex3f(0.05, -0.46, 1.15);
	glEnd();

	//kanan depan
	glBegin(GL_QUADS);
	glVertex3f(0.54, -1.95, 1.15);
	glVertex3f(0.54, -1.95, 0.35);
	glVertex3f(0.54, -0.7, 0.35);
	glVertex3f(0.54, -0.7, 1.15);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(0.54, -1.35, 1.15);
	glVertex3f(0.54, -1.35, 1.35);
	glVertex3f(0.54, -0.8, 1.35);
	glVertex3f(0.54, -0.8, 1.15);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(0.54, -0.7, 1.15);
	glVertex3f(0.54, -0.9, 1.15);
	glVertex3f(0.54, -0.9, 1.45);
	glVertex3f(0.54, -0.7, 1.45);
	glEnd();

	/*//tengah
   glBegin(GL_QUADS);
   glColor3ub(0, 0, 0);
   glVertex3f(0.37, -0.48, 1.55);
   glVertex3f(0.53, -0.62, 1.55);
   glVertex3f(0.53, -0.62, 1.55);
   glVertex3f(0.37, -0.48, 1.55);
   glEnd();

   glVertex3f(0.36, -0.45, 0);
   glVertex3f(0.54, -0.65, 0);
   glVertex3f(0.54, -0.65, 1.6);
   glVertex3f(0.36, -0.45, 1.6);
   glEnd();*/


}

void Jendela1() {
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(-0.65, -0.47, 1.15);
	glVertex3f(-0.65, -0.47, 0.35);

	glEnd();
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(-0.4, -0.47, 1.15);
	glVertex3f(-0.4, -0.47, 0.35);

	glEnd();
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(-0.55, -0.47, 1.15);
	glVertex3f(-0.55, -0.47, 0.35);



	glEnd();
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(-0.75, -0.47, 1.15);
	glVertex3f(-0.75, -0.47, 0.35);

	glEnd();
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(-0.85, -0.47, 1.15);
	glVertex3f(-0.85, -0.47, 0.35);

	glEnd();
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(-0.3, -0.47, 1.35);
	glVertex3f(-0.3, -0.47, 0.35);

	glEnd();
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(-0.2, -0.47, 1.35);
	glVertex3f(-0.2, -0.47, 0.35);

	glEnd();
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(-0.1, -0.47, 1.35);
	glVertex3f(-0.1, -0.47, 0.35);

	glEnd();
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(0, -0.47, 1.35);
	glVertex3f(0, -0.47, 0.35);

	glEnd();
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(0.15, -0.47, 1.45);
	glVertex3f(0.15, -0.47, 0.35);

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(-0.4, -0.47, 0.125);
	glVertex3f(-0.3, -0.47, 0.125);

	glEnd();
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(-0.95, -0.47, 0.8);
	glVertex3f(0.3, -0.47, 0.8);

	glEnd();
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(-0.95, -0.47, 0.6);
	glVertex3f(0.3, -0.47, 0.6);

	glEnd();
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(-0.95, -0.47, 1);
	glVertex3f(0.3, -0.47, 1);


	glEnd();
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(-0.95, -0.47, 1.15);
	glVertex3f(0.3, -0.47, 1.15);

	glEnd();
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(-0.95, -0.47, 0.45);
	glVertex3f(0.3, -0.47, 0.45);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(-0.4, -0.47, 1.35);
	glVertex3f(0.3, -0.47, 1.35);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(-0.4, -0.47, 1.25);
	glVertex3f(0.3, -0.47, 1.25);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(0.537, -1.85, 1.15);
	glVertex3f(0.537, -1.85, 0.35);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(0.537, -1.75, 1.15);
	glVertex3f(0.537, -1.75, 0.35);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(0.537, -1.65, 1.15);
	glVertex3f(0.537, -1.65, 0.35);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(0.537, -1.55, 1.15);
	glVertex3f(0.537, -1.55, 0.35);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(0.537, -1.45, 1.15);
	glVertex3f(0.537, -1.45, 0.35);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(0.537, -1.35, 1.15);
	glVertex3f(0.537, -1.35, 0.35);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(0.537, -1.25, 1.35);
	glVertex3f(0.537, -1.25, 0.35);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(0.537, -1.15, 1.35);
	glVertex3f(0.537, -1.15, 0.35);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(0.537, -1.05, 1.35);
	glVertex3f(0.537, -1.05, 0.35);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(0.537, -0.95, 1.35);
	glVertex3f(0.537, -0.95, 0.35);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(0.537, -0.8, 1.45);
	glVertex3f(0.537, -0.8, 0.35);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(0.537, -1.95, 1.15);
	glVertex3f(0.537, -0.7, 1.15);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(0.537, -1.95, 1);
	glVertex3f(0.537, -0.7, 1);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(0.537, -1.95, 0.6);
	glVertex3f(0.537, -0.7, 0.6);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(0.537, -1.95, 0.8);
	glVertex3f(0.537, -0.7, 0.8);

	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(0.537, -1.95, 0.45);
	glVertex3f(0.537, -0.7, 0.45);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(0.537, -1.35, 1.25);
	glVertex3f(0.537, -0.7, 1.25);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex3f(0.537, -0.95, 1.35);
	glVertex3f(0.537, -0.7, 1.35);

	glEnd();
}

void strip() {
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
		Jendela1();

	}
	else
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	Gedung();
	Atapbawah();
	Lantaibwh();
	Lataran();
	Tambahan();
	Jendela();
	Jendela1();
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
		glRotated(0.5, 0, 0, 0.5);
		break;
	case 'a'://putar kiri
		glRotated(0.5, 0, 0, -0.5);
		break;
	case 'w'://putar naik
		glRotated(0.5, -0.5, 0.5, 0);
		break;
	case 's'://putar turun
		glRotated(0.5, 0.5, -0.5, 0);
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
