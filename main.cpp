#include <iostream>

using namespace std;

int main()
{
   int grades[60];
   int n;
   cin >> n;
   /*cin >> grades;*/
   for (int i=0; i<n; i++){
       cin >> grades[i];
        if(grades[i]>=38){
            int div = (grades[i]/5)+1;
            int next = div*5;
            if(next-grades[i]<3){
                cout << next << endl;

            }else{
            cout << grades[i] << endl;
            }
        }else{
        cout << grades[i] << endl;
        }
   }
   return 0;
}
