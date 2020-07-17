#include <GL/freeglut.h>
#include <windows.h>

void init(void);
void keyboard(unsigned char, int, int);
void size(int, int);
void MouseWheel(int, int, int, int);

double rotate_y = 0;
double rotate_x = 0;
double zoom = 0.5;

float xrot = 0.0f;
float yrot = 0.0f;

int is_depth, a;

void glut()
{
	glLoadIdentity();
	gluLookAt(
		0.0f, 0.0f, 3.0f,
		0.0f, 0.0f, 0.0f,
		0.0f, 1.0f, 0.0f);
	glRotatef(xrot, 0.0f, 1.0f, 0.0f);
	glRotatef(yrot, 0.0f, 1.0f, 0.0f);
}

void init(void) {
	glClearColor(1, 1, 1, 0);
	glMatrixMode(GL_PROJECTION);
	glEnable(GL_DEPTH_TEST);
	is_depth = 1;
	glMatrixMode(GL_MODELVIEW);
}

void drawSquare()
{
	glBegin(GL_POLYGON);
	//gedung belakang
	glColor3ub(253, 215, 3);
	glVertex3f(0.8, 0, 0);
	glVertex3f(0.8, 0, 1.6);
	glVertex3f(0.35, 0, 1.6);
	glVertex3f(0.35, 0, 1.5);
	glVertex3f(0, 0, 1.5);
	glVertex3f(0, 0, 1.4);
	glVertex3f(-0.45, 0, 1.4);
	glVertex3f(-0.45, 0, 1.2);
	glVertex3f(-1, 0, 1.2);
	glVertex3f(-1, 0, 0);

	glEnd();
	//belakang
	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 0);
	glVertex3f(1, -0.2, 1.6);
	glVertex3f(0.8, 0, 1.6);
	glVertex3f(0.8, 0, 0);
	glVertex3f(1, -0.2, 0);
	glEnd();
	glBegin(GL_POLYGON);
	//belakang
	glColor3ub(220, 20, 60);
	glVertex3f(1, -0.2, 0);
	glVertex3f(1, -0.2, 1.6);
	glVertex3f(1, -0.65, 1.6);
	glVertex3f(1, -0.65, 1.5);
	glVertex3f(1, -0.95, 1.5);
	glVertex3f(1, -0.95, 1.4);
	glVertex3f(1, -1.4, 1.4);
	glVertex3f(1, -1.4, 1.2);
	glVertex3f(1, -2, 1.2);
	glVertex3f(1, -2, 0);
	glEnd();
	//samping kiri
	glBegin(GL_POLYGON);
	glColor3ub(0, 0, 255);
	glVertex3f(-1, 0, 1.2);
	glVertex3f(-1, -0.45, 1.2);
	glVertex3f(-1, -0.45, 0);
	glVertex3f(-1, 0, 0);
	glEnd();
	//dalam kiri
	glBegin(GL_POLYGON);
	glColor3ub(127, 255, 1);
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
	glColor3ub(0, 0, 0);
	glVertex3f(0.35, -0.45, 0);
	glVertex3f(0.55, -0.65, 0);
	glVertex3f(0.55, -0.65, 1.6);
	glVertex3f(0.35, -0.45, 1.6);
	glEnd();
	//dalam kanan
	glBegin(GL_POLYGON);
	glColor3ub(127, 255, 1);
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
	glColor3ub(0, 0, 255);
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
	glColor3ub(0, 0, 0);
	glVertex3f(-0.45, 0, 1.2);
	glVertex3f(-0.45, -0.45, 1.2);
	glVertex3f(-0.45, -0.45, 1.4);
	glVertex3f(-0.45, 0, 1.4);

	glEnd();
	//dinding atap 2
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex3f(0, 0, 1.4);
	glVertex3f(0, -0.45, 1.4);
	glVertex3f(0, -0.45, 1.5);
	glVertex3f(0, 0, 1.5);

	glEnd();
	//dinding atap 3
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex3f(0.35, 0, 1.5);
	glVertex3f(0.35, 0, 1.6);
	glVertex3f(0.35, -0.45, 1.6);
	glVertex3f(0.35, -0.45, 1.5);

	glEnd();
	//dinding atap 4
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex3f(0.55, -0.65, 1.5);
	glVertex3f(0.55, -0.65, 1.6);
	glVertex3f(1, -0.65, 1.6);
	glVertex3f(1, -0.65, 1.5);

	glEnd();
	//dinding atap 5
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex3f(0.55, -0.95, 1.4);
	glVertex3f(0.55, -0.95, 1.5);
	glVertex3f(1, -0.95, 1.5);
	glVertex3f(1, -0.95, 1.4);

	glEnd();
	//dinding atap 6
	glBegin(GL_QUADS);
	glColor3ub(0, 0, 0);
	glVertex3f(0.55, -1.4, 1.4);
	glVertex3f(1, -1.4, 1.4);
	glVertex3f(1, -1.4, 1.2);
	glVertex3f(0.55, -1.4, 1.2);

	glEnd();
}

void render(void)
{
	if (a) {
		if (is_depth) {
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			drawSquare();
		}
		else
			glClear(GL_COLOR_BUFFER_BIT);
		drawSquare();
	}
	else
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	drawSquare();
	glPopMatrix();
	glutSwapBuffers();
}

void size(int w, int h)
{
	if (h == 0) h = 1;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0f, 1.0f * w / h, 1.0f, 100.0f);
	glTranslated(0, -5, -15);
	glMatrixMode(GL_MODELVIEW);

}

void mouse(int button, int state, int x, int y)
{
	if (state == GLUT_DOWN && button == GLUT_RIGHT_BUTTON)
	{
		glTranslated(0, 0, -0.3); //Zoom In
	}

	else if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON)
	{
		glTranslated(0, 0, 0.3); //Zoom Out
	}
	glutPostRedisplay();

}

void keyboard(unsigned char key, int x, int y) {

	switch (key) {

	case 'd':
		glRotated(2, 0, 1, 0);
		break;
	case 'a':
		glRotated(2, 2, 0, -1);
		break;
	case 'w':
		glRotated(2, 0, 0, 1);
		break;
	case 's':
		glRotated(-2, 0, 0, 1);
		break;
	case 'y':
		glTranslated(0, 3, 0);
		break;
	case 'h':
		glTranslated(0, -3, 0);
		break;
	case 'g':
		glTranslated(-3, 0, 0);
		break;
	case 'j':
		glTranslated(3, 0, 0);
		break;
	}
	render();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Dio Yudha Perdana 672018165");
	init();
	glutDisplayFunc(render);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutReshapeFunc(size);

	glutMainLoop();

	return 0;
}