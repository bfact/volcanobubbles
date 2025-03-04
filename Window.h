#ifndef CSE167_Window_h
#define CSE167_Window_h

#include "Vector3.h"
#include "Texture.h"

class Window	  // OpenGL output window related routines
{
    
public:
    
    static int width, height; 	            // window size
    static bool lavaShader;
    static bool mapShader;
    static bool clouds;
    
    static void initialize(void);
    static void idleCallback(void);
    static void reshapeCallback(int, int);
    static void displayCallback(void);
    
    static void processNormalKeys(unsigned char key, int x, int y);
    static void displayPosition(void);
    static void processSpecialKeys(int key, int x, int y);
    static void processMouse(int button, int state, int x, int y);
    static void processMouseActiveMotion(int x, int y);
    static Vector3 trackBallMapping(int x, int y);
    
    static void drawTrees(void);
    
};

#endif

