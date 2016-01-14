#include "GridElement.hpp"
#include <cstdio>
#include "ofMain.h"
#include "ofApp.h"

#include <iostream>
using namespace std;


GridElement::GridElement() {
	//nothing yet

}
void GridElement::draw() {
	GridElement grid[800][800];
	GridElement cell[800][800];
	int GRID_ELEMENT_WIDTH = 20;
	int GRID_ELEMENT_HEIGHT = 20;
	// draw all elements
	for (int y = 0; y < GRID_SIZE; y++) {
		for (int x = 0; x < GRID_SIZE; x++) {
			cell[x][y].x = x;
			cell[x][y].y = y;
		}
		}
	cout << "Hello";
	/*// draw background if visited
	if (visited) {
		ofSetColor(200);
		ofDrawRectangle(x * GRID_ELEMENT_WIDTH, y * GRID_ELEMENT_HEIGHT, GRID_ELEMENT_WIDTH, GRID_ELEMENT_HEIGHT);
	}*/
}