#include<simplecpp>
int mid(int a,int b){return (a+b)/2;}
struct team{
				




				Circle c[12];




				void fuckoff(team &b){
					bool x=0,y=0;
					int i=0,idw,idb;//x is for cheking it can bite towards right or not..similarly y for left.
					repeat(12){
						int j=0;                  //idw =no. of pice to be moved..idb piece got cut
						repeat(12){int k=0;                  //RIGHT
							if(c[j].getY()+80==b.c[i].getY()&&c[j].getX()+80==b.c[i].getX())
								{ bool isbhara=0;
									int k=0;
									repeat(12){if((c[j].getY()+160==b.c[k].getY()&&c[j].getX()+160==b.c[k].getX())||(c[j].getY()+160==c[k].getY()&&c[j].getX()+160==c[k].getX())) {

										isbhara=1;}k++;
								}
								if((!isbhara&&c[j].getX()<520)&&c[j].getY()<520) {
									x=1;idw=j;idb=i;cout<<isbhara<<endl;
									cout<<idw<<"is cutting"<<idb<<endl;
								}
								if(x){c[idw].move(160,160);b.c[idb].move(1000,1000);return;}
								}
									
							
							else if(c[j].getY()+80==b.c[i].getY()&&c[j].getX()-80==b.c[i].getX())      // LEFT
									{bool isbhara=0;
									int k=0;
									repeat(12){if((c[j].getY()+160==b.c[k].getY()&&c[j].getX()-160==b.c[k].getX())||(c[j].getY()+160==c[k].getY()&&c[j].getX()-160==c[k].getX())) {isbhara=1;}k++;
									}
									if((!isbhara&&c[j].getX()>200)&&c[j].getY()<520) {
										y=1;idw=j;idb=i;
										cout<<idw<<"is cutting"<<idb<<endl;
									}
									if(y){c[idw].move(-160,160);b.c[idb].move(1000,1000);return;}
									}
								j++;
						}i++;
					}
						int j=0;
						x=0;y=0;
						repeat(12){
							i=0;
							bool k=0;

								repeat(12){
									if(((c[j].getY()+80==b.c[i].getY()&&c[j].getX()+80==b.c[i].getX())||(c[j].getY()+80==c[i].getY()&&c[j].getX()+80==c[i].getX()))){k=1;break;}
												i++;

									}
									if(c[j].getX()>600||c[j].getY()>600){k=1;}
									if(!k){c[j].move(80,80);return;}
									j++;
								}
								 j=0;
						x=0;y=0;
						repeat(12){
							i=0;
							bool k=0;

								repeat(12){
									if(((c[j].getY()+80==b.c[i].getY()&&c[j].getX()-80==b.c[i].getX())||(c[j].getY()+80==c[i].getY()&&c[j].getX()-80==c[i].getX()))){k=1;break;}
												i++;

									}
									if(c[j].getX()<100||c[j].getY()>600){k=1;}
									if(!k){c[j].move(-80,80);return;}
									j++;
								}

								Text t(850,200,"YOU WON");wait(100);

	}


				void movie(  team &p,bool &m){ //k is 1 means team w's chance and 0 means b's chance
					int s=getClick(),x,y,i=0,id,x1,y1,idw;Text t;  // This block of code is to identify which circle to move
					bool q=0,w=0;// id =object u wanna move ,.....w is used in defeatinother
					
					while(s/65536>(i*80-40)){i++;}
					
					x1=i*80-80;i=0;		
					while(s%65536>(i*80-40)){i++;}
					y1=i*80-80;i=0;                      //checkin of cordi of moving piece
					repeat(12){
						if(p.c[i].getX()==x1&&p.c[i].getY()==y1)
							{Text t(850,200,"apni team ka gola select kar CHUTIYE");
							wait(2);
							t.reset(0,0," ");
							return;}
						i++;   }
						i =0;//  identifying piece no.
					repeat(12){
						if(c[i].getX()==x1&&c[i].getY()==y1)
							{q=1;id=i;}
							i++;      //  identifying piece no.
					}                                // is there any piece   .....q is for checking the correct orb of team was selected
					




					
					if(!q) {t.reset(900,400,"error ");wait(2);t.reset(0,0," ");return;
				
					
					}
					else {t.reset(900,400,"now select the next position");	c[id].setColor(COLOR("red"));
					c[id].setFill(true);
						s=getClick();i=0;

						if(s/65536<40||s/65536>680||s%65536<40||s%65536>680){
							Text t(900,200,"BHOSDI KE board ke andar click kar");
							wait(2);
							t.reset(0,0," ");
							c[id].setColor(COLOR("black"));
							return;	
						}            //searching next place to move
						while(s/65536>i*80-40){i++;}
						x=i*80-80;i=0;
						while(s%65536>i*80-40){i++;}
						y=i*80-80;i=0;
						t.reset(0,0," ");
						



						//PLACING PROCESS START

						repeat(12){
						if(((p.c[i].getX()==x&&p.c[i].getY()==y)||(c[i].getX()==x&&c[i].getY()==y))||(y>=y1))    //checking overlaping
							{Text t(900,500,"ijjat se khel SAALE");wait(2);t.reset(0,0," ");c[id].setColor(COLOR("black"));
						return;}
						i++;   // here break is to reduce time
					                 }i=0;

						
									if(abs((x1-x)*(x1-x)+(y1-y)*(y1-y)-113*113)<50||abs((x1-x)*(x1-x)+(y1-y)*(y1-y)-226*226)<1000){ 

											if(abs((x1-x)*(x1-x)+(y1-y)*(y1-y)-113*113)<50){          //allows only single move
											c[id].moveTo(x,y); m=0;
											c[id].setColor(COLOR("black"));
											  } 
											else  {

												repeat(12){
													if(p.c[i].getX()==mid(x,x1)&&p.c[i].getY()==mid(y1,y))
													{w=1;idw=i;}i++;      //  identifying piece no.
															}  
													if(w){
																		p.c[idw].move(1000,1000);
														c[id].moveTo(x,y); m=0;
														c[id].setColor(COLOR("black"));
														
													}
													else {Text t(900,300,"error no opponent to cut");wait(2);t.reset(0,0," ");
														c[id].setColor(COLOR("black"));
														return;}

											}  //condition of moving diagonally
										}

									else {Text t(900,300,"error incorrect placement");wait(2);t.reset(0,0," ");
										c[id].setColor(COLOR("black"));
										return;}
						

					}

					}
				
};

main_program{
	initCanvas("checkers",1000,1000);
	bool q=0,m=1; // m is for surity of player's chance even if he does a wrong move, q is for making the board only.s
	Rectangle r(80,80,80,80);
	r.setColor(COLOR("blue"));
	repeat(8){ 
			repeat(8){
				if(q){r.setFill();};q=!q;
				r.imprint();r.setFill(0);
				r.move(80,0);
			}r.move(-640,80);q=!q;
	}
	team w;
	int j=0;
								repeat(3){int i=0;
									repeat(4){
										w.c[i+4*j].reset(160-(j%2)*80+i*80*2,80+j*80,30);
									  i++;}

								j++;}
				
team b;
	 j=0;
								repeat(3){int i=0;
									repeat(4){
										b.c[i+4*j].reset(80+(j%2)*80+i*80*2,6*80+j*80,30);
										b.c[i+4*j].setFill();
									  i++;}

								j++;}

int scorew=0,scoreb=0;
while(1){
w.fuckoff(b);
while(m){
b.movie(w,m);wait(.75);
	}m=1;
	//q=!q;
}

}
