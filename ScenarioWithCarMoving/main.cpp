#include <windows.h>
#include <GL/glut.h>
#include <Math.h>
#define PI 3.14159265f


char title[] = "Graphics Project moving object by Shohag & Sadiya";
int windowWidth  = 640;
int windowHeight = 480;
int windowPosX   = 50;
int windowPosY   = 50;

GLfloat rquad = 0.0f;
GLfloat rtri = 0.0f;
GLfloat ballRadius = 0.5f;
GLfloat ballX = 0.0f;
GLfloat ballY = 0.0f;
GLfloat ballXMax, ballXMin, ballYMax, ballYMin;
GLfloat xSpeed = 0.02f;
GLfloat ySpeed = 0.007f;
int refreshMillis = 30;


GLdouble clipAreaXLeft, clipAreaXRight, clipAreaYBottom, clipAreaYTop;

void initGL() {
   glClearColor(0.0, 0.0, 0.0, 1.0);
}

GLfloat newBallX = 0.15f;
GLfloat newBallY = -0.30f;
GLfloat newBallZ = 0.0f;

void drawBall(void) {
        glColor3f(0.0, 1.0, 0.0);
        glTranslatef(newBallX,newBallY,newBallZ);
        //glRotatef(ballX,ballX,ballY,ballZ);
        glutSolidSphere (0.07, 20, 20);
        glTranslatef(0.6,0.0f,newBallZ);
        glutSolidSphere (0.07, 20, 20);
        }

void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
/**************************************************************************************/
   //glTranslatef(ballX, ballY, 0.0f);  // Translate to (xPos, yPos)
   // Use triangular segments to form a circle
/******************Home**************************************************/
   glBegin(GL_POLYGON);
            glColor3f(1.0f, 1.0f, 0.0f);
            glVertex2f(-0.9f, 0.20f);
            glColor3f(1.0f, 0.0f, 0.0f);
            glVertex2f(-0.65f, 0.20f);
            glColor3f(1.0f, 0.0f, 0.0f);
            glVertex2f(-0.65f, 0.6f);
            glColor3f(1.0f, 0.0f, 0.0f);
            glVertex2f(-0.9f, 0.6f);

    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.80f, 0.20f);
        glColor3f(1.0f, 0.0f, 1.0f);
        glVertex2f(-0.75f, 0.20f);
        glColor3f(1.0f, 0.0f, 1.0f);
        glVertex2f(-0.75f, 0.35f);
        glColor3f(1.0f, 0.0f, 1.0f);
        glVertex2f(-0.80f, 0.35f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.97f, 0.50f);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.97f, 0.50f);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.77, 0.80f);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.58f, 0.50f);

    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.65f, 0.20f);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2f(-0.6f, 0.20f);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2f(-0.6f, 0.15f);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.95f, 0.15f);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2f(-0.95f, 0.2f);
    glEnd();
/*********************End Home***************************************************/
    glBegin(GL_LINE_LOOP);                     //Tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Starting line
        glVertex2f(-0.5f, 0.15f);           //Starting line
        glColor3f(1.0f, 0.0f, 0.0f);        //Starting line
        glVertex2f(-0.5f, 0.80f);           //Starting line
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.52f, 0.78f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.525f, 0.75f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.53f, 0.73f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.535f, 0.70f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.54f, 0.73f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.52f, 0.8f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.50f, 0.81f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.52f, 0.82f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.55f, 0.75f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.55f, 0.79f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.52f, 0.85f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.50f, 0.84f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.53f, 0.87f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.57f, 0.85f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.54f, 0.89f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.51f, 0.896f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.53f, 0.91f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.51f, 0.93f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.50f, 0.91f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.48f, 0.93f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.46f, 0.91f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.48f, 0.88f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.46f, 0.90f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.44f, 0.91f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.42f, 0.89f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.44f, 0.89f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.46f, 0.88f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.48f, 0.84f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.45f, 0.86f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.40f, 0.82f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.42f, 0.81f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.45f, 0.83f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.49f, 0.81f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.45f, 0.805f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.42f, 0.72f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.44f, 0.73f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.45f, 0.77f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.46f, 0.78f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.49f, 0.79f);          //Start tree
        glColor3f(1.0f, 0.0f, 0.0f);        //Start tree
        glVertex2f(-0.49f, 0.15f);          //Start tree


    glEnd();
/*********************************************************************************************/
    glBegin(GL_POLYGON);            //Flag
            glColor3ub(0, 106, 77);
            glVertex2f(0.25f, 0.60f);
            glColor3ub(0, 106, 77);
            glVertex2f(0.45f, 0.60f);
            glColor3ub(0, 106, 77);
            glVertex2f(0.45f, 0.8f);
            glColor3ub(0, 106, 77);
            glVertex2f(.25f, 0.8f);

    glEnd();




    glBegin(GL_LINES);  //flag line
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(0.25f, 0.82f);
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(0.25f, 0.2f);
    glEnd();
            //flag();

/*********************************************************************************************************/
    //glTranslatef(ballX, ballY, 0.0f);
    glBegin(GL_POLYGON);        //road
        glColor3ub(0, 106, 77);
        glVertex2f(-1.0f, -0.3f);
        glColor3f(0.0f, 1.0f, 1.0f);
        glVertex2f(1.0f, -0.3f);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(1.0f, -0.6f);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(-1.0f, -0.6f);
    glEnd();
/*
    glBegin(GL_POLYGON);        //Pond
        glColor3ub(0, 106, 77);
        glVertex2f(0.8f, -0.9f);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(0.9f, -0.75f);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(0.7f, -0.55f);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.4f, -0.35f);
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(0.2f, -0.45f);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(0.15f, -0.5f);
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex2f(0.42f, -0.65f);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex2f(0.55f, -0.9f);
    glEnd();
    */
/******************************Car Moving************************************/
    glTranslatef(ballX, ballY, 0.0f);

    glBegin(GL_POLYGON);
  glColor3f(1.0f,0.0f,0.0f);
  glVertex2f(0.0f, -0.3f);
  glVertex2f(0.2f, 0.0f);

  glVertex2f(0.5f, 0.05f);

  glColor3f(0.0f,0.0f,1.0f);
  glVertex2f( 1.0f,-0.3f);
  glColor3f(0.0f,0.0f,1.0f);
  glVertex2f(-1.0f,-0.3f);

  //glVertex3f();
  glEnd();
    drawBall();

  rtri+=0.005f;
  if(rtri>2)
      rtri=-2.0f;
  rquad-=15.0f;
  /******************************Car Moving************************************/
   glutSwapBuffers();

   ballX += xSpeed;
   //ballY += ySpeed;
   // Check if the ball exceeds the edges
   if (ballX > ballXMax) {
      ballX = ballXMax;
      xSpeed = -xSpeed;
   } else if (ballX < ballXMin) {
      ballX = ballXMin;
      xSpeed = -xSpeed;
   }

   /*if (ballY > ballYMax) {
      ballY = ballYMax;
      ySpeed = -ySpeed;
   } else if (ballY < ballYMin) {
      ballY = ballYMin;
      ySpeed = -ySpeed;
   }*/
}

/* Call back when the windows is re-sized */
void reshape(GLsizei width, GLsizei height) {

   if (height == 0) height = 1;
   GLfloat aspect = (GLfloat)width / (GLfloat)height;


   glViewport(0, 0, width, height);


   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   if (width >= height) {
      clipAreaXLeft   = -1.0 * aspect;
      clipAreaXRight  = 1.0 * aspect;
      clipAreaYBottom = -1.0;
      clipAreaYTop    = 1.0;
   } else {
      clipAreaXLeft   = -1.0;
      clipAreaXRight  = 1.0;
      clipAreaYBottom = -1.0 / aspect;
      clipAreaYTop    = 1.0 / aspect;
   }
   gluOrtho2D(clipAreaXLeft, clipAreaXRight, clipAreaYBottom, clipAreaYTop);
   ballXMin = clipAreaXLeft + ballRadius;
   ballXMax = clipAreaXRight - ballRadius;
   ballYMin = clipAreaYBottom + ballRadius;
   ballYMax = clipAreaYTop - ballRadius;
}


void Timer(int value) {
   glutPostRedisplay();
   glutTimerFunc(refreshMillis, Timer, 0);
}


int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_DOUBLE);
   glutInitWindowSize(windowWidth, windowHeight);
   glutInitWindowPosition(windowPosX, windowPosY);
   glutCreateWindow(title);
   glutDisplayFunc(display);
   glutReshapeFunc(reshape);
   glutTimerFunc(0, Timer, 0);
   initGL();
   glutMainLoop();
   return 0;
}
