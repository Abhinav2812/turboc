#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>
void lifeline(char);
char protim();
int phoaf(void);
void expert(char);
void audi(void);
void fif(char);
int li,paf=0,ea=0,ap=0,t=0,ff=0;
unsigned long fina;
main()
{
char pa,ch[30];
do
{
char cha[8]="Welcome ",chb[15]="Let's play KBC!",cho;
for(int j=0;j<30;j++)
ch[j]=' ';
clrscr();
cout<<"Welcome to KBC!"<<endl;
cout<<"Rules:-"<<endl;
cout<<"There are 15 questions,the amount to be won are as follows:-"<<endl;
cout<<" 1.1000"<<endl<<" 2.2000"<<endl<<" 3.5000"<<endl<<" 4.10000"<<endl<<" 5.20000"<<endl<<" 6.40000"<<endl<<" 7.80000"<<endl<<" 8.160000"<<endl<<" 9.320000"<<endl<<"10.640000"<<endl<<"11.1250000"<<endl<<"12.2500000"<<endl<<"13.5000000"<<endl<<"14.10000000"<<endl<<"15.20000000"<<endl<<"16.30000000"<<endl<<"17.40000000"<<endl<<"18.50000000"<<endl<<"19.60000000"<<endl<<"20.70000000"<<endl;
cout<<"There are 3 levels on questions 5,10 and 15,qualifying which you will take"<<endl<<"atleast that amount home"<<endl;
cout<<"You will be given 45 seconds for the first 5 questions"<<endl<<"There are three lifelines-audience poll,phone a friend and expert advice,enter"<<endl<<"L at any question to activate it,use Q to quit";
cout<<endl<<"Enter your name to begin"<<endl;
gets(ch);
int i,l=strlen(ch),n=0;
paf=ea=ap=t=0;
clrscr();
for(i=0;i<7;i++)
{
 cout<<cha[i];
 delay(100);
}
cout<<" ";
delay(100);
for(i=0;i<l;i++)
{
 cout<<ch[i];
 delay(100);
}
cout<<"!";
delay(2000);
for(i=0;i<(l+9);i++)
{
 cout<<"\b";
}
for(i=0;i<(l+9);i++)
{
 cout<<" ";
 delay(100);
}
for(i=0;i<(l+9);i++)
{
 cout<<"\b";
}
for(i=0;i<15;i++)
{
 cout<<chb[i];
 delay(100);
}
delay(2000);
clrscr();
do
{
 que1:cout<<"Question 1 for Rs. 1000!"<<endl;
 cout<<"What is the size of a cricket pitch?"<<endl;
 cout<<"A.20 yards \t B.22 yards"<<endl<<"C.24 yards \t D.26 yards";
 cho=protim();
 cout<<endl;
 if(t>4500)
 break;
 else if(cho=='b' || cho=='B')
 {
 cout<<"Correct Answer!\t\t\t"<<endl<<"You won 1000!";
 delay(2000);
 cout<<endl<<"Next question";
 delay(2000);
 clrscr();
 n++;
 }
 else if(cho=='l' || cho=='L')
 {
 lifeline('B');
 goto que1;
 }
 else if(cho=='q' || cho=='Q')
  break;
 else if(cho=='a'||cho=='c'||cho=='d'||cho=='A'||cho=='C'||cho=='D')
 {
  cout<<"It is the wrong answer!\t\t";
  delay(2000);
  break;
 }
 else
 {
  if(li==0)
  {
   cout<<"invalid input,try again";
   delay(1000);
  }
  li=0;
  clrscr();
  goto que1;
  }
 clrscr();
 t=0;
 que2:cout<<"Question 2 for Rs. 2000!"<<endl;
 cout<<"where is the next olympics going to be held?"<<endl;
 cout<<"A.London \t B.Berlin \nC.Melbourne \t D.Rio de Janerio"<<endl;
 cho=protim();
 if(t>4500)
 break;
 cout<<endl;
 if(cho=='d' || cho=='D')
 {
 cout<<"Correct Answer!\t\t\t"<<endl<<"You won 2000!";
 delay(2000);
 cout<<endl<<"Next question";
 delay(2000);
 clrscr();
 n++;
 }
 else if(cho=='l' || cho=='L')
 {
 lifeline('D');
 clrscr();
 goto que2;
 }
 else if(cho=='q' || cho=='Q')
 break;
 else if(cho=='a'||cho=='c'||cho=='b'||cho=='A'||cho=='C'||cho=='B')
 {
 cout<<"It is the wrong answer!\t\t";
 delay(2000);
 break;
 }
 else
 {
 if(li==0)
 {
 cout<<"invalid input,try again";
 delay(1000);
 }
 li=0;
 clrscr();
 goto que2;
 }
t=0;
que3:cout<<"Question 3 for Rs. 5000!"<<endl;
 cout<<"Name the android project that assures timely updates to Indian smartphones"<<endl;
 cout<<"A.Android next \t B.Material \nC.Android one \t D.Project Android"<<endl;
 cho=protim();
 if(t>4500)
 break;
 cout<<endl;
 if(cho=='c' || cho=='C')
 {
 cout<<"Correct Answer!\t\t\t"<<endl<<"You won 5000!";
 delay(2000);
 cout<<endl<<"Next question";
 delay(2000);
 clrscr();
 n++;
 }
 else if(cho=='l' || cho=='L')
 {
 lifeline('C');
 clrscr();
 goto que3;
 }
 else if(cho=='q' || cho=='Q')
 break;
 else if(cho=='a'||cho=='d'||cho=='b'||cho=='A'||cho=='D'||cho=='B')
 {
 cout<<"It is the wrong answer!\t\t";
 delay(2000);
 break;
 }
 else
 {
 if(li==0)
 {
 cout<<"invalid input,try again";
 delay(1000);
 }
 li=0;
 clrscr();
 goto que3;
 }
t=0;
que4:cout<<"Question 4 for Rs. 10000!"<<endl;
 cout<<"Name the current Vice President of India"<<endl;
 cout<<"A.Hamid Ansari \t B.Krishna Kant \nC.Shekhawat \t D.Zakir Hussain"<<endl;
 cho=protim();
 if(t>4500)
 break;
 cout<<endl;
 if(cho=='a' || cho=='A')
 {
 cout<<"Correct Answer!\t\t\t"<<endl<<"You won 10000!";
 delay(2000);
 cout<<endl<<"Next question";
 delay(2000);
 clrscr();
 n++;
 }
 else if(cho=='l' || cho=='L')
 {
 lifeline('A');
 clrscr();
 goto que4;
 }
 else if(cho=='q' || cho=='Q')
 break;
 else if(cho=='c'||cho=='d'||cho=='b'||cho=='C'||cho=='D'||cho=='B')
 {
 cout<<"It is the wrong answer!\t\t";
 delay(2000);
 break;
 }
 else
 {
 if(li==0)
 {
 cout<<"invalid input,try again";
 delay(1000);
 }
 li=0;
 clrscr();
 goto que4;
 }
t=0;
que5:cout<<"Question 5 for Rs. 20000!"<<endl;
 cout<<"Which of these has the largest heart?"<<endl;
 cout<<"A.Camel \t B.Elephant \nC.Human \t D.Giraffe"<<endl;
 cho=protim();
 if(t>4500)
 break;
 cout<<endl;
 if(cho=='D' || cho=='d')
 {
 cout<<"Correct Answer!\t\t\t"<<endl<<"You won 20000!";
 delay(2000);
 cout<<"\nCongratulations! Level 1 cleared!";
 delay(2000);
 cout<<endl<<"Next question";
 delay(2000);
 clrscr();
 n++;
 }
 else if(cho=='l' || cho=='L')
 {
 lifeline('D');
 clrscr();
 goto que5;
 }
 else if(cho=='q' || cho=='Q')
 break;
 else if(cho=='c'||cho=='a'||cho=='b'||cho=='C'||cho=='A'||cho=='B')
 {
 cout<<"It is the wrong answer!\t\t";
 delay(2000);
 break;
 }
 else
 {
 if(li==0)
 {
 cout<<"invalid input,try again";
 delay(1000);
 }
 li=0;
 clrscr();
 goto que5;
 }
que6:cout<<"Question 6 for Rs. 40000!"<<endl;
cout<<"Who is the author of the famous novel series \"Harry Potter\"?"<<endl;
cout<<"A.R.L. Stine \t B.J.K. Rowling \nC.O.Henry \t D.Agatha Christie"<<endl;
cout<<"Enter your choice:";
cho=getche();
 cout<<endl;
 if(cho=='b' || cho=='B')
 {
 cout<<"Correct Answer!\t\t\t"<<endl<<"You won 40000!";
 delay(2000);
 cout<<endl<<"Next question";
 delay(2000);
 clrscr();
 n++;
 }
 else if(cho=='l' || cho=='L')
 {
 lifeline('B');
 clrscr();
 goto que6;
 }
 else if(cho=='q' || cho=='Q')
 break;
 else if(cho=='c'||cho=='d'||cho=='a'||cho=='C'||cho=='D'||cho=='A')
 {
 cout<<"It is the wrong answer!\t\t";
 delay(2000);
 break;
 }
 else
 {
 if(li==0)
 {
 cout<<"invalid input,try again";
 delay(1000);
 }
 li=0;
 clrscr();
 goto que6;
 }
que7:cout<<"Question 7 for Rs. 80000!"<<endl;
cout<<"Name the interface of Android 5.0"<<endl;
cout<<"A.Metro \t B.Lollipop \nC.Meridian \t D.Material"<<endl;
cout<<"Enter your choice:";
cho=getche();
 cout<<endl;
 if(cho=='d' || cho=='D')
 {
 cout<<"Correct Answer!\t\t\t"<<endl<<"You won 80000!";
 delay(2000);
 cout<<endl<<"Next question";
 delay(2000);
 clrscr();
 n++;
 }
 else if(cho=='l' || cho=='L')
 {
 lifeline('D');
 clrscr();
 goto que7;
 }
 else if(cho=='q' || cho=='Q')
 break;
 else if(cho=='c'||cho=='b'||cho=='a'||cho=='C'||cho=='B'||cho=='A')
 {
 cout<<"It is the wrong answer!\t\t";
 delay(2000);
 break;
 }
 else
 {
 if(li==0)
 {
 cout<<"invalid input,try again";
 delay(1000);
 }
 li=0;
 clrscr();
 goto que7;
 }
que8:cout<<"Question 8 for Rs. 160000!"<<endl;
cout<<"How many languages feature on the language panel of Reserve Bank\n of India currency notes?"<<endl;
cout<<"A.15 \t B.10 \nC.12 \t D.18"<<endl;
cout<<"Enter your choice:";
cho=getche();
 cout<<endl;
 if(cho=='a' || cho=='A')
 {
 cout<<"Correct Answer!\t\t\t"<<endl<<"You won 160000!";
 delay(2000);
 cout<<endl<<"Next question";
 delay(2000);
 clrscr();
 n++;
 }
 else if(cho=='l' || cho=='L')
 {
 lifeline('A');
 clrscr();
 goto que8;
 }
 else if(cho=='q' || cho=='Q')
 break;
 else if(cho=='c'||cho=='b'||cho=='d'||cho=='C'||cho=='B'||cho=='D')
 {
 cout<<"It is the wrong answer!\t\t";
 delay(2000);
 break;
 }
 else
 {
 if(li==0)
 {
 cout<<"invalid input,try again";
 delay(1000);
 }
 li=0;
 clrscr();
 goto que8;
 }
que9:cout<<"Question 9 for Rs. 320000!"<<endl;
cout<<"In which of these states have father and son not been chief ministers?"<<endl;
cout<<"A.Bihar \t B.Karnataka \nC.Orissa \t D.Haryana"<<endl;
cout<<"Enter your choice:";
cho=getche();
 cout<<endl;
 if(cho=='a' || cho=='A')
 {
 cout<<"Correct Answer!\t\t\t"<<endl<<"You won 320000!";
 delay(2000);
 cout<<endl<<"Next question";
 delay(2000);
 clrscr();
 n++;
 }
 else if(cho=='l' || cho=='L')
 {
 lifeline('A');
 clrscr();
 goto que9;
 }
 else if(cho=='q' || cho=='Q')
 break;
 else if(cho=='c'||cho=='b'||cho=='d'||cho=='C'||cho=='B'||cho=='D')
 {
 cout<<"It is the wrong answer!\t\t";
 delay(2000);
 break;
 }
 else
 {
 if(li==0)
 {
 cout<<"invalid input,try again";
 delay(1000);
 }
 li=0;
 clrscr();
 goto que9;
 }
que10:cout<<"Question 10 for Rs. 640000!"<<endl;
cout<<"What word did Gandhi refuse to correct though prompted by the school teacher\n,during an inspection by a high ranking official?"<<endl;
cout<<"A.Kennel \t B.Kettle \nC.Knitting \t D.Kitten"<<endl;
cout<<"Enter your choice:";
cho=getche();
 cout<<endl;
 if(cho=='b' || cho=='B')
 {
 cout<<"Correct Answer!\t\t\t"<<endl<<"You won 640000!";
 delay(2000);
 cout<<"\nCongratulations! Level 2 cleared!";
 delay(2000);
 cout<<endl<<"Next question";
 delay(2000);
 clrscr();
 n++;
 }
 else if(cho=='l' || cho=='L')
 {
 lifeline('B');
 clrscr();
 goto que10;
 }
 else if(cho=='q' || cho=='Q')
 break;
 else if(cho=='c'||cho=='a'||cho=='d'||cho=='C'||cho=='A'||cho=='D')
 {
 cout<<"It is the wrong answer!\t\t";
 delay(2000);
 break;
 }
 else
 {
 if(li==0)
 {
 cout<<"invalid input,try again";
 delay(1000);
 }
 li=0;
 clrscr();
 goto que10;
 }
que11:cout<<"Question 11 for Rs. 1250000!"<<endl;
cout<<"Which investigation agency was founded in 2009 and given special powers to probe terror crimes in India?"<<endl;
cout<<"A.National Security Guard \t\t B.Special Task Force \nC.National Investigation Agency \t D.Anti Terrorism Squad"<<endl;
cout<<"Enter your choice:";
cho=getche();
 cout<<endl;
 if(cho=='c' || cho=='C')
 {
 cout<<"Correct Answer!\t\t\t"<<endl<<"You won 1250000!";
 delay(2000);
 cout<<endl<<"Next question";
 delay(2000);
 clrscr();
 n++;
 }
 else if(cho=='l' || cho=='L')
 {
 lifeline('C');
 clrscr();
 goto que11;
 }
 else if(cho=='q' || cho=='Q')
 break;
 else if(cho=='a'||cho=='b'||cho=='d'||cho=='A'||cho=='B'||cho=='D')
 {
 cout<<"It is the wrong answer!\t\t";
 delay(2000);
 break;
 }
 else
 {
 if(li==0)
 {
 cout<<"invalid input,try again";
 delay(1000);
 }
 li=0;
 clrscr();
 goto que11;
 }
que12:cout<<"Question 12 for Rs. 2500000!"<<endl;
cout<<"According to Hindu Mythology, Who among these was the daughter of an apsara and rishi?"<<endl;
cout<<"A.Devaki \t B.Rukmani \nC.Shakuntala \t D.Ganga"<<endl;
cout<<"Enter your choice:";
cho=getche();
 cout<<endl;
 if(cho=='c' || cho=='C')
 {
 cout<<"Correct Answer!\t\t\t"<<endl<<"You won 2500000!";
 delay(2000);
 cout<<endl<<"Next question";
 delay(2000);
 clrscr();
 n++;
 }
 else if(cho=='l' || cho=='L')
 {
 lifeline('C');
 clrscr();
 goto que12;
 }
 else if(cho=='q' || cho=='Q')
 break;
 else if(cho=='a'||cho=='b'||cho=='d'||cho=='A'||cho=='B'||cho=='D')
 {
 cout<<"It is the wrong answer!\t\t";
 delay(2000);
 break;
 }
 else
 {
 if(li==0)
 {
 cout<<"invalid input,try again";
 delay(1000);
 }
 li=0;
 clrscr();
 goto que12;
 }
que13:cout<<"Question 13 for Rs. 5000000!"<<endl;
cout<<"What was the only dowry apart from a few yards of khadi,that Lal Bahadur Shastri accepted in his marriage?"<<endl;
cout<<"A.Bhagwad Gita \t B.Khadaun \nC.Ramayan \t D.Charkha"<<endl;
cout<<"Enter your choice:";
cho=getche();
 cout<<endl;
 if(cho=='d' || cho=='D')
 {
 cout<<"Correct Answer!\t\t\t"<<endl<<"You won 5000000!";
 delay(2000);
 cout<<endl<<"Next question";
 delay(2000);
 clrscr();
 n++;
 }
 else if(cho=='l' || cho=='L')
 {
 lifeline('D');
 clrscr();
 goto que13;
 }
 else if(cho=='q' || cho=='Q')
 break;
 else if(cho=='a'||cho=='b'||cho=='c'||cho=='A'||cho=='B'||cho=='C')
 {
 cout<<"It is the wrong answer!\t\t";
 delay(2000);
 break;
 }
 else
 {
 if(li==0)
 {
 cout<<"invalid input,try again";
 delay(1000);
 }
 li=0;
 clrscr();
 goto que13;
 }
que14:cout<<"Question 14 for Rs. 10000000!"<<endl;
cout<<"By which of these names is Nagpur also known as?"<<endl;
cout<<"A.Diamond city \t B.Orange city \nC.Pink City \t D.City of lakes"<<endl;
cout<<"Enter your choice:";
cho=getche();
 cout<<endl;
 if(cho=='b' || cho=='B')
 {
 cout<<"Correct Answer!\t\t\t"<<endl<<"You won 10000000!";
 delay(2000);
 cout<<endl<<"Next question";
 delay(2000);
 clrscr();
 n++;
 }
 else if(cho=='l' || cho=='L')
 {
 lifeline('B');
 clrscr();
 goto que14;
 }
 else if(cho=='q' || cho=='Q')
 break;
 else if(cho=='a'||cho=='d'||cho=='c'||cho=='A'||cho=='D'||cho=='C')
 {
 cout<<"It is the wrong answer!\t\t";
 delay(2000);
 break;
 }
 else
 {
 if(li==0)
 {
 cout<<"invalid input,try again";
 delay(1000);
 }
 li=0;
 clrscr();
 goto que14;
 }
que15:cout<<"Question 15 for Rs. 20000000!"<<endl;
cout<<"What is Mehngai called in the song from the film 'Peepli (Live)'?"<<endl;
cout<<"A.Daakini \t B.Dusht \nC.Dayan \t D.Chudail"<<endl;
cout<<"Enter your choice:";
cho=getche();
 cout<<endl;
 if(cho=='c' || cho=='C')
 {
 cout<<"Correct Answer!\t\t\t"<<endl<<"You won 20000000!";
 delay(2000);
 cout<<"\nCongratulations! Level 3 cleared!";
 delay(2000);
 cout<<endl<<"Next question";
 delay(2000);
 clrscr();
 n++;
 }
 else if(cho=='l' || cho=='L')
 {
 lifeline('C');
 clrscr();
 goto que15;
 }
 else if(cho=='q' || cho=='Q')
 break;
 else if(cho=='b'||cho=='a'||cho=='d'||cho=='B'||cho=='A'||cho=='D')
 {
 cout<<"It is the wrong answer!\t\t";
 delay(2000);
 break;
 }
 else
 {
 if(li==0)
 {
 cout<<"invalid input,try again";
 delay(1000);
 }
 li=0;
 clrscr();
 goto que15;
 }
que16:cout<<"Question 16 for Rs. 30000000!"<<endl;
cout<<"Gyaneshwari,Lichchavi,Gorakhdham and Sarayu are all names of what?"<<endl;
cout<<"A.Saree Types \t B.Rivers \nC.Express Trains \t D.Buddhist Monastries"<<endl;
cout<<"Enter your choice:";
cho=getche();
 cout<<endl;
 if(cho=='c' || cho=='C')
 {
 cout<<"Correct Answer!\t\t\t"<<endl<<"You won 30000000!";
 delay(2000);
 cout<<endl<<"Next question";
 delay(2000);
 clrscr();
 n++;
 }
 else if(cho=='l' || cho=='L')
 {
 lifeline('C');
 clrscr();
 goto que16;
 }
 else if(cho=='q' || cho=='Q')
 break;
 else if(cho=='a'||cho=='b'||cho=='d'||cho=='A'||cho=='B'||cho=='D')
 {
 cout<<"It is the wrong answer!\t\t";
 delay(2000);
 break;
 }
 else
 {
 if(li==0)
 {
 cout<<"invalid input,try again";
 delay(1000);
 }
 li=0;
 clrscr();
 goto que16;
 }
que17:cout<<"Question 17 for Rs. 40000000!"<<endl;
cout<<"The scheme for rural employment NREGA has been named after which leader?"<<endl;
cout<<"A.Mahatma Gandhi \t B.Rajiv Gandhi \nC.Jawahar Lal Nehru \t D.Indira Gandhi"<<endl;
cout<<"Enter your choice:";
cho=getche();
 cout<<endl;
 if(cho=='a' || cho=='A')
 {
 cout<<"Correct Answer!\t\t\t"<<endl<<"You won 40000000!";
 delay(2000);
 cout<<endl<<"Next question";
 delay(2000);
 clrscr();
 n++;
 }
 else if(cho=='l' || cho=='L')
 {
 lifeline('A');
 clrscr();
 goto que17;
 }
 else if(cho=='q' || cho=='Q')
 break;
 else if(cho=='d'||cho=='b'||cho=='c'||cho=='D'||cho=='B'||cho=='C')
 {
 cout<<"It is the wrong answer!\t\t";
 delay(2000);
 break;
 }
 else
 {
 if(li==0)
 {
 cout<<"invalid input,try again";
 delay(1000);
 }
 li=0;
 clrscr();
 goto que17;
 }
que18:cout<<"Question 18 for Rs. 50000000!"<<endl;
cout<<"Which among these never became President of Pakistan?"<<endl;
cout<<"A.Mohammad Ali Zinnah \t B.Iskander Mirza \nC.Asif Ali Zardari       \t D.Zulfikar Ali Bhutto"<<endl;
cout<<"Enter your choice:";
cho=getche();
 cout<<endl;
 if(cho=='a' || cho=='A')
 {
 cout<<"Correct Answer!\t\t\t"<<endl<<"You won 50000000!";
 delay(2000);
 cout<<endl<<"Next question";
 delay(2000);
 clrscr();
 n++;
 }
 else if(cho=='l' || cho=='L')
 {
 lifeline('A');
 clrscr();
 goto que18;
 }
 else if(cho=='q' || cho=='Q')
 break;
 else if(cho=='a'||cho=='b'||cho=='c'||cho=='A'||cho=='B'||cho=='C')
 {
 cout<<"It is the wrong answer!\t\t";
 delay(2000);
 break;
 }
 else
 {
 if(li==0)
 {
 cout<<"invalid input,try again";
 delay(1000);
 }
 li=0;
 clrscr();
 goto que18;
 }
que19:cout<<"Question 19 for Rs. 60000000!"<<endl;
cout<<"Which colonial power ended its involvement in India by selling the rights of the Nicobar islands to the British on October 16,1868?"<<endl;
cout<<"A.Belgium \t B.Italy \nC.Denmark \t D.France"<<endl;
cout<<"Enter your choice:";
cho=getche();
 cout<<endl;
 if(cho=='c' || cho=='C')
 {
 cout<<"Correct Answer!\t\t\t"<<endl<<"You won 60000000!";
 delay(2000);
 cout<<endl<<"Next and the last question!";
 delay(2000);
 clrscr();
 n++;
 }
 else if(cho=='l' || cho=='L')
 {
 lifeline('C');
 clrscr();
 goto que14;
 }
 else if(cho=='q' || cho=='Q')
 break;
 else if(cho=='a'||cho=='b'||cho=='d'||cho=='A'||cho=='B'||cho=='D')
 {
 cout<<"It is the wrong answer!\t\t";
 delay(2000);
 break;
 }
 else
 {
 if(li==0)
 {
 cout<<"invalid input,try again";
 delay(1000);
 }
 li=0;
 clrscr();
 goto que19;
 }
 que20:cout<<"Question 20 for Rs. 70000000!"<<endl;
cout<<"Who is the first woman to successfully climb K2,the world's \nsecond highest mountain peak?"<<endl;
cout<<"A.Junko Tabei \t\t B.Wanda Rutkiewicz \nC.Tamae Watanabe \t D.Chantal Mauduit"<<endl;
cout<<"Enter your choice:";
cho=getche();
 cout<<endl;
 if(cho=='b' || cho=='B')
 {
 cout<<"Correct Answer!\t\t\t"<<endl<<"You won 70000000!";
 delay(2000);
 cout<<endl<<"Congratulations "<<ch<<"! You are the winner of KBC!";
 delay(5000);
 clrscr();
 n++;
 }
 else if(cho=='l' || cho=='L')
 {
 lifeline('B');
 clrscr();
 goto que20;
 }
 else if(cho=='q' || cho=='Q')
 break;
 else if(cho=='a'||cho=='c'||cho=='d'||cho=='A'||cho=='C'||cho=='D')
 {
 cout<<"It is the wrong answer!\t\t";
 delay(2000);
 break;
 }
 else
 {
 if(li==0)
 {
 cout<<"invalid input,try again";
 delay(1000);
 }
 li=0;
 clrscr();
 goto que20;
 }
}while(n<0);
if(cho!='q'&&cho!='Q')
{
 if(n<5)
 n=0;
 else if(n<10)
 n=5;
 else if(n<15)
 n=10;
 else if(n<20)
 n=15;
}
switch(n)
{
case 0 :fina=0;
	break;
case 1 :fina=1000;
	break;
case 2 :fina=2000;
	break;
case 3 :fina=5000;
	break;
case 4 :fina=10000;
	break;
case 5 :fina=20000;
	break;
case 6 :fina=40000;
	break;
case 7 :fina=80000;
	break;
case 8 :fina=160000;
	break;
case 9 :fina=320000;
	break;
case 10:fina=640000;
	break;
case 11:fina=1250000;
	break;
case 12:fina=2500000;
	break;
case 13:fina=5000000;
	break;
case 14:fina=10000000;
	break;
case 15:fina=20000000;
	break;
case 16:fina=30000000;
	break;
case 17:fina=40000000;
	break;
case 18:fina=50000000;
	break;
case 19:fina=60000000;
	break;
case 20:fina=70000000;
}
clrscr();
cout<<"\nfinal amount won "<<fina;
cout<<"\nPlay again?(Y/N) ";
pa=getche();
}while(pa=='y'||pa=='Y');
clrscr();
cout<<"\nThank you for playing KBC!";
delay(1000);
cout<<"\nMade by Kumar Abhinav , XI'C', DPS Dwarka";
delay(1000);
cout<<"\nCredits to:- ";
delay(1000);
cout<<"\nSonica Mam for her valuable guidance";
delay(1000);
cout<<"\nAkash and Akshay Ramdev for their handy suggestions and assisstance in code \nrectification\n";
delay(1000);
cout<<ch<<" for playing it!";
delay(5000);
}//end of main block
void expert(char abc)
{
	cout<<"Expert is thinking...";
	delay(3000);
	cout<<"\nExpert says "<<abc<<"!";
	delay(2000);
}
void audi()
{
randomize();
       int aa=65+rand()%4;
       cout<<"Audience is polling...\n";
       delay(3000);
       cout<<"Audience says "<<(char)aa<<"!";
       delay(2000);
}
int phoaf()
{
int tim=0;
gotoxy(1,10);
cout<<"Enter the no. to call ";
unsigned long long number;
cin>>number;
cout<<(char)201<<"-"<<endl<<(char)200<<"-\\__";
cout<<"\nDialling";
for(int x=1;x<=6;x++)
{delay(500);
 cout<<".";}
delay(3000);
cout<<"\nConnected!";
delay(1000);
gotoxy(1,10);
cout<<"Your 30 seconds start now,press any key when done \n\t\n\t\n\t\t\n\t\t\n";
	 while(kbhit()==0&&tim<=3000)
       {delay(10);
	gotoxy(1,11);
	cout<<"Time left "<<30-(tim/100)<<" Sec. ";
	tim++;
       }
       return(tim);
}
void fif(char can)
{
char c1=can,c2=can;
while(c1==can||c2==can||c1==c2)
{
randomize();
c1=65+rand()%4;
c2=65+rand()%4;
}
cout<<c1<<" and "<<c2<<" are incorrect options";
delay(3000);
return;
}
void lifeline(char exp)
{
gotoxy(1,8);
cout<<"1-phone a friend,2-audience poll,3-expert advice,4-50-50,5-back \n";
	cin>>li;
	if(li==1&&paf==0)
	{paf=phoaf();
	 clrscr();
	return;}
       else if(li==3&&ea==0)
       {expert(exp);
	ea=1;
	clrscr();
	return;
       }
       else if(li==2&&ap==0)
       {
       audi();
       ap=1;
       clrscr();
       return;
       }
       else if(li==4&&ff==0)
       {fif(exp);
	ff=1;
	clrscr();
	return;
       }
       else if(li==5)
       {clrscr();
       return;
       }
       else if(li>5||li<1)
       {gotoxy(1,7);
	cout<<"Invalid choice,try again\t\t\t\t\n ";
	delay(1000);
	lifeline(exp);
	}
	else if(paf!=0||ea!=0||ap!=0||ff!=0)
       {
	cout<<"\nLifeline already used!" ;
	delay(2000);
	lifeline(exp);
       }
}
char protim()
{
 while(kbhit()==0&&t<=4500)
       {delay(10);
	gotoxy(1,6);
	cout<<"Time left "<<45-(t/100)<<" Sec. ";
	cout<<endl<<"Enter your choice:";
	t++;
       }
       if(t>4500)
       {cout<<"\nSorry, You ran out of time";
       delay(1000);
       return('z');
       }
       return(getche());
}