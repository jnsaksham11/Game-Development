#include<simplecpp>
int main(){
	initCanvas("start",500,500);
        Text tt(250,250,"play");
        Rectangle rr(250,250,30,20);
        tt.setColor(COLOR("RED"));
        int vv=getClick();
        int xx=vv/65536,yy=vv%65536;
        if(xx>=235 && xx<=265 &&  yy>=240 && yy<=260)
                closeCanvas();


        initCanvas("game",1000,1000);
        Line l1(200,200,200,500), l2(300,200,300,500), l3(100,300,400,300) ,l4(100,400,400,400);
        Circle c1(0,0,0);
        Line l5(0,0,0,0) , l6(0,0,0,0);
        int a[3][3];
	Text t(0,0,0),t3(800,100,"player(X):"),t4(800,200,"player(O):"),t5(840,100,0),t6(840,200,0) ;
	Rectangle  r3(800,100,textWidth("player(X):")+30,textHeight()+20), r4(800,200,textWidth("player(O):")+30,textHeight()+20);
	t3.setColor(COLOR("BLUE"));t4.setColor(COLOR("BLUE"));
	bool start=true;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			a[i][j]=0;

        for(int i=1;i<=9;i++){
		if(i%2==0)
			start=false;
		else 
			start=true;
		if(start){
                int u=getClick();
                int x1=u/65536 , y1=u%65536;
		l5.setColor(COLOR("RED"));
		l6.setColor(COLOR("RED"));
		if(x1>=100 && x1<=200 && y1>=200 && y1<=300){
			l5.reset(150+30,250+30,150-30,250-30);
                        l6.reset(150-30,250+30,150+30,250-30);
			l5.imprint();
                        l6.imprint();
			a[0][0]=1;}
		else if(x1>=200 && x1<=300 && y1>=200 && y1<=300){
			l5.reset(250+30,250+30,250-30,250-30);
                        l6.reset(250-30,250+30,250+30,250-30);
                        l5.imprint();
                        l6.imprint();
			a[0][1]=1;}
		else if(x1>=300 && x1<=400 && y1>=200 && y1<=300){
			l5.reset(350+30,250+30,350-30,250-30);
                        l6.reset(350-30,250+30,350+30,250-30);
                        l5.imprint();
                        l6.imprint();
			a[0][2]=1;}
		else if(x1>=100 && x1<=200 && y1>=300 && y1<=400){
			l5.reset(150+30,350+30,150-30,350-30);
                        l6.reset(150-30,350+30,150+30,350-30);
                        l5.imprint();
                        l6.imprint();
			a[1][0]=1;}
		else if(x1>=200 && x1<=300 && y1>=300 && y1<=400){
			l5.reset(250+30,350+30,250-30,350-30);
                        l6.reset(250-30,350+30,250+30,350-30);
                        l5.imprint();
                        l6.imprint();
			a[1][1]=1;}
		else if(x1>=300 && x1<=400 && y1>=300 && y1<=400){
			l5.reset(350+30,350+30,350-30,350-30);
                        l6.reset(350-30,350+30,350+30,350-30);
                        l5.imprint();
                        l6.imprint();
			a[1][2]=1;}
		else if(x1>=100 && x1<=200 && y1>=400 && y1<=500){
			l5.reset(150+30,450+30,150-30,450-30);
                        l6.reset(150-30,450+30,150+30,450-30);
                        l5.imprint();
                        l6.imprint();
			a[2][0]=1;}
		else if(x1>=200 && x1<=300 && y1>=400 && y1<=500){
			l5.reset(250+30,450+30,250-30,450-30);
                        l6.reset(250-30,450+30,250+30,450-30);
                        l5.imprint();
                        l6.imprint();
			a[2][1]=1;}
		else if(x1>=300 && x1<=400 && y1>=400 && y1<=500){
			l5.reset(350+30,450+30,350-30,450-30);
                        l6.reset(350-30,450+30,350+30,450-30);
                        l5.imprint();
                        l6.imprint();
			a[2][2]=1;}
		}
		else{
      		int v=getClick();
                int x=v/65536 , y=v%65536;
		c1.setColor(COLOR("BLUE"));
                if(x>=100 && x<=200 && y>=200 && y<=300){
			c1.reset(150,250,30);
			c1.imprint();
                        a[0][0]=-1;}
                else if(x>=200 && x<=300 && y>=200 && y<=300){
			c1.reset(250,250,30);
                        c1.imprint();
                        a[0][1]=-1;}
                else if(x>=300 && x<=400 && y>=200 && y<=300){
			c1.reset(350,250,30);
                        c1.imprint();
                        a[0][2]=-1;}
                else if(x>=100 && x<=200 && y>=300 && y<=400){
			c1.reset(150,350,30);
                        c1.imprint();
                        a[1][0]=-1;}
                else if(x>=200 && x<=300 && y>=300 && y<=400){
			c1.reset(250,350,30);
                        c1.imprint();
                        a[1][1]=-1;}
                else if(x>=300 && x<=400 && y>=300 && y<=400){
			c1.reset(350,350,30);
                        c1.imprint();
                        a[1][2]=-1;}
                else if(x>=100 && x<=200 && y>=400 && y<=500){
			c1.reset(150,450,30);
                        c1.imprint();
                        a[2][0]=-1;}
                else if(x>=200 && x<=300 && y>=400 && y<=500){
			c1.reset(250,450,30);
                        c1.imprint();
                        a[2][1]=-1;}
                else if(x>=300 && x<=400 && y>=400 && y<=500){
			c1.reset(350,450,30);
                        c1.imprint();
                        a[2][2]=-1;}
	         }  


                if(a[1][0]==1 && a[1][1]==1 && a[1][2]==1){
				t.reset(500,500,"winner 1");
				t.imprint();
				t5.reset(840,100,10);
				wait(3);
				break;
				closeCanvas();
			}
		else if(a[2][0]==1 && a[2][1]==1 && a[2][2]==1){
                                t.reset(500,500,"winner 1");
                                t.imprint();
				t5.reset(840,100,10);
                                wait(3);
				break;
                                closeCanvas();
                        }
		else if(a[3][0]==1 && a[3][1]==1 && a[3][2]==1){
                                t.reset(500,500,"winner 1");
                                t.imprint();
				t5.reset(840,100,10);
                                wait(3);
				break;
                                closeCanvas();
                        }
	        else if(a[0][1]==1 && a[1][1]==1 && a[2][1]==1){
				t.reset(500,500,"winner 1");
                                t.imprint();
				t5.reset(840,100,10);
                                wait(3);
				break;
                                closeCanvas();
			}
		else if(a[0][2]==1 && a[1][2]==1 && a[2][2]==1){
                                t.reset(500,500,"winner 1");
                                t.imprint();
				t5.reset(840,100,10);
                                wait(3);
				break;
                                closeCanvas();
                        }
		else if(a[0][3]==1 && a[1][3]==1 && a[2][3]==1){
                                t.reset(500,500,"winner 1");
                                t.imprint();
				t5.reset(840,100,10);
                                wait(3);
				break;
                                closeCanvas();
                        }
	        else if(a[0][0]==-1 && a[0][1]==-1 && a[0][2]==-1){ 
				t.reset(500,500,"winner 2");
                                t.imprint();
				t6.reset(840,200,10);
                                wait(3);
				break;
                                closeCanvas();
				}
		else if(a[1][0]==-1 && a[1][1]==-1 && a[1][2]==-1){
                                t.reset(500,500,"winner 2");
                                t.imprint();
				t6.reset(840,200,10);
                                wait(3);
				break;
                                closeCanvas();
                                }
		else if(a[2][0]==-1 && a[2][1]==-1 && a[2][2]==-1){
                                t.reset(500,500,"winner 2");
                                t.imprint();
				t6.reset(840,200,10);
                                wait(3);
				break;
                                closeCanvas();
                                }
		else if(a[0][1]==-1 && a[1][1]==-1 && a[2][1]==-1){
			        t.reset(500,500,"winner 2");
                                t.imprint();
				t6.reset(840,200,10);
                                wait(3);
				break;
                                closeCanvas();
			       	}
		else if(a[0][2]==-1 && a[1][2]==-1 && a[2][2]==-1){
                                t.reset(500,500,"winner 2");
                                t.imprint();
				t6.reset(840,200,10);
                                wait(3);
				break;
                                closeCanvas();
                                }
		else if(a[0][0]==-1 && a[1][0]==-1 && a[2][0]==-1){
                                t.reset(500,500,"winner 2");
                                t.imprint();
				t6.reset(840,200,10);
                                wait(3);
				break;
                                closeCanvas();
                                }
		else if(a[0][0]==1 && a[1][1]==1 && a[2][2]==1){
			 t.reset(500,500,"winner 1");
                         t.imprint();
			 t5.reset(840,100,10);
                         wait(3);
			 break;
                         closeCanvas();
		      }
		else if(a[0][2]==1 && a[1][1]==1 && a[2][0]==1){
			 t.reset(500,500,"winner 1");
                         t.imprint();
			 t5.reset(840,100,10);
                         wait(3);
			 break;
                         closeCanvas();
		       	 }
		else if(a[0][0]==-1 && a[1][1]==-1 && a[2][2]==-1){
			 t.reset(500,500,"winner 2");
                         t.imprint();
			 t6.reset(840,200,10);
                         wait(3);
			 break;
                         closeCanvas();
		       	}
		else if(a[0][2]==-1 && a[1][1]==-1 && a[2][0]==-1){
			 t.reset(500,500,"winner 2");
                         t.imprint();
			 t6.reset(840,200,10);
                         wait(3);
			 break;
                         closeCanvas();
		}
		else if(i==9){
			t.reset(500,500,"no one win, next time");
			t.imprint();
			wait(3);
			break;
			closeCanvas();
                }
	}
}


