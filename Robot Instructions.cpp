//input LEFT/RIGHT to determine the robot's position, left means go back for 1 step
//right means go front for 1 step, and SAME AS N means the same instr. as the N-th instr.
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int times;
    char record[100][10];
    cin>>times;
    while(times>0)
    {
        int pos=0,numofins,ind=0;
        cin>>numofins;
        cin.get();
        while(numofins>0)
        {
            char instr[30];
            int no=0;
            cin.getline(instr,30);
            if(strcmp(instr,"LEFT")==0)  {strcpy(record[ind],instr); pos--;ind++;}
            else if(strcmp(instr,"RIGHT")==0)  {strcpy(record[ind],instr);pos++;ind++;}
            else
            {
                sscanf(instr,"%*s %*s %d",&no);
                no-=1;
                if(strcmp(record[no],"LEFT")==0) {strcpy(record[ind],record[no]);pos--; ind++;}
                else if(strcmp(record[no],"RIGHT")==0) {strcpy(record[ind],record[no]);pos++;ind++;}
            }


            numofins--;

        }
        cout<<pos<<endl;
        times--;
    }
    return 0;
}
