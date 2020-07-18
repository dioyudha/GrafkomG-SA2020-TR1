#include <GL/freeglut.h>
#include <windows.h>

double rotate_y = 0;
double rotate_x = 0;
double zoom = 0.5;

float xrot = 0.0f;
float yrot = 0.0f;

int is_depth, a;

void init() {
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

void Gedung() {

	//gedung belakang
	glBegin(GL_POLYGON);
	glColor3ub(245, 245, 245);
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
	glColor3ub(220, 220, 220);
	glVertex3f(1, -0.2, 1.6);
	glVertex3f(0.8, 0, 1.6);
	glVertex3f(0.8, 0, -0.4);
	glVertex3f(1, -0.2, -0.4);
	glEnd();

	//belakang
	glBegin(GL_POLYGON);
	glColor3ub(245, 245, 245);
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
	glColor3ub(255, 255, 255);
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
	glColor3ub(245, 245, 245);
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
	glColor3ub(220, 220, 220);
	glVertex3f(0.35, -0.45, 0);
	glVertex3f(0.55, -0.65, 0);
	glVertex3f(0.55, -0.65, 1.6);
	glVertex3f(0.35, -0.45, 1.6);
	glEnd();

	//dalam kanan
	glBegin(GL_POLYGON);
	glColor3ub(245, 245, 245);
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

void atapbawah() {
	//atas
	glBegin(GL_POLYGON);
	glColor3ub(105, 105, 105);
	glVertex3f(0.55, -2, 0.3);
	glVertex3f(-0.4, -2, 0.3);
	glVertex3f(-1, -1.4, 0.3);
	glVertex3f(-1, -0.45, 0.3);
	glVertex3f(0.35, -0.45, 0.3);
	glVertex3f(0.55, -0.65, 0.3);

	glEnd();
	//bwh
	glBegin(GL_POLYGON);
	glColor3ub(105, 105, 105);
	glVertex3f(0.55, -2, 0.1);
	glVertex3f(-0.4, -2, 0.1);
	glVertex3f(-1, -1.4, 0.1);
	glVertex3f(-1, -0.45, 0.1);
	glVertex3f(0.35, -0.45, 0.1);
	glVertex3f(0.55, -0.65, 0.1);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(105, 105, 105);
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

void lantaibwh() {
	//atas
	glBegin(GL_POLYGON);
	glColor3ub(90, 90, 90);
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

void lataran() {
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
	glVertex3f(-1.6, -1, -0.2);
	glVertex3f(-1, -1, -0.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(-1.6, -1, -0.2);
	glVertex3f(-1.6, -1, -0.1);
	glVertex3f(-1.6, -2, -0.1);
	glVertex3f(-1.6, -2, -0.2);

	//kanan
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(-1, -2.6, -0.1);
	glVertex3f(0, -2.6, -0.1);
	glVertex3f(0, -2.6, -0.2);
	glVertex3f(-1, -2.6, -0.2);
	glEnd();
	glBegin(GL_QUADS);
	glVertex3f(0, -2, -0.1);
	glVertex3f(0, -2.6, -0.1);
	glVertex3f(0, -2.6, -0.2);
	glVertex3f(0, -2, -0.2);
	glEnd();


		
	glBegin(GL_QUADS);
	glVertex3f(-1, -2.45, -0.2);
	glVertex3f(-1, -2.45, -0.1);
	glVertex3f(-1.45, -2, -0.1);
	glVertex3f(-1.45, -2, -0.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(-1.45, -2, -0.1);
	glVertex3f(-1.6, -2, -0.1);
	glVertex3f(-1.6, -2, -0.2);
	glVertex3f(-1.45, -2, -0.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3f(-1, -2.45, -0.1);
	glVertex3f(-1, -2.6, -0.1);
	glVertex3f(-1, -2.6, -0.2);
	glVertex3f(-1, -2.45, -0.2);
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
	glVertex3f(1, -2.6, -0.4);
	glVertex3f(0, -2.6, -0.1);
	glVertex3f(0, -2.1, -0.1);
	glVertex3f(1, -2.1, -0.4);
	glEnd();
}

void render()
{
	if (a) {
		if (is_depth) {
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			Gedung();
		}
		else
			glClear(GL_COLOR_BUFFER_BIT);
		Gedung();
		atapbawah();
		lantaibwh();
		lataran();
	}
	else
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	Gedung();
	atapbawah();
	lantaibwh();
	lataran();
	glPopMatrix();
	glutSwapBuffers();
}

void size(int w, int h) {

	if (h == 0) h = 1;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45, 1.0 * w / h, 1.5, 45);
	glTranslated(-1, 4.5, -4.2);
	glMatrixMode(GL_MODELVIEW);

}

void mouse(int button, int state, int x, int y)
{
	if (button == GLUT_RIGHT_BUTTON)
	{
		glTranslated(0.01, 0.01, 0); //Zoom In
	}

	else if (button == GLUT_LEFT_BUTTON)
	{
		glTranslated(-0.01, -0.01, 0); //Zoom Out
	}
	glutPostRedisplay();

}

void keyboard(unsigned char key, int x, int y) {

	switch (key) {

	case 'd'://putar kanan
		glRotated(0.1, 0, 0, 0.1);
		break;
	case 'a'://putar kiri
		glRotated(0.1, 0, 0, -0.1);
		break;
	case 'w'://putar naik
		glRotated(0.1, -0.1, 0.1, 0);
		break;
	case 's'://putar turun
		glRotated(0.1, 0.1, -0.1, 0);
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
	render();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1366, 768);
	glutCreateWindow("Plaza Indonesia");
	init();
	glutDisplayFunc(render);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutReshapeFunc(size);

	glutMainLoop();

	return 0;
}