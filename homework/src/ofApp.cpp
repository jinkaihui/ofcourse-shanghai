#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    
    my_sound.loadSound("123.mp3");
   
    
    ofSetBackgroundAuto(false );
    
    
    ofBackground (255,255,255);
    
    barColor.set(242,204,3);
    barColor1.set(220,30,54);
    barColor2.set(0,93,175);
    barColor3.set(255,255,255);
    
    


}

//--------------------------------------------------------------
void ofApp::update(){

    
    barColor1.r=ofMap(mouseX,0,ofGetWidth(),0,255);

    barColor.r=ofMap(mouseY,0,ofGetHeight (),0,255);

    
    
    
    
    

    
}

//--------------------------------------------------------------
void ofApp::draw(){
    //a blue bar underneath the circles to demonstrate alpha
   // ofNoFill();
    
    ofSetColor(barColor1);
    ofRect(490,470, 80, 180);
    ofSetColor(barColor3);
    ofRect(500,490, 60, 70);
    ofSetColor(242,204,3,10);
    ofRect(520,505, rectWidth1 ,rectHeight1);
    
    
    
    
    ofSetColor(barColor);
    ofRect(0,25, ofGetWidth(), 20);//width
    ofRect(40,25, 20, 20);
    ofRect(0,110, ofGetWidth(), 20);
    ofRect(0,220, ofGetWidth(), 20);
    ofRect(0,280, ofGetWidth(), 20);
    ofRect(0,400, ofGetWidth(), 20);
    ofRect(0,450, ofGetWidth(), 20);
    ofRect(0,650, ofGetWidth(), 20);
    
    
    
    ofSetColor(barColor);
    ofRect(30,0, 20, ofGetHeight());//height
    ofRect(60,0, 20, ofGetHeight());
    ofRect(120,0, 20, ofGetHeight());
    ofRect(210,0, 20, ofGetHeight());
    ofRect(400,0, 20, ofGetHeight());
    ofRect(430,0, 20, ofGetHeight());
    ofRect(620,0, 20, ofGetHeight());
    ofRect(660,0, 20, ofGetHeight());
    
    ofSetColor(barColor1);//red
    ofRect(120,25, 20, 20);
    ofRect(210,25, 20, 20);
    ofRect(400,25, 20, 20);
    ofRect(430,110, 20, 20);
    ofRect(660,25, 20, 20);
    //red2
    ofRect(120,110, 20, 20);
    ofRect(210,280, 20, 20);
    ofRect(400,650, 20, 20);;
    ofRect(430,110, 20, 20);
    ofRect(660,2220, 20, 20);
    //red3
    ofRect(120,400, 20, 20);
    ofRect(210,280, 20, 20);
    ofRect(400,400, 20, 20);
    ofRect(620,450, 20, 20);
    ofRect(660,450, 20, 20);
    ofRect(60,110, 20, 20);
    ofRect(30,450, 20, 20);
    ofRect(660,450, 20, 20);
    ofRect(30,650, 20, 20);
    ofRect(120,650, 20, 20);
    ofRect(120,600, 20, 20);
    ofRect(660,220, 20, 20);
    

    
    ofSetColor(barColor2);//blue1
    ofRect(460,400, 20, 20);
    ofRect(480,450, 20, 20);
    ofRect(120,400, 20, 20);
    ofRect(210,280, 20, 20);
    ofRect(360,400, 20, 20);
    ofRect(30,25, 20, 20);
    ofRect(120,110, 20, 20);
    
    ofSetColor(barColor2);
    ofRect(260,45, 45, 65);
    ofSetColor(barColor3);
    ofRect(275,65, 20, 20);
    
    
   
    

    
    
    
    ofSetColor(barColor);
    ofRect(140,550, 80, 80);
    ofSetColor(barColor2);
    ofRect(160,570, 30,40);
    
    ofSetColor(barColor3);//white
    ofRect(140,400, 20, 20);
    ofRect(260,280, 20, 20);
    ofRect(400,430, 20, 20);
    ofRect(620,620, 20, 20);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key=='1'){
        rectWidth1 = rectWidth1+30;}
    if(key=='2'){
         rectHeight1 = rectHeight1+30;}
    if(key=='3'){
        rectWidth1 = rectWidth1-30;}
    if(key=='4'){
        rectHeight1 = rectHeight1-30;}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if(key=='w'){my_sound.play();}
    if(key=='q'){my_sound.setPaused(true);}
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
