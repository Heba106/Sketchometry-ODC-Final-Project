#include "SFML\Graphics.hpp"
#include <iostream>
#include <random>
#include "sfml/Audio.hpp"
#include<cmath>
#define PI 3.1415926535898

using namespace std;
using namespace sf;


int butterfly(){
    RenderWindow render (sf :: VideoMode(640,480), "keyboard demo");
    Event event ;

    SoundBuffer soundBuffer;
    Sound sound;

    if(!soundBuffer.loadFromFile("audio/children-logo-116101.ogg"));



    sound.setBuffer(soundBuffer);

    sound.play();
    sound.setLoop(true);
    Texture t1 ;
    t1.loadFromFile("images/butterfly.JPEG");
    Sprite butterfly(t1);

    butterfly.setScale(0.25 , 0.25);

    CircleShape circle0(10);
    circle0.setPosition(Vector2f(200, 150));

    CircleShape circle00(10);
    circle00.setPosition(Vector2f(200, 170));


    CircleShape circle1(22);
    circle1.setPosition(Vector2f(360, 150));

    CircleShape circle2(22);
    circle2.setPosition(Vector2f(290, 250));

    CircleShape circle3(22);
    circle3.setPosition(Vector2f(400, 300));

    CircleShape circle4(22);
    circle4.setPosition(Vector2f(300, 400));

    RectangleShape rectangle (Vector2f(50 , 50));
    rectangle.setPosition(Vector2f(300 , 145));

    RectangleShape line1(Vector2f(100, 5));
    line1.rotate(45);
    line1.setPosition(Vector2f(500 , 100));

    RectangleShape line2(Vector2f(100, 5));
    rectangle.setPosition(450 , 100);
    line2.rotate(-45);
    line2.setPosition(Vector2f(500 , 200));


//000000000000000000000000000000000000000000000000000

float radius_x=82;
float radius_y=35;
unsigned short quality=70;

ConvexShape ellipse;
    ellipse.setPointCount(quality);

for(unsigned short i=0;i<quality;++i){
    float rad=(360/quality*i)/(360/PI/2);
    float x=cos(rad)*radius_x;
    float y=sin(rad)*radius_y;

    ellipse.setPoint(i,Vector2f(x,y));
};
ellipse.setPosition(250,350);

// 00000000000000000000000000000000000000000000000000

float radius_z=82;
float radius_c=35;
unsigned short q=70;
ConvexShape ellipse2;
    ellipse2.setPointCount(q);
 for(unsigned short i=0;i<q;++i){
    float rad=(360/q*i)/(360/PI/2);
    float z=cos(rad)*radius_z;
    float c=sin(rad)*radius_c;

    ellipse2.setPoint(i,Vector2f(z,c));
};
ellipse2.setPosition(300,200);

// 00000000000000000000000000000000000000000000000000

float radius_a=82;
float radius_s=35;
unsigned short u=70;

ConvexShape ellipse3;
    ellipse3.setPointCount(u);

for(unsigned short i=0;i<u;++i){
    float rad=(360/u*i)/(360/PI/2);
    float a=cos(rad)*radius_a;
    float s=sin(rad)*radius_s;

    ellipse3.setPoint(i,Vector2f(a,s));
};
ellipse3.setPosition(350,100);

// 0000000000000000000000000000000000000000000000000

float radius_w=82;
float radius_e=35;
unsigned short y=70;

ConvexShape ellipse4;
    ellipse4.setPointCount(y);

for(unsigned short i=0;i<y;++i){
    float rad=(360/y*i)/(360/PI/2);
    float w=cos(rad)*radius_w;
    float e=sin(rad)*radius_e;

    ellipse4.setPoint(i,Vector2f(w,e));
};
ellipse4.setPosition(300,50);


// 00000000000000000000000000000000000000000000000000


    while(render.isOpen()){
        while(render.pollEvent(event)){
            if(event.type == sf :: Event :: EventType :: Closed)
                render.close();

            if(Keyboard::isKeyPressed(Keyboard::Num1 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    circle1.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                circle1.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    circle1.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                circle1.move(-5.0f,0.0f);
                }

            if(Keyboard::isKeyPressed(Keyboard::R)){
            circle1.rotate(5.0f);
        }
            }


        if(Keyboard::isKeyPressed(Keyboard::Num2 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    circle2.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                circle2.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    circle2.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                circle2.move(-5.0f,0.0f);
                }
            if(Keyboard::isKeyPressed(Keyboard::R)){
            circle2.rotate(5.0f);
        }
            }


        if(Keyboard::isKeyPressed(Keyboard::Num3 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    circle3.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                circle3.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    circle3.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                circle3.move(-5.0f,0.0f);
                }
            if(Keyboard::isKeyPressed(Keyboard::R)){
            circle3.rotate(5.0f);
        }
            }


         if(Keyboard::isKeyPressed(Keyboard::Num4 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    circle4.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                circle4.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    circle4.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                circle4.move(-5.0f,0.0f);
                }

            if(Keyboard::isKeyPressed(Keyboard::R)){
            circle4.rotate(5.0f);
        }
            }


        if(Keyboard::isKeyPressed(Keyboard::Num5 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    circle0.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                circle0.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    circle0.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                circle0.move(-5.0f,0.0f);
                }

            if(Keyboard::isKeyPressed(Keyboard::R)){
            circle0.rotate(5.0f);
        }
            }



        if(Keyboard::isKeyPressed(Keyboard::Num6 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    circle00.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                circle00.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    circle00.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                circle00.move(-5.0f,0.0f);
                }
            if(Keyboard::isKeyPressed(Keyboard::R)){
            circle00.rotate(5.0f);
        }
            }


        if(Keyboard::isKeyPressed(Keyboard::Num7 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    rectangle.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                rectangle.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    rectangle.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                rectangle.move(-5.0f,0.0f);
                }
            if(Keyboard::isKeyPressed(Keyboard::R)){
            rectangle.rotate(5.0f);
        }

            }



        if(Keyboard::isKeyPressed(Keyboard::Num8 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    ellipse.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                ellipse.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    ellipse.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                ellipse.move(-5.0f,0.0f);
                }
            if(Keyboard::isKeyPressed(Keyboard::R)){
            ellipse.rotate(5.0f);
        }
            }



        if(Keyboard::isKeyPressed(Keyboard::Num9 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    ellipse2.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                ellipse2.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    ellipse2.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                ellipse2.move(-5.0f,0.0f);
                }
            if(Keyboard::isKeyPressed(Keyboard::R)){
            ellipse2.rotate(5.0f);
        }
            }


                if(Keyboard::isKeyPressed(Keyboard::Num0 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    ellipse3.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                ellipse3.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    ellipse3.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                ellipse3.move(-5.0f,0.0f);
                }
            if(Keyboard::isKeyPressed(Keyboard::R)){
            ellipse3.rotate(5.0f);
        }
            }



                if(Keyboard::isKeyPressed(Keyboard::Numpad1 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    ellipse4.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                ellipse4.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    ellipse4.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                ellipse4.move(-5.0f,0.0f);
                }
            if(Keyboard::isKeyPressed(Keyboard::R)){
            ellipse4.rotate(5.0f);
        }
            }



            if(Keyboard::isKeyPressed(Keyboard::Numpad2 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    line1.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                    line1.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    line1.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                    line1.move(-5.0f,0.0f);
                }
            if(Keyboard::isKeyPressed(Keyboard::R)){
            line1.rotate(5.0f);
        }
            }



            if(Keyboard::isKeyPressed(Keyboard::Numpad3 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    line2.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                    line2.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    line2.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                    line2.move(-5.0f,0.0f);
                }
            if(Keyboard::isKeyPressed(Keyboard::R)){
            line2.rotate(5.0f);
        }
            }}

// 000000000000000000000000000000000000000000000000000000000000000000000000000000


if(Keyboard::isKeyPressed(Keyboard::C )){
                if(Keyboard::isKeyPressed(Keyboard::R)){
ellipse.setFillColor(sf::Color(210, 31 ,60));
ellipse2.setFillColor(sf::Color(210, 31 ,60));
ellipse3.setFillColor(sf::Color(210, 31 ,60));
ellipse4.setFillColor(sf::Color(210, 31 ,60));

circle00.setFillColor(sf::Color(150, 0, 24));
circle0.setFillColor(sf::Color(150, 0, 24));
circle1.setFillColor(sf::Color(150, 0, 24));
circle2.setFillColor(sf::Color(150, 0, 24));
circle3.setFillColor(sf::Color(150, 0, 24));
circle4.setFillColor(sf::Color(150, 0, 24));

rectangle.setFillColor(sf::Color(180, 55, 87));

line1.setFillColor(sf::Color(66, 13 , 9));
line2.setFillColor(sf::Color(66, 13 , 9));

                }
                if(Keyboard::isKeyPressed(Keyboard::B)){
ellipse.setFillColor(sf::Color(0, 24 ,249));
ellipse2.setFillColor(sf::Color(0, 24 ,249));
ellipse3.setFillColor(sf::Color(0, 24 ,249));
ellipse4.setFillColor(sf::Color(0, 24 ,249));

circle00.setFillColor(sf::Color(0, 0 ,128));
circle0.setFillColor(sf::Color(0, 0 ,128));
circle1.setFillColor(sf::Color(0, 0 ,128));
circle2.setFillColor(sf::Color(0, 0 ,128));
circle3.setFillColor(sf::Color(0, 0 ,128));
circle4.setFillColor(sf::Color(0, 0 ,128));

rectangle.setFillColor(sf::Color(0, 128 ,254));

line1.setFillColor(sf::Color(15, 82 ,186));
line2.setFillColor(sf::Color(15, 82 ,186));

                }
                if(Keyboard::isKeyPressed(Keyboard::G)){
ellipse.setFillColor(sf::Color(59, 177 ,67));
ellipse2.setFillColor(sf::Color(59, 177 ,67));
ellipse3.setFillColor(sf::Color(59, 177 ,67));
ellipse4.setFillColor(sf::Color(59, 177 ,67));

circle00.setFillColor(sf::Color(11, 102 ,35));
circle0.setFillColor(sf::Color(11, 102 ,35));
circle1.setFillColor(sf::Color(11, 102 ,35));
circle2.setFillColor(sf::Color(11, 102 ,35));
circle3.setFillColor(sf::Color(11, 102 ,35));
circle4.setFillColor(sf::Color(11, 102 ,35));

rectangle.setFillColor(sf::Color(76, 187 ,23));

line1.setFillColor(sf::Color(4, 57 ,39));
line2.setFillColor(sf::Color(4, 57 ,39));

                }
            }


//00000000000000000000000000000000000000000000000000000000000000000000000000000

render.clear(sf::Color(137, 207, 239));
       render.draw(circle1);
       render.draw(circle2);
       render.draw(circle3);
       render.draw(circle4);
       render.draw(circle0);
       render.draw(circle00);
       render.draw(rectangle);
       render.draw(ellipse);
       render.draw(ellipse2);
       render.draw(ellipse3);
       render.draw(ellipse4);
       render.draw(line1);
       render.draw(line2);
       render.draw(butterfly);

       render.display();
    }
    }

//00000000000000000000000000000000000000000

int bear()
{
    RenderWindow render (sf :: VideoMode(640,480), "keyboard demo");
    Event event ;
     SoundBuffer soundBuffer;
    Sound sound;

    if(!soundBuffer.loadFromFile("audio/children-logo-116101.ogg"));



    sound.setBuffer(soundBuffer);

    sound.play();
    sound.setLoop(true);


    Texture t1 ;
    t1.loadFromFile("images/bear.JPEG");
    Sprite bear(t1);
    bear.setScale(1 , 1);

    // create bear face
    CircleShape face(60);
    face.setPosition(Vector2f(250, 300));
    face.setOutlineColor(Color::Black);
    face.setOutlineThickness(2);

    // create bear eye1
    CircleShape eye1(6);
    eye1.setFillColor(Color::Black);
    eye1.setPosition(Vector2f(300, 170));
    eye1.setOutlineColor(Color::White);
    eye1.setOutlineThickness(10);

    // create bear eye2
    CircleShape eye2(6);
    eye2.setFillColor(Color::Black);
    eye2.setPosition(Vector2f(400, 150));
    eye2.setOutlineColor(Color::White);
    eye2.setOutlineThickness(10);

    // create bear mouth
    CircleShape mouth(25);
    mouth.setPosition(Vector2f(350, 245));
    mouth.setOutlineColor(Color::Black);
    mouth.setOutlineThickness(2);

    // create bear nose
    CircleShape nose(10);
    nose.setPosition(Vector2f(450, 200));
    nose.setOutlineColor(Color::Black);
    nose.setOutlineThickness(2);

    // create bear hand1
    CircleShape hand1(40);
    hand1.setPosition(Vector2f(250, 400));
    hand1.setOutlineColor(Color::Black);
    hand1.setOutlineThickness(2);

    // create bear hand2
    CircleShape hand2(40);
    hand2.setPosition(Vector2f(400, 400));
    hand2.setOutlineColor(Color::Black);
    hand2.setOutlineThickness(2);

    // create bear leg1
    CircleShape leg1(40);
    leg1.setPosition(Vector2f(150, 400));
    leg1.setOutlineColor(Color::Black);
    leg1.setOutlineThickness(2);

    // create bear leg2
    CircleShape leg2(40);
    leg2.setPosition(Vector2f(300, 400));
    leg2.setOutlineColor(Color::Black);
    leg2.setOutlineThickness(2);


// 000000000000000000000

float radius_b1=130;
float radius_b2=100;
unsigned short b1=360;

ConvexShape ellipseb1;
    ellipseb1.setPointCount(b1);

for(unsigned short i=0;i<b1;++i){
    float rad=(360/b1*i)/(360/PI/2);
    float b1=cos(rad)*radius_b1;
    float b2=sin(rad)*radius_b2;

    ellipseb1.setPoint(i,Vector2f(b1,b2));
};
ellipseb1.setPosition(400,100);
ellipseb1.setOutlineColor(Color::Black);
ellipseb1.setOutlineThickness(2);

// 0000000000000

float radius_b3=40;
float radius_b4=35;
unsigned short b2=360;

ConvexShape ellipseb2;
    ellipseb2.setPointCount(b2);

for(unsigned short i=0;i<b2;++i){
    float rad=(360/b2*i)/(360/PI/2);
    float b3=cos(rad)*radius_b3;
    float b4=sin(rad)*radius_b4;

    ellipseb2.setPoint(i,Vector2f(b3,b4));
};
ellipseb2.setPosition(400,200);
ellipseb2.setOutlineColor(Color::Black);
ellipseb2.setOutlineThickness(2);

// 0000000000000

float radius_b5=40;
float radius_b6=35;
unsigned short b3=360;

ConvexShape ellipseb3;
    ellipseb3.setPointCount(b3);

for(unsigned short i=0;i<b3;++i){
    float rad=(360/b3*i)/(360/PI/2);
    float b5=cos(rad)*radius_b5;
    float b6=sin(rad)*radius_b6;

    ellipseb3.setPoint(i,Vector2f(b5,b6));
};
ellipseb3.setPosition(300,300);
ellipseb3.setOutlineColor(Color::Black);
ellipseb3.setOutlineThickness(2);



while(render.isOpen()){
        while(render.pollEvent(event)){
            if(event.type == sf :: Event :: EventType :: Closed)
                render.close();

            // move face
            if(Keyboard::isKeyPressed(Keyboard::Num1 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    face.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                face.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    face.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                face.move(-5.0f,0.0f);
                }

                    //rotate face
            if(Keyboard::isKeyPressed(Keyboard::R)){
                face.rotate(5.0f);
            }
            }



            //move eye1
            if(Keyboard::isKeyPressed(Keyboard::Num2 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    eye1.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                    eye1.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    eye1.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                    eye1.move(-5.0f,0.0f);
                }
                            // rotate eye1
            if(Keyboard::isKeyPressed(Keyboard::R)){
                eye1.rotate(5.0f);
            }
            }



            //move eye2
            if(Keyboard::isKeyPressed(Keyboard::Num3 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    eye2.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                    eye2.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    eye2.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                    eye2.move(-5.0f,0.0f);
                }
                            // rotate eye2
            if(Keyboard::isKeyPressed(Keyboard::R)){
                eye2.rotate(5.0f);
            }
            }



            //move mouth
            if(Keyboard::isKeyPressed(Keyboard::Num4 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    mouth.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                    mouth.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    mouth.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                    mouth.move(-5.0f,0.0f);
                }
                            // rotate mouth
            if(Keyboard::isKeyPressed(Keyboard::R)){
                mouth.rotate(5.0f);
            }
            }



            //move nose
            if(Keyboard::isKeyPressed(Keyboard::Num5 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    nose.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                    nose.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    nose.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                    nose.move(-5.0f,0.0f);
                }
                            // rotate nose
            if(Keyboard::isKeyPressed(Keyboard::R)){
                nose.rotate(5.0f);
            }
            }



            //move hand1
            if(Keyboard::isKeyPressed(Keyboard::Numpad1 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    hand1.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                    hand1.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    hand1.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                    hand1.move(-5.0f,0.0f);
                }
                            // rotate hand1
            if(Keyboard::isKeyPressed(Keyboard::R)){
                hand1.rotate(5.0f);
            }
            }



            //move hand2
            if(Keyboard::isKeyPressed(Keyboard::Numpad2 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    hand2.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                    hand2.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    hand2.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                    hand2.move(-5.0f,0.0f);
                }
                            // rotate hand2
            if(Keyboard::isKeyPressed(Keyboard::R)){
                hand2.rotate(5.0f);
            }
            }



            //move leg1
            if(Keyboard::isKeyPressed(Keyboard::Numpad3 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    leg1.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                    leg1.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    leg1.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                    leg1.move(-5.0f,0.0f);
                }
                            // rotate leg1
            if(Keyboard::isKeyPressed(Keyboard::R)){
                leg1.rotate(5.0f);
            }
            }



            //move leg2
            if(Keyboard::isKeyPressed(Keyboard::Numpad4 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    leg2.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                    leg2.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    leg2.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                    leg2.move(-5.0f,0.0f);
                }
                            // rotate leg2
            if(Keyboard::isKeyPressed(Keyboard::R)){
                leg2.rotate(5.0f);
            }
            }



            //move ellipseb1
            if(Keyboard::isKeyPressed(Keyboard::Num6 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    ellipseb1.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                    ellipseb1.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    ellipseb1.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                    ellipseb1.move(-5.0f,0.0f);
                }
                            // rotate ellipseb1
            if(Keyboard::isKeyPressed(Keyboard::R)){
                ellipseb1.rotate(5.0f);
            }
            }



            //move ellipseb2
            if(Keyboard::isKeyPressed(Keyboard::Num7 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    ellipseb2.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                    ellipseb2.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    ellipseb2.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                    ellipseb2.move(-5.0f,0.0f);
                }
                            // rotate ellipseb2
            if(Keyboard::isKeyPressed(Keyboard::R)){
                ellipseb2.rotate(5.0f);
            }
            }



            //move ellipseb3
            if(Keyboard::isKeyPressed(Keyboard::Num8 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    ellipseb3.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                    ellipseb3.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    ellipseb3.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                    ellipseb3.move(-5.0f,0.0f);
                }
                            // rotate ellipseb3
            if(Keyboard::isKeyPressed(Keyboard::R)){
                ellipseb3.rotate(5.0f);
            }
            }

            }

//0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000


if(Keyboard::isKeyPressed(Keyboard::C )){
                if(Keyboard::isKeyPressed(Keyboard::R)){
ellipseb1.setFillColor(sf::Color(199, 21 ,133));
ellipseb2.setFillColor(sf::Color(199, 21 ,133));
ellipseb3.setFillColor(sf::Color(199, 21 ,133));


leg1.setFillColor(sf::Color(255, 0 ,127));
leg2.setFillColor(sf::Color(255, 0 ,127));

hand1.setFillColor(sf::Color(255, 0 ,127));
hand2.setFillColor(sf::Color(255, 0 ,127));

mouth.setFillColor(sf::Color(255, 20 ,147));

nose.setFillColor(sf::Color(255, 182 ,193));

face.setFillColor(sf::Color(255, 105 ,180));


                }
                if(Keyboard::isKeyPressed(Keyboard::B)){
ellipseb1.setFillColor(sf::Color(139, 69 ,19));
ellipseb2.setFillColor(sf::Color(139, 69 ,19));
ellipseb3.setFillColor(sf::Color(139, 69 ,19));


leg1.setFillColor(sf::Color(165, 42 ,42));
leg2.setFillColor(sf::Color(165, 42 ,42));

hand1.setFillColor(sf::Color(165, 42 ,42));
hand2.setFillColor(sf::Color(165, 42 ,42));

mouth.setFillColor(sf::Color(204, 102 ,0));

nose.setFillColor(sf::Color(205, 133 ,63));

face.setFillColor(sf::Color(153, 76 ,0));


                }
                if(Keyboard::isKeyPressed(Keyboard::G)){
ellipseb1.setFillColor(sf::Color(59, 177 ,67));
ellipseb2.setFillColor(sf::Color(59, 177 ,67));
ellipseb3.setFillColor(sf::Color(59, 177 ,67));


leg1.setFillColor(sf::Color(11, 102 ,35));
leg2.setFillColor(sf::Color(11, 102 ,35));

hand1.setFillColor(sf::Color(11, 102 ,35));
hand2.setFillColor(sf::Color(11, 102 ,35));

mouth.setFillColor(sf::Color(11, 102 ,35));

nose.setFillColor(sf::Color(11, 102 ,35));

face.setFillColor(sf::Color(76, 187 ,23));


                }
            }

//0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000

       render.clear(sf::Color(137, 207, 239));

       render.draw(hand1);
       render.draw(hand2);
       render.draw(leg1);
       render.draw(leg2);
       render.draw(ellipseb1);
       render.draw(ellipseb2);
       render.draw(ellipseb3);
       render.draw(face);
       render.draw(eye1);
       render.draw(eye2);
       render.draw(mouth);
       render.draw(nose);
       render.draw(bear);


       render.display();
}
}


//00000000000000000000000000000000000000000


int flower(){
    RenderWindow render (sf :: VideoMode(640,480), "keyboard demo");
    Event event ;

SoundBuffer soundBuffer;
    Sound sound;

    if(!soundBuffer.loadFromFile("audio/children-logo-116101.ogg"));



    sound.setBuffer(soundBuffer);

    sound.play();
    sound.setLoop(true);

    Texture t1 ;
    t1.loadFromFile("images/flower.JPEG");
    Sprite flower(t1);
    flower.setScale(0.8 , 0.8);


     CircleShape circle1(20);
     circle1.setPosition(Vector2f(300, 200));


    RectangleShape rectangle (Vector2f(50 , 50));
    rectangle.setPosition(Vector2f(300 , 145));

    RectangleShape line1(Vector2f(100, 5));
    line1.rotate(45);
    line1.setPosition(Vector2f(500 , 100));

    RectangleShape line2(Vector2f(100, 5));
    line2.rotate(-45);
    line2.setPosition(Vector2f(500 , 200));

     RectangleShape line3(Vector2f(200, 5));
    line3.rotate(0);
    line3.setPosition(Vector2f(500 , 300));

    CircleShape p1 (30,3);
     CircleShape p2 (30,3);
     p2.setPosition(400,100);
     p1.setPosition(350,100);


//00000000000000000

float radius_x=40;
float radius_y=20;
unsigned short quality=70;

ConvexShape ellipse;
    ellipse.setPointCount(quality);

for(unsigned short i=0;i<quality;++i){
    float rad=(360/quality*i)/(360/PI/2);
    float x=cos(rad)*radius_x;
    float y=sin(rad)*radius_y;

    ellipse.setPoint(i,Vector2f(x,y));
};
ellipse.setPosition(300,150);

// 00000000000000000

float radius_z=40;
float radius_c=20;
unsigned short q=70;
ConvexShape ellipse2;
    ellipse2.setPointCount(q);
 for(unsigned short i=0;i<q;++i){
    float rad=(360/q*i)/(360/PI/2);
    float z=cos(rad)*radius_z;
    float c=sin(rad)*radius_c;

    ellipse2.setPoint(i,Vector2f(z,c));
};
ellipse2.setPosition(200,200);

// 000000000000000000

float radius_a=40;
float radius_s=20;
unsigned short u=70;

ConvexShape ellipse3;
    ellipse3.setPointCount(u);

for(unsigned short i=0;i<u;++i){
    float rad=(360/u*i)/(360/PI/2);
    float a=cos(rad)*radius_a;
    float s=sin(rad)*radius_s;

    ellipse3.setPoint(i,Vector2f(a,s));
};
ellipse3.setPosition(300,300);

// 0000000000000

float radius_w=40;
float radius_e=20;
unsigned short y=70;

ConvexShape ellipse4;
    ellipse4.setPointCount(y);

for(unsigned short i=0;i<y;++i){
    float rad=(360/y*i)/(360/PI/2);
    float w=cos(rad)*radius_w;
    float e=sin(rad)*radius_e;

    ellipse4.setPoint(i,Vector2f(w,e));
};
ellipse4.setPosition(400,400);

// 000000000000000000

float radius_aa=40;
float radius_ss=20;
unsigned short uu=70;

ConvexShape ellipse5;
    ellipse5.setPointCount(uu);

for(unsigned short i=0;i<uu;++i){
    float rad=(360/uu*i)/(360/PI/2);
    float aa=cos(rad)*radius_aa;
    float ss=sin(rad)*radius_ss;

    ellipse5.setPoint(i,Vector2f(aa,ss));
};
ellipse5.setPosition(450,400);

// 0000000000000

float radius_ww=40;
float radius_ee=20;
unsigned short  yy=70;

ConvexShape ellipse6;
    ellipse6.setPointCount(yy);

for(unsigned short i=0;i<yy;++i){
    float rad=(360/yy*i)/(360/PI/2);
    float ww=cos(rad)*radius_ww;
    float ee=sin(rad)*radius_ee;

    ellipse6.setPoint(i,Vector2f(ww,ee));
};
ellipse6.setPosition(350,300);

// 0000000000000


    while(render.isOpen()){
        while(render.pollEvent(event)){
            if(event.type == sf :: Event :: EventType :: Closed)
                render.close();
//circle 1
           if(Keyboard::isKeyPressed(Keyboard::Num1 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    circle1.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                circle1.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    circle1.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                circle1.move(-5.0f,0.0f);
                }

                            if(Keyboard::isKeyPressed(Keyboard::R)){
            circle1.rotate(5.0f);
        }
            }

//rectangle 2

        if(Keyboard::isKeyPressed(Keyboard::Num2 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    rectangle.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                rectangle.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    rectangle.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                rectangle.move(-5.0f,0.0f);
                }

              if(Keyboard::isKeyPressed(Keyboard::R)){
            rectangle.rotate(5.0f);
    }}

//ellips 8 i
        if(Keyboard::isKeyPressed(Keyboard::Num8 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    ellipse.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                ellipse.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    ellipse.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                ellipse.move(-5.0f,0.0f);
                }

               if(Keyboard::isKeyPressed(Keyboard::R)){
            ellipse.rotate(5.0f);
        }}

//ellips2 9 0
        if(Keyboard::isKeyPressed(Keyboard::Num9 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    ellipse2.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                ellipse2.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    ellipse2.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                ellipse2.move(-5.0f,0.0f);
                }

               if(Keyboard::isKeyPressed(Keyboard::R)){
            ellipse2.rotate(5.0f);
        }}

//elipse3 0 p
                if(Keyboard::isKeyPressed(Keyboard::Num0 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    ellipse3.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                ellipse3.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    ellipse3.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                ellipse3.move(-5.0f,0.0f);
                }

               if(Keyboard::isKeyPressed(Keyboard::R)){
            ellipse3.rotate(5.0f);
        }}

//ellipse4 6 y
                if(Keyboard::isKeyPressed(Keyboard::Num6 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    ellipse4.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                ellipse4.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    ellipse4.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                ellipse4.move(-5.0f,0.0f);
                }

               if(Keyboard::isKeyPressed(Keyboard::R)){
            ellipse4.rotate(5.0f);
        }}
//ellipse5 5 t
                if(Keyboard::isKeyPressed(Keyboard::Num5 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    ellipse5.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                ellipse5.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    ellipse5.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                ellipse5.move(-5.0f,0.0f);
                }

               if(Keyboard::isKeyPressed(Keyboard::R)){
            ellipse5.rotate(5.0f);
        }}
//ellipse6 7 u
                if(Keyboard::isKeyPressed(Keyboard::Num7 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    ellipse6.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                ellipse6.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    ellipse6.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                ellipse6.move(-5.0f,0.0f);
                }

               if(Keyboard::isKeyPressed(Keyboard::R)){
            ellipse6.rotate(5.0f);
        }}
//line 1 numpad2 b
            if(Keyboard::isKeyPressed(Keyboard::Numpad2 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    line1.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                    line1.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    line1.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                    line1.move(-5.0f,0.0f);
                }

               if(Keyboard::isKeyPressed(Keyboard::R)){
            line1.rotate(5.0f);
        }}

//line2 numpad3 d
            if(Keyboard::isKeyPressed(Keyboard::Numpad3 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    line2.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                    line2.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    line2.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                    line2.move(-5.0f,0.0f);
                }

               if(Keyboard::isKeyPressed(Keyboard::R)){
            line2.rotate(5.0f);
        }}


//line 3 numpad1
            if(Keyboard::isKeyPressed(Keyboard::Numpad1 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    line3.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                    line3.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    line3.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                    line3.move(-5.0f,0.0f);
                }

               if(Keyboard::isKeyPressed(Keyboard::R)){
            line3.rotate(5.0f);
        }}

// p1 numbad5 K
         if(Keyboard::isKeyPressed(Keyboard::Numpad5 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    p1.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                    p1.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    p1.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                    p1.move(-5.0f,0.0f);
                }

               if(Keyboard::isKeyPressed(Keyboard::R)){
            p1.rotate(5.0f);
        }}
// p2 numbad4 l
  if(Keyboard::isKeyPressed(Keyboard::Numpad4 )){
                if(Keyboard::isKeyPressed(Keyboard::Up)){
                    p2.move(0.0f,-5.0f);
                }
                if(Keyboard::isKeyPressed(Keyboard::Down)){
                    p2.move(0.0f,5.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Right)){
                    p2.move(5.0f,0.0f);
                }

                if(Keyboard::isKeyPressed(Keyboard::Left)){
                    p2.move(-5.0f,0.0f);
                }

               if(Keyboard::isKeyPressed(Keyboard::R)){
            p2.rotate(5.0f);
        }}}
        //0000000000000000000000000000000000000000000000000000000000000000000000000

        if(Keyboard::isKeyPressed(Keyboard::C )){
                if(Keyboard::isKeyPressed(Keyboard::R)){
                    ellipse.setFillColor(sf::Color(219,112,147));
                    ellipse2.setFillColor(sf::Color(219,112,147));
                    ellipse3.setFillColor(sf::Color(219,112,147));
                    ellipse4.setFillColor(sf::Color(219,112,147));
                    ellipse5.setFillColor(sf::Color(219,112,147));
                    ellipse6.setFillColor(sf::Color(219,112,147));

                    circle1.setFillColor(Color(255, 153, 204));

                    rectangle.setFillColor(sf::Color(153, 76 ,0));

                    line1.setFillColor(sf::Color(0, 102 ,0));

                    line2.setFillColor(sf::Color(0, 102 ,0));

                    line3.setFillColor(sf::Color(0, 102 ,0));

                    p1.setFillColor(sf::Color(0, 204 ,0));
                    p2.setFillColor(sf::Color(0, 204 ,0));
}  }
                if(Keyboard::isKeyPressed(Keyboard::C )){
                if(Keyboard::isKeyPressed(Keyboard::G)){
ellipse.setFillColor(sf::Color(178,102,255));
ellipse2.setFillColor(sf::Color(178,102,255));
ellipse3.setFillColor(sf::Color(178,102,255));
ellipse4.setFillColor(sf::Color(178,102,255));
ellipse5.setFillColor(sf::Color(178,102,255));
ellipse6.setFillColor(sf::Color(178,102,255));



circle1.setFillColor(sf::Color(229, 204, 255));

rectangle.setFillColor(sf::Color(255, 153 ,51));

line1.setFillColor(sf::Color(0, 102 ,0));

line2.setFillColor(sf::Color(0, 102 ,0));

line3.setFillColor(sf::Color(0, 102 ,0));

p1.setFillColor(sf::Color(0, 204 ,102));
p2.setFillColor(sf::Color(0, 204 ,102));


                }  }
                if(Keyboard::isKeyPressed(Keyboard::C )){
                if(Keyboard::isKeyPressed(Keyboard::B)){
ellipse.setFillColor(sf::Color(255,255,102));
ellipse2.setFillColor(sf::Color(255,255,102));
ellipse3.setFillColor(sf::Color(255,255,102));
ellipse4.setFillColor(sf::Color(255,255,102));
ellipse5.setFillColor(sf::Color(255,255,102));
ellipse6.setFillColor(sf::Color(255,255,102));



circle1.setFillColor(sf::Color(255, 255, 204));

rectangle.setFillColor(sf::Color(255, 153 ,51));

line1.setFillColor(sf::Color(0, 102 ,0));

line2.setFillColor(sf::Color(0, 102 ,0));

line3.setFillColor(sf::Color(0, 102 ,0));

p1.setFillColor(sf::Color(0, 204 ,102));
p2.setFillColor(sf::Color(0, 204 ,102));





                }  }



render.clear(sf::Color(137, 207, 239));


       render.draw(rectangle);
       render.draw(flower);

       render.draw(circle1);

       render.draw(ellipse);
       render.draw(ellipse2);
       render.draw(ellipse3);
       render.draw(ellipse4);
       render.draw(ellipse5);
       render.draw(ellipse6);

         render.draw(line1);
         render.draw(line2);
         render.draw(line3);

       render.draw(p1);
       render.draw(p2);


       render.display();
    }
    }

//00000000000000000000000000000000000000000


int main (int argc , char ** argv){

int count;

		 cout<<" --------------------------  \n";
		 cout<<"|       sketchometry       | \n";
         cout<<"|           IGL            | \n";
		 cout<<" --------------------------  \n";

cout << " select..\n 1:to draw butterfly \n 2:to draw teddybear \n 3:to draw flower \n Your Choice --> ";
cin >> count;
if (count ==1){
    butterfly();


}
else if (count==2){
    bear();
}
else if (count ==3){
    flower();
}}
