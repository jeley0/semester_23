#include "UI.h"
#include <fstream>
#include <sstream>

class Application
{
private:
	UI ui;
	Datetime* date;
	Datetime* prev;
	Datetime* next;
	int dateSize;
public:
	void ReadDate(std::string fileName);
	void Main();
	void SystemDate();

	Application();

	~Application();
};