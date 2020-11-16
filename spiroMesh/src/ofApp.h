#pragma once

#include "ofMain.h"

using namespace glm;

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    
        void initSpiroMesh(ofMesh &curMesh, float r);
        void updateSpiroMesh(ofMesh &curMesh, float r, float rMult, int freqMult, float phase);
    
        ofMesh myMesh;
    
        int numSegments;
		
};
