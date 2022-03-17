#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    mySound.load("huisheng.mp3");
            mySound.setLoop(true); //Sound will loop
            mySound.play();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofEnableDepthTest();
    camera.begin();
    
    ofBackground(255,255,255);
    ofNoFill();
    ofSetColor(40, 200, 255);
    ofDrawCircle(100, 150, 0,900);
    
    ofSetColor(255, 255, 255);
    ofDrawCircle(500,350,200,200);
    
    ofSetColor(200, 201, 123);
    ofDrawCircle(500,0,0,500);
    
    ofFill();
    ofSetColor(0,0,255);
    ofDrawRectangle(-100, -100, -40,350,350);
    ofSetColor(255,0,0);
    ofDrawRectangle(-50, -50, 40, -500,-500);
    ofSetColor(255,255,0);
    ofDrawRectangle(-25, -25, 160, 800,800);
    
    
    ofFill();
    ofSetColor(0,0,0);
    ofDrawTriangle(423, 521, 133, 211, 400, 233);
    
    
    ofDisableDepthTest();

    
    camera.end();
    
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
