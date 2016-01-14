#ifndef GridElement_hpp
#define GridElement_hpp

class GridElement {
public:
	GridElement();
	void draw();
	int x, y;
	// variables for maze generation and path finding
	bool visited;
	GridElement *parent;
	int length_of_path;
	int GRID_SIZE = 800;
	int GRID_ELEMENT_WIDTH = 20;
	int GRID_ELEMENT_HEIGHT = 20;
};

#endif /* GridElement_hpp */

