#include "ofApp.h"
#include <iostream>
#include "GridElement.hpp"
using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
	x = 0;
	y = 0;
	ofBackground(ofColor::black);
	

	for (int i = 0; i < 40; i++) {
		x = x + 20;
		polyline.begin();
		polyline.addVertex(x,0);
		polyline.lineTo(x, 800);
		polyline.lineTo(x, 0);
		polyline.close();

	}
	for (int j = 0; j < 40; j++) {
		y = y + 20;
		polylin2.begin();
		polylin2.addVertex(0, y);
		polylin2.lineTo(800,y);
		polylin2.lineTo(0,y);
		polylin2.close();
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	polyline.draw();
	polylin2.draw();
	
		
		
	

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
