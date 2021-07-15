#include <bits/stdc++.h>
using namespace std;
int main()
{
int dd,mm,yyyy,yy,e,dow,flag=1;
cout<<"                   welcome              "<<endl;
while(flag==1)
{
cout<<" To see the day of desired date press 1"<<endl;
cout<<" To exit press 2"<<endl;
cin>>flag;
if(flag==2)
{break;}
else if(flag<1||flag>2)
{
break;
}
cout<<"enter the date:-";
cin>>dd;
if(dd>=32||dd<=0)
{
cout<<"date is invalid";
break;
}
cout<<"enter the month:- ";
 cin>>mm;
 cout<<"enter the year:- ";
 cin>>yyyy;
if(yyyy>2099||yyyy<1900)
{
 cout<<"beyond the limit of program!!"<<endl;
 cout<<"date should be between the years 1900-2099."<<endl;
 exit(0);
}
 if(yyyy%4==0&&mm==2&&dd>=30)
 {
cout<<"date is invalid";
 break; 
}
 else if(yyyy%4!=0&&mm==2&&dd>=29)
{
 cout<<"date is invalid";
 break;
}
else if((mm==4||mm==6||mm==9||mm==11)&&dd==31)
{
cout<<"invalid date"<<endl;
break;
}
else if(mm>=13||mm<=0)
{
cout<<"month number is invalid";
 break;
 }
else 
{
cout<<"";
 }
if(yyyy>=2000)
{
yy=100+yyyy%100;
}
else 
{
yy=yyyy%100;
}
 e=yy/4 ; if(yy%4!=1&yyyy>=2000){               //after 2000 normal years
 switch(mm){
 case 1:
 dow=(yy+e+0+dd)%7;   break;
 case 2:
 dow=(yy+e+3+dd)%7;  break;
 case 3:
 dow=(yy+e+3+dd)%7;  break;
 case 4:
 dow=(yy+e+6+dd)%7;   break;
 case 5:
 dow=(yy+e+1+dd)%7;     break;
 case 6:
 dow=(yy+e+4+dd)%7;      break;
 case 7:
 dow=(yy+e+6+dd)%7;    break;
 case 8:
 dow=(yy+e+2+dd)%7;        break;
 case 9:
 dow=(yy+e+5+dd)%7;       break;
 case 10:
 dow=(yy+e+0+dd)%7;      break;
 case 11:
 dow=(yy+e+3+dd)%7;       break;
 case 12:
 dow=(yy+e+5+dd)%7;      break;
 default:cout<<"invalid month";
 }
}
else if(yy%4==0&&yyyy>=2000)
{ switch(mm)
{                                                                                // after 2000 leap year
 case 1:
 dow=(yy+e+6+dd)%7;break;
 case 2:
 dow=(yy+e+2+dd)%7; break;
 case 3:
 dow=(yy+e+3+dd)%7;  break;
 case 4:
 dow=(yy+e+6+dd)%7;   break;
 case 5:
 dow=(yy+e+1+dd)%7;     break;
 case 6:
 dow=(yy+e+4+dd)%7;      break;
 case 7:
 dow=(yy+e+6+dd)%7;    break;
 case 8:
 dow=(yy+e+2+dd)%7;        break;
 case 9:
 dow=(yy+e+5+dd)%7;       break;
 case 10:
 dow=(yy+e+0+dd)%7;      break;
 case 11:
 dow=(yy+e+3+dd)%7;       break;
 case 12:
 dow=(yy+e+5+dd)%7;      break;
 default:cout<<"invalid month";
 } 
  }
 else if(yy%4!=1&&yyyy<2000){                                                      //before 2000 normal years

 switch(mm){
 case 1:
 dow=(yy+e+0+dd)%7;  break;
 case 2:
 dow=(yy+e+3+dd)%7;  
break;
 case 3:
 dow=(yy+e+3+dd)%7;  
break;
 case 4:
 dow=(yy+e+6+dd)%7;   
break;
 case 5:
 dow=(yy+e+1+dd)%7;     
break;
 case 6:
 dow=(yy+e+4+dd)%7;      
break;
 case 7:
 dow=(yy+e+6+dd)%7;    
break;
 case 8:
 dow=(yy+e+2+dd)%7;        
break;
 case 9:
 dow=(yy+e+5+dd)%7;       
break;
 case 10:
 dow=(yy+e+0+dd)%7;      
break;
 case 11:
 dow=(yy+e+3+dd)%7;       
break;
 case 12:
 dow=(yy+e+5+dd)%7;      
break;
 default:    cout<<"invalid month";
 }
 } 
 	else
 		if  (yyyy<2000&&yy%4==0)
 {
 switch(mm){                                                            // after 2000 leap year
 case 1:
 dow=(yy+e+6+dd)%7;
break;
 case 2:
 dow=(yy+e+2+dd)%7; 
break;
 case 3:
 dow=(yy+e+3+dd)%7;  
break;
 case 4:
 dow=(yy+e+6+dd)%7;   
break;
 case 5:
 dow=(yy+e+1+dd)%7;     
break;
 case 6:
 dow=(yy+e+4+dd)%7;      
break;
 case 7:
 dow=(yy+e+6+dd)%7;    
break;
 case 8:
 dow=(yy+e+2+dd)%7;        
break;
 case 9:
 dow=(yy+e+5+dd)%7;       
break;
 case 10:
 dow=(yy+e+0+dd)%7;      
break;
 case 11:
 dow=(yy+e+3+dd)%7;       
break;
 case 12:
 dow=(yy+e+5+dd)%7;      
break;
 	default:		cout<<"invalid month";
 }                                                        			   //before 2000 leap years
 }


 switch(dow){
 case 0:cout<<"on "<<dd<<"/"<<mm<<"/"<<yyyy<<"  day is sunday";      break;
 case 1:cout<<"on "<<dd<<"/"<<mm<<"/"<<yyyy<<"  day is monday";    break;
 case 2:cout<<"on "<<dd<<"/"<<mm<<"/"<<yyyy<<"  day is tuesday";     break;
 case 3:cout<<"on "<<dd<<"/"<<mm<<"/"<<yyyy<<"  day is wednesday";  break;
 case 4:cout<<"on "<<dd<<"/"<<mm<<"/"<<yyyy<<"  day is thursday";     break;
 case 5:cout<<"on "<<dd<<"/"<<mm<<"/"<<yyyy<<"  day is friday";      break;
 case 6:cout<<"on "<<dd<<"/"<<mm<<"/"<<yyyy<<"  day is saturday";   break;
 default:cout<<"invalid";
 }
cout<<endl<<""<<endl;
  }
return(0);
 }
