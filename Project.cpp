#include <iostream>
#include <iomanip>
using namespace std;

void displayMenu(){
	
	cout << "  Welcome to Green City Review System\n\n";
	cout << " =================== LIST ========================\n";
	cout << "=                                                =\n";
	cout << "= Smart Technologies Included in this System     =\n";
	cout << "=                                                =\n";
	cout << "= Transportation     :                           =\n";
	cout << "=   001 Electric Vehicle                         =\n";
	cout << "=   002 Electric Bike                            =\n";
	cout << "=                                                =\n";
	cout << "= Appliances         :                           =\n";
	cout << "=   003 Inverter Aircond                         =\n";
	cout << "=   004 Energy-Efficient Fridge                  =\n";
	cout << "=                                                =\n";
	cout << " ===============================================\n\n";
}

int main(){
	
	displayMenu();
			
	char use_opt;
	string prod_code;
	
	//Variables for carbon footprint
	float distance;
	//Energy variable for 2 type transportation (petrol and electric)
	const float petrol_carbonFootprint = 0.258, electric_carbonFootprint = 0.128;
	
	float diff_carbonFootprint = petrol_carbonFootprint - electric_carbonFootprint;
	float saved_carbonFootprint;
	
	//Hours of using house appliances
	float hours, energy_saved;
	
	//Energy variable for 2 type aircond
	float oldModel_aircond = 1.5;
	float energyEfficient_aircond = 1.5 - (1.5 * (33.0 / 100.0));
	
	float diffAircond_energyComsume = oldModel_aircond - energyEfficient_aircond;
	
	//Energy variable for 2 type fridge
	const float oldModel_fridge = 2.4;
	float energyEfficient_fridge = (2.4 - (2.4*(40.0/100.0)));
	
	float diffFridge_energyComsume = oldModel_fridge - energyEfficient_fridge;
	
	cout << "Are you using these products Yes(Y)/No(N)?\n";
	cout << ": ";
	cin >> use_opt;

	while(use_opt == 'Y' || use_opt == 'y')
	{
		cout << "\n";
		cout << "Enter product code (001-004)\n: ";
		cin >> prod_code;
		cout << "\n";
		
		if (prod_code == "001") 
		{
		    cout << "Electric Vehicle\n";
		    cout << "What is the average distance you drive weekly (km)? : ";
		    cin >> distance;
		    cout << "The total emission in carbon footprint using petrol vehicle: " << petrol_carbonFootprint * distance << " kgCO2\n";
		    cout << "The total emission in carbon footprint using electric vehicle: "<< electric_carbonFootprint * distance << " kgCO2\n";
		        
		    //Calculate the carbon footprint
		    saved_carbonFootprint = distance * diff_carbonFootprint;
		    cout << "\nTotal Carbon Footprint Reduction: "<< fixed << setprecision(4) << saved_carbonFootprint << " kgCO2\n";
		}
		else if (prod_code == "002")
		{
		    cout << "Electric Bike\n";
		    cout << "What is the average distance you drive weekly (km)? : ";
		    cin >> distance;
		    cout << "The total emission in carbon footprint using petrol motorcycle: " << petrol_carbonFootprint * distance << " kgCO2\n";
		    cout << "The total emission in carbon footprint using electric bike: " << electric_carbonFootprint * distance << " kgCO2\n";
		    
		    //Calculate the carbon footprint
		    saved_carbonFootprint = distance * diff_carbonFootprint;
		    cout << "\nTotal Carbon Footprint Reduction: "<< fixed << setprecision(4) << saved_carbonFootprint << " kgCO2\n";
		}
		else if (prod_code == "003")
		{
			cout << "Inverter Aircond\n";
			cout << "What is the average hours you turn on aircond weekly? (hours) : ";
		    cin >> hours;
		    cout << "The total electric energy consumption using old-model aircond: " << oldModel_aircond * hours << " kWh\n";
		    cout << "The total electric energy consumption using inverter aircond: " << energyEfficient_aircond * hours << " kWh\n";
		        
		    //calculate energy saved for aircond
		    energy_saved = hours * diffAircond_energyComsume;
		    cout << "The total electric energy saved: "<< fixed << setprecision(2) << energy_saved << "kWh\n";
		}
		else if (prod_code == "004")
		{
			cout << "Energy-Efficient Fridge\n";
			cout << "Our fridges works 24 hours 7 days, let's see what is the difference\n";
			hours = (24*7);
		    cout << "The total electric energy consumption using old-model fridge: " << oldModel_fridge * hours << " kWh\n";
		    cout << "The total electric energy consumption using energy-efficient fridge: " << energyEfficient_fridge * hours << " kWh\n";
		        
		    //calculate energy saved for fridge
		    energy_saved = hours * diffFridge_energyComsume;
		    cout << "The total electric energy saved: "<< fixed << setprecision(2) << energy_saved << "kWh\n";
		}
		else 
		{
		    cout << "Invalid product code. Please enter a correct code (001-004).\n";
		    continue;
		}
		    
		    cout << "\nDo you want to calculate other product in menu? (Y/N): ";
			cin >> use_opt;
	}
	if(use_opt == 'N' || use_opt == 'n')
	{
		exit;
	}
	else
	{
		cout << "\nInvalid option. Please restart and enter the correct option (Y/N).\n";
	}
	
	cout << " \n";
	cout << " =================================================\n";
	cout << "   Thank you for visit Green City Review System   \n";
	cout << " =================================================\n";
	
	exit(0);
		
	return 0;
}

