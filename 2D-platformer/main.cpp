#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include "Window.h"

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600
#define WINDOW_NAME "2D Platformer"

int main()
{
	core::Window mainWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_NAME);

	while (mainWindow.isNotClosed())
	{
		mainWindow.pollEvents();



		mainWindow.swapBuffers();
	}

	return 0;
}
