#include<iostream>
#include<sstream>
#include<string.h>
using namespace std;
void create(string a[5][5],string b[5][5]);
void play(string a[5][5],string b[5][5]);
int win1(string a[5][5]);
int win2(string a[5][5]);
void print(string a[5][5]);
void strike1(string a[5][5],string n);
void strike2(string b[5][5],string n);
int dup(string a[5][5],string n);
string a[5][5],b[5][5],n;
int i,j,w1=0,w2=0,x1=0,x2=0,x3=0,x4=0,x5=0,x6=0,x7=0,x8=0,x9=0,x10=0,x11=0,x12=0,y1=0,y2=0,y3=0,y4=0,y5=0,y6=0,y7=0,y8=0,y9=0,y10=0,y11=0,y12=0;
int ch=0;
int valid1,valid2,res1,res2,r1=0,r2=0;
int main()
{   cout<<"-----------------------BINGO-----------------------------\n\n\n";
	create(a,b);
	while(1)
	{
		play(a,b);
	}
	return 0;
}

void print(string a[5][5])
{   if(ch==0)
     cout<<"\n\nPLAYER 1 CARD\n\n";
     else
     cout<<"\n\nPLAYER 2 CARD\n\n";
   	for(i=0;i<5;i++)
   	{
   		for(j=0;j<5;j++)
   		{    
		   if(a[i][j].length()==2){
		   	cout<<a[i][j]<<"  ";
		   } 
		   else
		   cout<<a[i][j]<<"   ";
		   }
		   cout<<"\n\n";
	   }
}





void create(string a[5][5],string b[5][5])
{    
      cout<<"ENTER PLAYER 1 GAME CARD NUMBERS\n\n";	
	for(i=0;i<5;i++)
   	{
   		for(j=0;j<5;j++)
   		{
   			while(1)
   			{   
   				cin>>n;
   				if(dup(a,n))
   				{
if(n=="1"||n=="25"||n=="24"||n=="23"||n=="22"||n=="21"||n=="20"||n=="19"||n=="18"||n=="17"||n=="16"||n=="15"||n=="14"||n=="13"||n=="12"||n=="11"||n=="10"||n=="9"||n=="8"||n=="7"||n=="6"||n=="5"||n=="4"||n=="3"||n=="2")   			
	{
   					a[i][j]=n;
   					break;
				   }
				   else 
				   cout<<"OUT OF RANGE\n";
				   
			
			}
				   else
				   {
				   	cout<<"NUMBER ALEADY EXIST! ENTER OTHER NUMBER\n";
				   }
				
			   }
		   }
		   
	   }
	   
	  cout<<"\n\n\nENTER PLAYER 2 GAME CARD NUMBERS\n"; 
	    
	  	for(i=0;i<5;i++)
   	{
   		for(j=0;j<5;j++)
   		{
   			while(1)
   			{  
   				cin>>n;
				 if(dup(b,n)){
				 
if(n=="1"||n=="25"||n=="24"||n=="23"||n=="22"||n=="21"||n=="20"||n=="19"||n=="18"||n=="17"||n=="16"||n=="15"||n=="14"||n=="13"||n=="12"||n=="11"||n=="10"||n=="9"||n=="8"||n=="7"||n=="6"||n=="5"||n=="4"||n=="3"||n=="2")   
				{  
				    b[i][j]=n;
   					break;
				   }
				   
				   else 
				   cout<<"OUT OF RANGE\n";
			}
			
				   else
				   {
				   	cout<<"NUMBER ALEADY EXIST! ENTER OTHER NUMBER\n";
				   }
				   
			   }
		   }
		   
	   }			
}


void play(string a[5][5],string b[5][5])
{  
   if(ch==0)
   {
   	print(a);
   	cout<<"ENTER NUMBER TO BE STRIKEN BY PLAYER 1\n";
    cin>>n;
	strike1(a,n);
   	if(valid1==1)
   	{
   	ch=1;	
   	strike2(b,n);
    }
    

         if(win1(a)>=5 && win2(b)>=5)
   	   {
		  
   	   cout<<"\n\nTIE";
   	      	         exit(0);

   }
   	   else if(win1(a)>=5){
		  
   	   cout<<"\n\nPLAYER 1 WINS\n";
   	      	         exit(0);

   }
   	   	else if(win2(b)>=5){
			  
   	         cout<<"\n\nPLAYER 2 WINS";
   	            	         exit(0);

			}
	}
   
   if(ch==1)
   {    print(b);
   	    cout<<"ENTER NUMBER TO BE STRIKEN BY PLAYER 2\n";
   	    cin>>n;
   	    strike2(b,n);
   	    if(valid2==1)
   	    {
   	    ch=0;
		strike1(a,n);   
   	    }
   	  
   	   
   	   
   	   if(win1(a)>=5 && win2(b)>=5)
   	   {
		  
   	   cout<<"\n\nTIE";
   	      	         exit(0);

   }
   	   else if(win2(b)>=5){
		  
   	   cout<<"\n\nPLAYER 2 WINS\n";
   	      	         exit(0);

   }
   	   	else if(win1(a)>=5){
			  
   	         cout<<"\n\nPLAYER 1 WINS";
   	            	         exit(0);

			}
			  
   	
  
		   

   }
}

void strike1(string a[5][5],string n)
{   int x=0;
	if(ch==0)
	{  
		while(1)
		{  valid1=0;
		if(n=="1"||n=="25"||n=="24"||n=="23"||n=="22"||n=="21"||n=="20"||n=="19"||n=="18"||n=="17"||n=="16"||n=="15"||n=="14"||n=="13"||n=="12"||n=="11"||n=="10"||n=="9"||n=="8"||n=="7"||n=="6"||n=="5"||n=="4"||n=="3"||n=="2")
		{
		
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(a[i][j]==n)
					{
						a[i][j]="X";
						valid1=1;
						x=1;
				   }
				
				}
				if(valid1==1)
				break;
				
			}
			if(x==0&&valid1==0)
		   cout<<"\n\nNUMBER ALREADY STRIKEN TRY AGAIN PLAYER 1";
			if(1)
			break;
		   }
		   else
		   {
		   	cout<<"\n\nINVALID INPUT TRY AGAIN PLAYER 1";
		   	break;
		   }
		   
		   
		}
	}

}
	
	
	void strike2(string b[5][5],string n)
	{ int y=0;	
	if(ch==1)
	{
		while(1)
		{  valid2=0;
if(n=="1"||n=="25"||n=="24"||n=="23"||n=="22"||n=="21"||n=="20"||n=="19"||n=="18"||n=="17"||n=="16"||n=="15"||n=="14"||n=="13"||n=="12"||n=="11"||n=="10"||n=="9"||n=="8"||n=="7"||n=="6"||n=="5"||n=="4"||n=="3"||n=="2")		    {
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(b[i][j]==n)
					{
						b[i][j]="X";
						valid2=1;
						y=1;
					}
				
				}
				if(valid2==1)
				break;
			}
			if(y==0&&valid2==0)
			cout<<"\n\nNUMBER ALREADY STRIKEN TRY AGAIN PLAYER 2";
			if(1)
			break;
		   }
		   else
		   {
		   	cout<<"\n\nINVALID INPUT TRY AGAIN PLAYER 2";
		   	break;
		   }
		}
		
	}
}

int win1(string a[5][5])
{
    	if(a[0][0]=="X"&&a[1][1]=="X"&&a[2][2]=="X"&&a[3][3]=="X"&&a[4][4]=="X"&&x1==0)
    	{
    	x1=1;	
		r1++;
	}
    	if(a[0][4]=="X"&&a[1][3]=="X"&&a[2][2]=="X"&&a[3][1]=="X"&&a[4][0]=="X"&&x2==0)
    {       x2=1;
			r1++;
		}
    	 if(a[0][0]=="X"&&a[1][0]=="X"&&a[2][0]=="X"&&a[3][0]=="X"&&a[4][0]=="X"&&x3==0)
    	{
    		x3=1;
		r1++;
	}
    	if(a[0][1]=="X"&&a[1][1]=="X"&&a[2][1]=="X"&&a[3][1]=="X"&&a[4][1]=="X"&&x4==0)
    {       x4=1;
			r1++;
		}
    	if(a[0][2]=="X"&&a[1][2]=="X"&&a[2][2]=="X"&&a[3][2]=="X"&&a[4][2]=="X"&&x5==0)
    {       x5=1;
			r1++;
		}
    	if(a[0][3]=="X"&&a[1][3]=="X"&&a[2][3]=="X"&&a[3][3]=="X"&&a[4][3]=="X"&&x6==0)
    	{  x6=1;
		r1++;
	}
    	if(a[0][4]=="X"&&a[1][4]=="X"&&a[2][4]=="X"&&a[3][4]=="X"&&a[4][4]=="X"&&x7==0)
    {       x7=1;
			r1++;
		}
    	if(a[0][0]=="X"&&a[0][1]=="X"&&a[0][2]=="X"&&a[0][3]=="X"&&a[0][4]=="X"&&x8==0)
    {       x8=1;
			r1++;
		}
    	if(a[1][0]=="X"&&a[1][1]=="X"&&a[1][2]=="X"&&a[1][3]=="X"&&a[1][4]=="X"&&x9==0)
    	{
    		x9=1;
    		
		r1++;

	}
    	if(a[2][0]=="X"&&a[2][1]=="X"&&a[2][2]=="X"&&a[2][3]=="X"&&a[2][4]=="X"&&x10==0)
    {       x10=1;
			r1++;

		}
    	if(a[3][0]=="X"&&a[3][1]=="X"&&a[3][2]=="X"&&a[3][3]=="X"&&a[3][4]=="X"&&x11==0)
    {       x11=1;
    
    
			r1++;

		}
    	if(a[4][0]=="X"&&a[4][1]=="X"&&a[4][2]=="X"&&a[4][3]=="X"&&a[4][4]=="X"&&x12==0)
    	{x12=1;
		r1++;
	}
    	return r1;
    	
}


int win2(string a[5][5])
{
    	if(a[0][0]=="X"&&a[1][1]=="X"&&a[2][2]=="X"&&a[3][3]=="X"&&a[4][4]=="X"&&y1==0)
    	{
    	y1=1;	
		r2++;
	}
     if(a[0][4]=="X"&&a[1][3]=="X"&&a[2][2]=="X"&&a[3][1]=="X"&&a[4][0]=="X"&&y2==0)
    {       y2=1;
			r2++;
		}
    	if(a[0][0]=="X"&&a[1][0]=="X"&&a[2][0]=="X"&&a[3][0]=="X"&&a[4][0]=="X"&&y3==0)
    	{
    		y3=1;
		r2++;
	}
    	if(a[0][1]=="X"&&a[1][1]=="X"&&a[2][1]=="X"&&a[3][1]=="X"&&a[4][1]=="X"&&y4==0)
    {       y4=1;
			r2++;
		}
    	 if(a[0][2]=="X"&&a[1][2]=="X"&&a[2][2]=="X"&&a[3][2]=="X"&&a[4][2]=="X"&&y5==0)
    {       y5=1;
			r2++;
		}
    	if(a[0][3]=="X"&&a[1][3]=="X"&&a[2][3]=="X"&&a[3][3]=="X"&&a[4][3]=="X"&&y6==0)
    	{  y6=1;
		r2++;
	}
    	if(a[0][4]=="X"&&a[1][4]=="X"&&a[2][4]=="X"&&a[3][4]=="X"&&a[4][4]=="X"&&y7==0)
    {       y7=1;
			r2++;
		}
    	if(a[0][0]=="X"&&a[0][1]=="X"&&a[0][2]=="X"&&a[0][3]=="X"&&a[0][4]=="X"&&y8==0)
    {       y8=1;
			r2++;
		}
    	if(a[1][0]=="X"&&a[1][1]=="X"&&a[1][2]=="X"&&a[1][3]=="X"&&a[1][4]=="X"&&y9==0)
    	{
    		y9=1;
		r2++;
	}
    	if(a[2][0]=="X"&&a[2][1]=="X"&&a[2][2]=="X"&&a[2][3]=="X"&&a[2][4]=="X"&&y10==0)
    {       y10=1;
			r2++;
		}
    	if(a[3][0]=="X"&&a[3][1]=="X"&&a[3][2]=="X"&&a[3][3]=="X"&&a[3][4]=="X"&&y11==0)
    {       y11=1;
			r2++;
		}
    	if(a[4][0]=="X"&&a[4][1]=="X"&&a[4][2]=="X"&&a[4][3]=="X"&&a[4][4]=="X"&&y12==0)
    	{y12=1;
		r2++;
	}
    
    return r2;
    	
}


int dup(string a[5][5],string n)
{
	int k,m,f=0;
	for(k=0;k<5;k++)
	{
		for(m=0;m<5;m++)
		{
			if(a[k][m]==n)
			{
				f=1;
			return 0;
		}
		
		}
	}
	if(f==0)
	return 1;
	
}
