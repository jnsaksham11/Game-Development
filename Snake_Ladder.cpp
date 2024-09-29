#include<simplecpp>
#include<cstdlib>
int main(){
	initCanvas("start",500,500);
        Text ttt(250,250,"play");
        Rectangle rr(250,250,30,20);
        ttt.setColor(COLOR("RED"));
        int vv=getClick();
        int xx=vv/65536,yy=vv%65536;
        if(xx>=235 && xx<=265 &&  yy>=240 && yy<=260){
                closeCanvas();}

	initCanvas("snacks & leader",1000,1000);
	Line l11(575,825,375,625),l12(525,875,325,675),l13(375,725,425,675),l14(475,825,525,775),l15(425,775,475,725),l21(525,125,625,25),l22(575,175,675,75),l23(575,75,625,125),l31(625,525,825,325),l32(675,575,875,375),l33(675,475,725,525),l34(775,375,825,425),l35(725,425,775,475),l41(25,250,25,450),l42(75,250,75,450),l43(25,300,75,300),l44(25,400,75,400),l45(25,350,75,350);
	
	for(int i=100;i<=900;i=i+100){
	        Line l(i,0,i,900);
	        l.imprint();
	}
	for(int i=100;i<=900;i=i+100){
		Line l1(0,i,1000,i);
		l1.imprint();
	}

	Turtle tt11,tt22,tt33,tt44,tt55;
	tt11.moveTo(800,700);tt22.moveTo(300,500);tt33.moveTo(800,100);tt44.moveTo(600,300);tt55.moveTo(100,200);
	tt11.rotate(-45);tt22.rotate(-45);tt33.rotate(-45);tt44.rotate(-115);tt55.rotate(-115);
	
	Line ll1(300,500,250,550),ll2(250,550,300,600),ll3(300,600,250,650),lll1(250,650,300,700),lll2(300,700,250,750),ll4(800,700,750,750),ll5(750,750,850,850),ll6(600,300,650,350),ll7(650,350,600,400),ll8(600,400,650,450),ll9(100,200,150,250),ll10(150,250,100,300),ll11(100,300,150,350),ll12(150,350,100,400),ll13(100,400,150,450),ll14(800,100,750,150),ll15(750,150,950,350),ll16(950,350,900,400),ll17(900,400,950,450),ll18(950,450,900,500),ll19(900,500,950,550);
	
	ll1.setColor(COLOR("RED"));ll2.setColor(COLOR("RED"));ll3.setColor(COLOR("RED"));ll4.setColor(COLOR("RED"));ll5.setColor(COLOR("RED"));ll8.setColor(COLOR("RED"));ll6.setColor(COLOR("RED"));ll7.setColor(COLOR("RED"));lll2.setColor(COLOR("RED"));lll1.setColor(COLOR("RED"));ll9.setColor(COLOR("RED"));ll10.setColor(COLOR("RED"));ll11.setColor(COLOR("RED"));ll12.setColor(COLOR("RED"));ll13.setColor(COLOR("RED"));ll14.setColor(COLOR("RED"));ll15.setColor(COLOR("RED"));ll16.setColor(COLOR("RED"));ll17.setColor(COLOR("RED"));ll18.setColor(COLOR("RED"));ll19.setColor(COLOR("RED"));
	
	Rectangle r1(80,850,20,20),r2(50,850,20,20),r3(850,950,70,20),r4(750,950,70,20); r1.setColor(COLOR("BROWN")); r2.setColor(COLOR("BLUE")); r1.setFill(true); r2.setFill(true);
	
	Text tt(950,50,90),t(0,0,0),t2(850,950,"PLAYER(2)"),t1(750,950,"PLAYER(1)"); t2.setColor(COLOR("BLUE")); t1.setColor(COLOR("BROWN"));tt.setColor(COLOR("BLACK"));		
	
	srand(time(NULL));
	int a[10][10][2],p=50,r=850,n1=1;
	Rectangle r10(0,0,0,0);
	for(int i=0;i<9;i++){
		for(int j=0;j<10;j++){
		        a[i][j][1]=p;
			a[i][j][2]=r;
		//	cout << a[i][j][1] << ',' << a[i][j][2] << endl;
			if((j)%2==0){
				r10.reset(p,r,100,100);r10.setColor(COLOR("GREEN"));r10.setFill(true);r10.imprint();
				t.reset(p,r,n1);t.imprint();
		                t.setColor(COLOR("BLACK"));
			}
			else {
				r10.reset(p,r,100,100);r10.setColor(COLOR("YELLOW"));r10.setFill(true);r10.imprint();
				t.reset(p,r,n1);t.imprint();
		                t.setColor(COLOR("BLACK"));
			}
			n1++;
			if(i%2==0)
				p=p+100;
			else
				p=p-100;
		}
		//cout << endl;
		if(i%2==0)
		        p=950;
		else 
			p=50;
		r=r-100;
	}


	Text tttt(950,50,"winner");
	bool start=true;
	for(int i=0;i<1000;i++){
		if(i%2==0)
			start=true;
		else 
			start=false;
		if(start){
			int f=getClick(),f1=f/65536,f2=f%65536,p1=0,p2=800,p3=100,p4=900;
			if(f1>=715 && f1<=785 && f2>=940 && f2<=960)
				t.reset(650,950,rand()%6+1);
	                int v=getClick(),x=v/65536,y=v%65536,x1,y1;
			for(int i=0;i<9;i++){
				for(int j=0;j<10;j++){
					if(x>=p1 && x<=p3 && y>=p2 && y<=p4){
						x1=a[i][j][1]; y1=a[i][j][2];
						for(int k1=0;k1<9;k1++){
                                                int m1;
                                                         for( m1=0;m1<10;m1++){
                                                                 r1.moveTo(a[k1][m1][1],a[k1][m1][2]);
                                                                 wait(0.1);
                                                                 if(a[k1][m1][1]==x1 && a[k1][m1][2]==y1){
                                                                         r1.reset(x1,y1,20,20);
									
									 if(x1==50 && y1==450){
										 wait(0.1);r1.moveTo(50,350);wait(0.1);
										 r1.moveTo(50,250);}
									 else if(x1==550 && y1==150){
										 wait(0.2);r1.moveTo(650,50);}
									 else if(x1==550 && y1==850){
										 wait(0.1);r1.moveTo(450,750);wait(0.1);
                                                                                 r1.moveTo(350,650);}
									 else if(x1==650 && y1==550){
										 wait(0.1);r1.moveTo(750,450);wait(0.1);
                                                                                 r1.moveTo(850,350);}
									 if(x1==350 && y1==450){
										 wait(0.3);r1.moveTo(300,500); wait(0.2);
										 r1.moveTo(250,550); wait(0.2);
										 r1.moveTo(300,600); wait(0.2);
										 r1.moveTo(250,650); wait(0.2);
										 r1.moveTo(300,700); wait(0.2);
										 r1.moveTo(250,750); wait(0.1);}
									 else if(x1==850 && y1==650){
										 wait(0.3);r1.moveTo(800,700); wait(0.2);
										 r1.moveTo(750,750); wait(0.2);
										 r1.moveTo(850,850); wait(0.1);}
									 else if(x1==550 && y1==250){
										 wait(0.3);r1.moveTo(600,300); wait(0.2);
										 r1.moveTo(650,350); wait(0.2);
										 r1.moveTo(600,400); wait(0.2);
									         r1.moveTo(650,450); wait(0.1);}
									 else if(x1==50 && y1==150){
                                                                                 wait(0.3);r1.moveTo(100,200); wait(0.2);
                                                                                 r1.moveTo(150,250); wait(0.2);
                                                                                 r1.moveTo(100,300); wait(0.2);
                                                                                 r1.moveTo(150,350); wait(0.2);
                                                                                 r1.moveTo(100,400); wait(0.2);
                                                                                 r1.moveTo(150,450); wait(0.1);}
									 else if(x1==850 && y1==50){
                                                                                 wait(0.3);r1.moveTo(800,100); wait(0.2);
                                                                                 r1.moveTo(750,150); wait(0.2);
                                                                                 r1.moveTo(950,350); wait(0.2);
                                                                                 r1.moveTo(900,400); wait(0.2);
                                                                                 r1.moveTo(950,450); wait(0.2);
                                                                                 r1.moveTo(900,500); wait(0.2);
									         r1.moveTo(950,550); wait(0.1);}
									 if(r1.getX()==r2.getX() && r1.getY()==r2.getY()){
                                                                                 r1.move(-30,0);}
									 if(x1==950 && y1==50){
                                                                                 wait(0.1);
                                                                                 r1.move(40,0);
                                                                                 tttt.reset(950,50,"winner 1");
                                                                                 t.reset(650,950,"winner 1");wait(2);
                                                                                 return 0;}
                                                                         break;}
                                                         }
							 if(m1==10)
								 m1=9;
                                                         if(a[k1][m1][1]==x1 && a[k1][m1][2]==y1){
                                                                         break;}
                                                }
                                        }
				if(i%2==0){	
					p1=p3;p3=p3+100;}
				else{
					p3=p1;p1=p1-100;}
				}
				if(i%2==0){
				     p1=900;p3=1000;}
				else{
					p1=0;p3=100;}
				p4=p2;
				p2=p2-100;
			}
		}




		else 
		{
			int f=getClick(),f1=f/65536,f2=f%65536,p11=0,p13=100,p12=800,p14=900;
			if(f1>=815 && f1<=885 && f2>=940 && f2<=960)
                                t.reset(650,950,rand()%6+1);
			int v=getClick(),x=v/65536,y=v%65536,x1,y1;
                        for(int i=0;i<9;i++){
                                for(int j=0;j<10;j++){
                                        if(x>=p11 && x<=p13 && y>=p12 && y<=p14){
                                                x1=a[i][j][1]; y1=a[i][j][2];
                                                for(int k1=0;k1<9;k1++){
						int m1;	
                                                         for( m1=0;m1<10;m1++){
                                                                 r2.moveTo(a[k1][m1][1],a[k1][m1][2]);
								 wait(0.1);
                                                                 if(a[k1][m1][1]==x1 && a[k1][m1][2]==y1){
									 r2.reset(x1,y1,20,20);
									 if(x1==50 && y1==450){
                                                                                 wait(0.1);r2.moveTo(50,350);wait(0.1);
                                                                                 r2.moveTo(50,250);}
									 else if(x1==550 && y1==150){
                                                                                 wait(0.1);r2.moveTo(650,50);}
									 else if(x1==550 && y1==850){
                                                                                 wait(0.1);r2.moveTo(450,750);wait(0.1);
                                                                                 r2.moveTo(350,650);}
									 else if(x1==650 && y1==550){
                                                                                 wait(0.1);r2.moveTo(750,450);wait(0.1);
                                                                                 r2.moveTo(850,350);}
									 if(x1==350 && y1==450){
                                                                                 wait(0.3);r2.moveTo(300,500); wait(0.2);
                                                                                 r2.moveTo(250,550); wait(0.2);
                                                                                 r2.moveTo(300,600); wait(0.2);
                                                                                 r2.moveTo(250,650); wait(0.2);
                                                                                 r2.moveTo(300,700); wait(0.2);
                                                                                 r2.moveTo(250,750); wait(0.1);}
                                                                         else if(x1==850 && y1==650){
                                                                                 wait(0.3);r2.moveTo(800,700); wait(0.2);
                                                                                 r2.moveTo(750,750); wait(0.2);
                                                                                 r2.moveTo(850,850); wait(0.1);}
                                                                         else if(x1==550 && y1==250){
                                                                                 wait(0.3);r2.moveTo(600,300); wait(0.2);
                                                                                 r2.moveTo(650,350); wait(0.2);
                                                                                 r2.moveTo(600,400); wait(0.2);
                                                                                 r2.moveTo(650,450); wait(0.1);}
                                                                         else if(x1==50 && y1==150){
                                                                                 wait(0.3);r2.moveTo(100,200); wait(0.2);
                                                                                 r2.moveTo(150,250); wait(0.2);
                                                                                 r2.moveTo(100,300); wait(0.2);
                                                                                 r2.moveTo(150,350); wait(0.2);
                                                                                 r2.moveTo(100,400); wait(0.2);
                                                                                 r2.moveTo(150,450); wait(0.1);}
                                                                         else if(x1==850 && y1==50){
                                                                                 wait(0.3);r2.moveTo(800,100); wait(0.2);
                                                                                 r2.moveTo(750,150); wait(0.2);
                                                                                 r2.moveTo(950,350); wait(0.2);
                                                                                 r2.moveTo(900,400); wait(0.2);
                                                                                 r2.moveTo(950,450); wait(0.2);
                                                                                 r2.moveTo(900,500); wait(0.2);
                                                                                 r2.moveTo(950,550); wait(0.1);}
									 if(r1.getX()==r2.getX() && r1.getY()==r2.getY()){
                                                                                 r1.move(-30,0);}
									 if(x1==950 && y1==50){
										 wait(0.5);
										 r2.move(40,0);
										 tttt.reset(950,50,"winner 2");
										 t.reset(650,950,"winner 2");wait(2);
										 return 0;}
                                                                         break;}
                                                         }
							 if(m1==10)
                                                                 m1=9;
							 if(a[k1][m1][1]==x1 && a[k1][m1][2]==y1){	
                                                                         break;}
                                                }
                                        }
					if(i%2==0){
                                                p11=p13;p13=p13+100;}
                                        else{
                                                p13=p11;p11=p11-100;}
                                }  
                                if(i%2==0){
                                        p11=900;p13=1000;}
                                else{ 
                                        p11=0;p13=100;}
                                p14=p12;
                                p12=p12-100;
                        }
                }
	}

}
	

