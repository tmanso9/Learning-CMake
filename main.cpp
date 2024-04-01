#include <adder.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <memory>

int openWindow() {
	GLFWwindow* window;
	if (!glfwInit()) {
		return -1;
	}

	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
	if (!window) {
		glfwTerminate();
		return -1;
	}

	while (!glfwWindowShouldClose(window)) {
		glfwSwapBuffers(window);
		glfwPollEvents();
	}
	return 0;
}

int main() {
	float result = mymath::add(1.2f, 3.5f);
	std::cout << result << std::endl;

	return openWindow();
}