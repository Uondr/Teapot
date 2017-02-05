#include <gl/freeglut.h>

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glutSolidTeapot(.5);
	glFlush();
}


int main(int argc, char** argv)
{
	glutInit(&argc,argv);

	glutInitDisplayMode(GLUT_SINGLE);
	glutInitDisplayMode(GLUT_RGB);

	glutInitWindowSize(500, 500);
	glutInitWindowPosition(300, 300);
	glutCreateWindow("Hello Teapot!");

	glutDisplayFunc(display);

	glutMainLoop();
	return 0;
}