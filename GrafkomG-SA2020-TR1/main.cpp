#include <gl/glut.h>

bool fullscreen = false;
bool mouseDown = false;

float xrot = 0.0f;
float yrot = 0.0f;

float xdiff = 0.0f;
float ydiff = 0.0f;

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
	glColor3ub(200 , 200, 200); 
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

	glFlush();
}

bool init()
{
	glClearColor(0.0f, 1.0f, 1.0f, 0.0f);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
	glClearDepth(1.0f);
	return true;
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	gluLookAt(
		0.0f, 0.0f, 3.0f,
		0.0f, 0.0f, 0.0f,
		0.0f, 1.0f, 0.0f);

	glRotatef(xrot, 1.0f, 0.0f, 0.0f);
	glRotatef(yrot, 0.0f, 1.0f, 0.0f);

	drawSquare();
	glutSwapBuffers();
}

void resize(int w, int h)
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glViewport(0, 0, w, h);

	gluPerspective(45.0f, 1.0f * w / h, 1.0f, 100.0f);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}


void mouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		mouseDown = true;

		xdiff = x - yrot;
		ydiff = -y + xrot;
	}
	else
		mouseDown = false;
}

void mouseMotion(int x, int y)
{
	if (mouseDown)
	{
		yrot = x - xdiff;
		xrot = y + ydiff;

		glutPostRedisplay();
	}
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitWindowSize(1366, 768);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);

	glutCreateWindow("Plaza Indonesia");

	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glutMotionFunc(mouseMotion);
	glutReshapeFunc(resize);

	if (!init())
		return 1;

	glutMainLoop();

	return 0;
}