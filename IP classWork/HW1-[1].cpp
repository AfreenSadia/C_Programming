#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    float total_km_driven, cost_of_petrol,avg_km_pet_L,parking_fees,tolls_fee,driving_cost_per_day,total_cost_of_driving;
    string username;


    cout<<"Username ";
    cin>>username ;
    cout<< "Total kilometers driven per day : ";
    cin>> total_km_driven;
    cout<< "Cost per liter of petrol : ";
    cin>> cost_of_petrol;
    cout<< "Average kilometer per liter : ";
    cin>> avg_km_pet_L ;
    cout<<"Parking fees per day : ";
    cin>> parking_fees;
    cout<<"Tolls per day : ";
    cin>> tolls_fee ;

    driving_cost_per_day=(total_km_driven/avg_km_pet_L)*cost_of_petrol;
    total_cost_of_driving=driving_cost_per_day+parking_fees+tolls_fee;

    cout<<"\n"<<username <<"'s cost per day of driving to work : "<<total_cost_of_driving<<endl;


  return 0;

}
