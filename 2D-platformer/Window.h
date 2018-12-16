#pragma once

#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

namespace core {
	class Window
	{
	private:
		const GLuint windowWidth;
		const GLuint windowHeight;
		const char *windowName;
		GLFWwindow *window;
	public:
		Window(const GLuint width, const GLuint height, const char *name);
		const GLuint getWindowWidth() { return windowWidth; }
		const GLuint getWindowHeight() { return windowHeight; }
		const char* getWindowName() { return windowName; }
		GLFWwindow* getWindow() { return window; }
		int exitFailure();
		bool isNotClosed();
		void pollEvents();
		void swapBuffers();
		~Window();
	};
}

