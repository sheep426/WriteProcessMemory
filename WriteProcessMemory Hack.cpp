#include <iostream>
#include <windows.h>
#include <winable.h>

using namespace std;

void memoryWrite()
{
    HWND hWnd = FindWindow(0, "Window Name");
  	if(hWnd == 0)
	{
    	MessageBox(0, "Error cannot find window.", "Error", MB_OK|MB_ICONERROR);
  	}
	else
	{
    	DWORD proccess_ID;
    	GetWindowThreadProcessId(hWnd, &proccess_ID);
    	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, proccess_ID);
    	if(!hProcess)
		{
      		MessageBox(0, "Could not open the process!", "Error!", MB_OK|MB_ICONERROR);
    	}
		else
		{
		int newdata = 0;
		std::cout << "Pleas enter the new value: ";
		std::cin >> newdata;
     	DWORD newdatasize = sizeof(newdata);
      	if(WriteProcessMemory(hProcess, (LPVOID)0x235EC8, &newdata, newdatasize, NULL)) // newdatasize = 4 byte
		{
			MessageBox(NULL, "WriteProcessMemory worked.", "Success", MB_OK + MB_ICONINFORMATION);
		}
		else
		{
			MessageBox(NULL, "Error cannot WriteProcessMemory!", "Error", MB_OK + MB_ICONERROR);
		}
		CloseHandle(hProcess);
		}
  	}
}

int main(){
	string agree; // terms and conditions yes or no
	cout << "You must agree to our terms and conditions first (Y/N)? ";
	cin >> agree;
	if(agree =="y" || agree=="Y")
	{
		system("CLS"); // clear the screen
		memoryWrite(); // function
	}
	else if(agree =="n" || agree=="N")
	{
		MessageBox(HWND_DESKTOP,"To use this software you must agree to our terms and conditions\nYou can read our terms and conditions online from this site below\n\nhttps://termsofuse.com\n","Error",MB_ICONINFORMATION| MB_OK);
	}
	else
	{
		cout << "Incorrect choice, pleas try again!" << endl;
	}
	return 0;
}
