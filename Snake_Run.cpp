#include<simplecpp>
#include<cstdlib>
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
	int x=200,y=200;
	Text t1(900,900,"forwarX++"),t11(900,850,"forwardX--"),t2(800,900,"right"),t3(700,900,"left"),t4(600,900,"forwardY++"),t41(600,850,"forwardY--"),t(0,0,0),T1(100,870,"point:"),T2(100,900,"quit");
	Rectangle r(500,500,20,10),r1(900,900,56,20),r11(900,850,56,20),r2(800,900,35,20),r3(700,900,30,20),r4(600,900,56,20),r41(600,850,56,20),R2(100,900,30,20),R1(110,870,60,20);
	Circle c(x,y,5);
	t1.setColor(COLOR("RED"));t11.setColor(COLOR("BLUE"));
	t4.setColor(COLOR("RED"));t41.setColor(COLOR("BLUE"));
	t2.setColor(COLOR("GREEN"));T2.setColor(COLOR("RED"));
	t3.setColor(COLOR("GREEN"));
	r.setColor(COLOR("RED")); 
	c.setColor(COLOR("BLUE"));
	r.setFill(true);
	c.setFill(true);
	int c1=500,c2=500,R=10;
	int counter=0,sum=0;
	while(counter<10000){
		int v=getClick();
		int x1=v/65536,y1=v%65536;
		if(x1>=872 && x1<=928 && y1>=890 && y1<=910){
			r.move(5,0);
			c1=r.getX();
			c2=r.getY();
		}
		else if(x1>=85 && x1<=115 && y1>=890 && y1<=910){
			break;
			closeCanvas();
		}
		else if(x1>=872 && x1<=928 && y1>=840 && y1<=860){
			r.move(-5,0);
			c1=r.getX();
                        c2=r.getY();
		}
		else if(x1>=782 && x1<=818 && y1>=890 && y1<=910){
			r.rotate(-PI/2);
			c1=r.getX();
                        c2=r.getY();
		}
		else if(x1>=685 && x1<= 715 && y1>=890 && y1<=910){
			r.rotate(PI/2);
			c1=r.getX();
                        c2=r.getY();
		}
		else if(x1>=572 && x1<=628 && y1>=890 && y1<=910){
			r.move(0,-5);
			c1=r.getX();
			c2=r.getY();
		}
		else if(x1>=572 && x1<=628 && y1>=840 && y1<=860){
			r.move(0,5);
			c1=r.getX();
                        c2=r.getY();
		}
		if(pow(x-c1,2) + pow(y-c2,2) <= pow(5+R,2)){
			srand(time(NULL));
		        x=rand()%801+100;
		        y=rand()%801+100;
		        c.reset(x,y,5);
			R=R+5;
			r.reset(c1,c2,2*R,10);
			r.setColor(COLOR("RED"));
                        c.setColor(COLOR("blue"));
                        r.setFill(true);
                        c.setFill(true);
			sum=sum+10;
			t.reset(130,870,sum);
		}
		counter++;
	}
}


       

