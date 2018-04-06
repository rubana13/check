#include <iostream>

using namespace std;

int main() {
	int l,b,h;
		int volume,total_surface_area;
    cin>>l>>b>>h;
     if(!cin)
    {
        cout<<"Invalid input";
    }

	else{
    volume=l*b*h;
    total_surface_area=(2*l*b)+(2*b*h)+(2*h*l);
	cout<<"Volume:"<<volume<<endl;
	cout<<"Total surface area:"<<total_surface_area;
}
   
}
