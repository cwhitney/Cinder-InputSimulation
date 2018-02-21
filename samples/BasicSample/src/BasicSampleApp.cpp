#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"
#include "cinder/Timeline.h"

#include "InputSimulation.h"

using namespace ci;
using namespace ci::app;
using namespace std;

/**
 *  Start this app and then focus on another window.
 *
 * The program will output this until stopped:
 *  xHxExLxLxOx xWxOxRxLxD
 */

class BasicSampleApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
    void keyDown( KeyEvent event ) override;
	void update() override;
	void draw() override;
    
    double lt = 0.0f;
    
    std::string str = "hello world";
    int dex = 0;
};

void BasicSampleApp::setup()
{
}

void BasicSampleApp::mouseDown( MouseEvent event )
{
}

void BasicSampleApp::keyDown( KeyEvent event )
{
}

void BasicSampleApp::update()
{
    float ct = fract(getElapsedSeconds());
    if(ct < lt){
        
        // this is the preferred way to use it
        sb::InputSimulation::keyTap( KeyEvent::KEY_x );
        
        // however, because Cinder maps characters to their keyboard ASCII equivalents, we can also do this
        sb::InputSimulation::keyTap( (int)str[dex], sb::InputSimulation::KeyOptions().shiftDown() );
        if(++dex == str.size()) dex = 0;
    }
    lt = ct;
}

void BasicSampleApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) );
    
    
}

CINDER_APP( BasicSampleApp, RendererGl, [&](ci::app::App::Settings *settings){
    
})
