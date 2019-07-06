#include <fstream>
#include<stdio.h>
#include <string>
#include <iostream>
using namespace std;
   void sports(string c[100])
   {   int i=0,score=i,b=i;
	   int ans;
	   int correct[4]={3,1,1,4};
	  for(i=0;i<4;i++)
	 {  cout<<c[b]<<'\n';
	    cout<<c[b+1]<<'\n';
	    cout<<c[b+2]<<'\n';
	    cout<<c[b+3]<<'\n';
	    cout<<c[b+4]<<'\n';
	    cin>>ans;
	    b=b+5;
	  if(ans==correct[i])
	    {  score=score+10;
	       cout<<"Correct answer the score is:  "<<score<<endl;
		}
	  else cout<<"Wrong answer"<<endl;
	}
     cout<<"The final score is  "<<score<<endl;
   }

 void geo(string c[100])
   {   int i=0,score=i,b=i;
	   int ans;
	   int correct[5]={2,1,4,1,2};
	  for(i=0;i<5;i++)
	 {  cout<<c[b]<<'\n';
	    cout<<c[b+1]<<'\n';
	    cout<<c[b+2]<<'\n';
	    cout<<c[b+3]<<'\n';
	    cout<<c[b+4]<<'\n';
	    cin>>ans;
	    b=b+5;
	  if(ans==correct[i])
	    {  score=score+10;
	       cout<<"Correct answer the score is:  "<<score<<endl;
		}
	  else cout<<"Wrong answer"<<endl;
	}
     cout<<"The final score is  "<<score<<endl;
   }


void ent(string c[100])
   {   int i=0,score=i,b=i;
	   int ans;
	   int correct[5]={3,2,3,1,4};
	  for(i=0;i<5;i++)
	 {  cout<<c[b]<<'\n';
	    cout<<c[b+1]<<'\n';
	    cout<<c[b+2]<<'\n';
	    cout<<c[b+3]<<'\n';
	    cout<<c[b+4]<<'\n';
	    cin>>ans;
	    b=b+5;
	  if(ans==correct[i])
	    {  score=score+10;
	       cout<<"Correct answer the score is:  "<<score<<endl;
		}
	  else cout<<"Wrong answer"<<endl;
	}
     cout<<"The final score is  "<<score<<endl;
   }
void history(string c[100])
   {   int i=0,score=i,b=i;
	   int ans;
	   int correct[4]={1,3,2,1};
	  for(i=0;i<4;i++)
	 {  cout<<c[b]<<'\n';
	    cout<<c[b+1]<<'\n';
	    cout<<c[b+2]<<'\n';
	    cout<<c[b+3]<<'\n';
	    cout<<c[b+4]<<'\n';
	    cin>>ans;
	    b=b+5;
	  if(ans==correct[i])
	    {  score=score+10;
	       cout<<"Correct answer the score is:  "<<score<<endl;
		}
	  else cout<<"Wrong answer"<<endl;
	}
     cout<<"The final score is  "<<score<<endl;
   }
void quiz(string y,string (&c)[100])
{    int i=0;
	string line;
	ifstream file(y);
	if (file.is_open())
	{
		while(getline(file,line))
		{   
			c[i]=line;
			i++;
		}
		file.close();
	}	
}
int main()
{    
  loop1:int x;
	cout<<"please select the quiz genre:\n 1-Sports\t 2-Geography\n3-Entertainment\t 4-History"<<endl;
	cin>>x;
	string c[100];
	
	if(x==1)
	 {string y="sports.txt";
	  quiz(y,c);
	  sports(c);
	 }
	 else if(x==2)
	 {string y="geo.txt";
	  quiz(y,c);
	  geo(c);
	 }
	 else if(x==3)
	 {string y="ent.txt";
	 quiz(y,c);
	 ent(c);
	 }
	 else {
	 string y="history.txt";
	 quiz(y,c);
	 history(c);
           }
    int select;
	cout<<"To play again enter 1 or enter any other key to exit\n ";
	  cin>>select;
     if(select==1)
     { 
       goto loop1;
	 }
	cout<<"Thank you for playing"<<endl;
	
 
}

