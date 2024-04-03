// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;    

class PowerUnit 
{
public:
	void ServeFood() //1
	{
		cout << "serve food" << endl;	
	}
	void SupplyPowerToTheVideoCard()  //5
	{
		cout << "supply power to the video card" << endl;	
	}
	void SupplyPowerToRAM() //9 
	{
		cout << "supply power to RAM" << endl;	
	}
	void ApplyPowerToTheDiskReader() //13	
	{
		cout << "apply power to the disk reader" << endl;
	}
	void SupplyPowerToTheHardDrive() //17
	{
		cout << "supply power to the hard drive" << endl;
	}
	void StopPoweringTheVideoCard() //~6
	{
		cout << "stop powering the video card" << endl;	
	}
	void StopPoweringTheRAM() //~7
	{
		cout << "stop powering the RAM" << endl;
	}
	void StopPoweringTheDiskReader() //!8
	{
		cout << "stop powering the disk reader" << endl;
	}
	void StopPoweringTheHardDrive() //~9
	{
		cout << "stop powering the hard drive" << endl;	
	}
	void Shutdown() //~11
	{
		cout << "Shutdown" << endl;	
	}
};

class Sensors
{
public:
	void CheckVltage() //2
	{
		cout << "check voltage" << endl;	
	}
	void CheckTheTemperatureInThePowerSupply() //3
	{
		cout << "check the temperature in the power supply" << endl;
	}
	void CheckTheTemperatureInTheVideoCard() //4	
	{
		cout << "check the temperature in the video card" << endl;
	}
	void CheckTheTemperatureInRAM()	//8
	{
		cout << "check the temperature in RAM" << endl;
	}
	void CheckTheTemperatureOfAllSystems() //21
	{
		cout << "check the temperature of all systems" << endl;	
	}
	void ÑheckÌoltage() //~10
	{
		cout << "check voltage" << endl;
	}
};

class VidoCard 
{
public:	
	void Launch() //6
	{
		cout << "launch" << endl;	
	}
	void CheckingConnectionWithTheMonitor() //7
	{
		cout << "checking connection with the monitor" << endl;
	}
	void DisplayingDataAboutRAM() //12 
	{
		cout << "displaying data about RAM" << endl;	
	}
	void DisplayInformationAboutTheDiskReader()	//16
	{
		cout << "displaying data about RAM" << endl;
	}
	void DisplayingDataAboutTheHardDrive()	//20
	{
		cout << "displaying data about the hard drive" << endl;
	}
	void DisplayFarewellMessageOnTheMonitor()	// ~4	
	{
		cout << "displaying data about the hard drive" << endl;
	}
};

class RAM
{
public:	
	void LaunchingDevices() //10
	{
		cout << "launching devices" << endl;			
	}
	void MemoryAnalysis()	//11 and ~3	
	{
		cout << "memory analysis" << endl;		
	}
	void MemoryClearing()	//~2	
	{
		cout << "memory clearing" << endl;	
	}
};

class OpticalDiscReader
{
public:	
	void Launch() //14
	{
		cout << "Launch" << endl;	
	}
	void CheckingForDiskAvailability () //15
	{
		cout << "checking for disk availability." << endl;
	}
	void ReturnToOriginalPosition() //~5	
	{
		cout << "checking for disk availability." << endl;
	}
};

class Winchester
{
public:	
	void Launch() //18 
	{
		cout << "Launch" << endl;
	}
	void BootSectorCheck() //19
	{
		cout << "boot sector check" << endl;		
	}
	void StoppingTheDevice () //~1
	{
		cout << "stopping the device." << endl;
	}
};	

class BeginWork 
{
	PowerUnit powerUnit;	
	Sensors sensors;	
	VidoCard vidoCard;			
	RAM ram;			
	OpticalDiscReader opticalDiscReader;	
	Winchester winchester;		
public:
	BeginWork(PowerUnit pu, Sensors sn, VidoCard vc, RAM rm, OpticalDiscReader odr, Winchester win) 
	{
		powerUnit = pu;
		sensors = sn;
		vidoCard = vc;
		ram = rm;	
		opticalDiscReader = odr;	
		winchester = win;	
	}
	void Start() 
	{
		powerUnit.ServeFood();
		sensors.CheckVltage();	
		sensors.CheckTheTemperatureInThePowerSupply();
		sensors.CheckTheTemperatureInTheVideoCard();
		powerUnit.SupplyPowerToTheVideoCard();	
		vidoCard.Launch();
		vidoCard.CheckingConnectionWithTheMonitor();
		sensors.CheckTheTemperatureInRAM();	
		powerUnit.SupplyPowerToRAM();		
		ram.LaunchingDevices();	
		ram.MemoryAnalysis();	
		vidoCard.DisplayingDataAboutRAM();
		powerUnit.ApplyPowerToTheDiskReader();
		opticalDiscReader.Launch();	
		opticalDiscReader.CheckingForDiskAvailability();	
		vidoCard.DisplayInformationAboutTheDiskReader();	
		powerUnit.SupplyPowerToTheHardDrive();
		winchester.Launch();
		winchester.BootSectorCheck();	
		vidoCard.DisplayingDataAboutTheHardDrive();	
		sensors.CheckTheTemperatureOfAllSystems();	
	}
	void Stop() 
	{
		winchester.StoppingTheDevice();	
		ram.MemoryClearing();	
		ram.MemoryAnalysis();
		vidoCard.DisplayFarewellMessageOnTheMonitor();	
		opticalDiscReader.ReturnToOriginalPosition();	
		powerUnit.StopPoweringTheVideoCard();
		powerUnit.StopPoweringTheRAM();
		powerUnit.StopPoweringTheDiskReader();
		powerUnit.StopPoweringTheHardDrive();	
		sensors.ÑheckÌoltage();	
		powerUnit.Shutdown();	
	}
};

class Facede 
{
public:
	void StartPc(BeginWork pcWork)	
	{
		pcWork.Start();	
	}
	void StopPc(BeginWork pcStop)	
	{
		pcStop.Stop();	
	}
};
 

int main()
{
	PowerUnit powerUnit;	
	Sensors sensors;	
	VidoCard vidoCard;	
	RAM ram;		
	OpticalDiscReader opticalDiscReader;	
	Winchester winchester;	

	BeginWork StartWorkPc(powerUnit, sensors, vidoCard, ram, opticalDiscReader, winchester);	

	Facede facede;	
	facede.StartPc(StartWorkPc);
	facede.StopPc(StartWorkPc);	

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
