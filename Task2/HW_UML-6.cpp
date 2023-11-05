#include <iostream>
using namespace std;

class TV
{
public:
	void WatchTV()
	{
		cout << "Watching TV.\n";
	}
	void OffTV()
	{
		cout << "Turn off the TV.\n";
	}
};

class AudioPlayer
{
public:
	void ListenMusic()
	{
		cout << "Listen to music.\n";
	}
	void OffPlayer()
	{
		cout << "Turn off the Player.\n";
	}
};

class Conditioner
{
public:
	void OnConditioner()
	{
		cout << "Brrr!\n";
	}
	void OffConditioner()
	{
		cout << "Hot!\n";
	}
};

class Home
{
protected:
	TV tv;
	AudioPlayer ap;
	Conditioner cr;
public:
	void GoToHome()
	{
		tv.WatchTV();
		ap.ListenMusic();
		cr.OnConditioner();
	}
	void GoToStreet()
	{
		tv.OffTV();
		ap.OffPlayer();
		cr.OffConditioner();
	}
};

class SmartHome : public Home
{
public:
	void AllTarnOff()
	{
		GoToHome();
		cout << "All turn off.\n";
	}
	void AllTornOn()
	{
		GoToStreet();
		cout << "All turn on.\n";
	}
};

int main() 
{
	SmartHome smart_home;
	smart_home.AllTornOn();
	cout << "---------------------------\n";
	smart_home.AllTarnOff();
	
}

