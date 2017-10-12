// LOL Ping Checker Consoled.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <winsock2.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <iphlpapi.h>
#include <icmpapi.h>
#include <string>
#include <vector>

#pragma comment(lib, "iphlpapi.lib")
#pragma comment(lib, "ws2_32.lib")

using namespace std;

string ping_func(string destination, int duration);
int lol_print();
bool is_not_a_number(string choice);

int main() {
	system("cls");
	lol_print();
	Sleep(1000);
START://start
	cout << "Which server would you like to check from the list below:" << endl;
	cout << "1. NA - North America" << endl;
	cout << "2. EUW - Europe West" << endl;
	cout << "3. EUNE - Europe North East" << endl;
	cout << "4. OCE - Oceania" << endl;
	cout << "5. LAN - Latin America North" << endl;
	cout << "" << endl;
	string choice = "";
	string avgms = "";
	cout << "Enter your choice number here:";
	getline(cin, choice);
	Sleep(1000);
	if (choice == "1") {
		system("cls");
		goto NA;
	}
	if (choice == "2") {
		system("cls");
		goto EUW;
	}
	if (choice == "3") {
		system("cls");
		goto EUNE;
	}
	if (choice == "4") {
		system("cls");
		goto OCE;
	}
	if (choice == "5") {
		system("cls");
		goto LAN;
	}
	cout << "" << endl;
	cout << "Your choice is not valid. Please try again!" << endl;
	Sleep(1000);
	system("cls");
	lol_print();
	goto START;

NA:do {//North-America
	lol_print();
	cout <<"You have chosen North America as your Server." << endl;
	Sleep(1000);
	cout << "" << endl;
	choice = "10";
	cout << "Enter how many times you want to run the test (Default = 10):";
	getline(cin, choice);
	if (choice == "") choice = "10";
	if (is_not_a_number(choice)) {
		cout << "" << endl;
		cout << "Your input is not a number. Please try again!" << endl;
		Sleep(2000);
		system("cls");
		goto NA;
	}
	if (choice == "0") {
		cout << "" << endl;
		cout << "Your input is not a valid number. Please try again!" << endl;
		Sleep(2000);
		system("cls");
		goto NA;
	}

	cout << "" << endl;
	if (stoi(choice) > 1) cout << "This will run " + choice + " tests:" << endl;
	else cout << "This will run " + choice + " test:" << endl;
	Sleep(1000);
	cout << "Checking NA Servers... " << endl;
	avgms = ping_func("104.160.131.3", stoi(choice));
	cout << "" << endl;
	cout << "Your average ping for this server is " + avgms << endl;
	cout << "" << endl;
	goto ENDPAUSE;
} while (true);

EUW:do {//Europe-West
lol_print();
cout << "You have chosen Europe West as your Server." << endl;
Sleep(1000);
cout << "" << endl;
choice = "10";
cout << "Enter how many times you want to run the test (Default = 10):";
getline(cin, choice);
if (choice == "") choice = "10";
if (is_not_a_number(choice)) {
	cout << "" << endl;
	cout << "Your input is not a number. Please try again!" << endl;
	Sleep(2000);
	system("cls");
	goto EUW;
}
if (choice == "0") {
	cout << "" << endl;
	cout << "Your input is not a valid number. Please try again!" << endl;
	Sleep(2000);
	system("cls");
	goto EUW;
}
cout << "" << endl;
if (stoi(choice) > 1) cout << "This will run " + choice + " tests:" << endl;
else cout << "This will run " + choice + " test:" << endl;
Sleep(1000);
cout << "Checking EUW Servers..." << endl;
avgms = ping_func("104.160.141.3", stoi(choice));
cout << "" << endl;
cout << "Your average ping for this server is " + avgms << endl;
cout << "" << endl;
goto ENDPAUSE;
} while (true);

EUNE:do {//Europe-North East
lol_print();
cout << "You have chosen Europe North East as your Server." << endl;
Sleep(1000);
cout << "" << endl;
choice = "10";
cout << "Enter how many times you want to run the test (Default = 10):";
getline(cin, choice);
if (choice == "") choice = "10";
if (is_not_a_number(choice)) {
	cout << "" << endl;
	cout << "Your input is not a number. Please try again!" << endl;
	Sleep(2000);
	system("cls");
	goto EUNE;
}
if (choice == "0") {
	cout << "" << endl;
	cout << "Your input is not a valid number. Please try again!" << endl;
	Sleep(2000);
	system("cls");
	goto EUNE;
}
cout << "" << endl;
if (stoi(choice) > 1) cout << "This will run " + choice + " tests:" << endl;
else cout << "This will run " + choice + " test:" << endl;
Sleep(1000);
cout << "Checking EUNE Servers... " << endl;
avgms = ping_func("104.160.142.3", stoi(choice));
cout << "" << endl;
cout << "Your average ping for this server is " + avgms << endl;
cout << "" << endl;

goto ENDPAUSE;
} while (true);
OCE:do {//Oceania
lol_print();
cout << "You have chosen Oceania as your Server." << endl;
Sleep(1000);
cout << "" << endl;
choice = "10";
cout << "Enter how many times you want to run the test (Default = 10):";
getline(cin, choice);
if (choice == "") choice = "10";
if (is_not_a_number(choice)) {
	cout << "" << endl;
	cout << "Your input is not a number. Please try again!" << endl;
	Sleep(2000);
	system("cls");
	goto OCE;
}
if (choice == "0") {
	cout << "" << endl;
	cout << "Your input is not a  valid number. Please try again!" << endl;
	Sleep(2000);
	system("cls");
	goto OCE;
}
cout << "" << endl;
if (stoi(choice) > 1) cout << "This will run " + choice + " tests:" << endl;
else cout << "This will run " + choice + " test:" << endl;
Sleep(1000);
cout << "Checking OCE Servers... " << endl;
avgms = ping_func("104.160.156.3", stoi(choice));
cout << "" << endl;
cout << ("Your average ping for this server is " + avgms) << endl;
cout << "" << endl;

goto ENDPAUSE;
} while (true);
LAN:do {//Latin America North
lol_print();
cout << "You have chosen Latin America North as your Server." << endl;
Sleep(1000);
cout << "" << endl;
choice = "10";
cout << "Enter how many times you want to run the test (Default = 10):";
getline(cin, choice);
if (choice == "") choice = "10";
if (is_not_a_number(choice)) {
	cout << "" << endl;
	cout << "Your input is not a number. Please try again!" << endl;
	Sleep(2000);
	system("cls");
	goto LAN;
}
if (choice == "0") {
	cout << "" << endl;
	cout << "Your input is not a  valid number. Please try again!" << endl;
	Sleep(2000);
	system("cls");
	goto LAN;
}
cout << "" << endl;
if (stoi(choice) > 1) cout << "This will run " + choice + " tests:" << endl;
else cout << "This will run " + choice + " test:" << endl;
Sleep(1000);
cout << "Checking LAN Servers... " << endl;
avgms = ping_func("104.160.136.3", stoi(choice));
cout << "" << endl;
cout << "Your average ping for this server is " + avgms << endl;
cout << "" << endl;

goto ENDPAUSE;
} while (true);
ENDPAUSE:
Sleep(1000);
END:
cout << "Would you like to check your ping again for your server or others?" << endl;
cout << "1. Yes" << endl;
cout << "2. No" << endl;
cout << "Enter your choice number here:";
getline(cin, choice);
cout << "" << endl;
Sleep(1000);
system("cls");
lol_print();
if (choice == "1") goto START;
if (choice == "2") goto EXIT;
cout << "Your choice is not valid please try again!" << endl;
Sleep(1000);
system("cls");
lol_print();
goto END;

EXIT:
return 0;
}


string ping_func(string destination, int duration)
{
	string avgms; //ping result in ms
	unsigned long sum = 0;
	int counter = 0;
	HANDLE MyHandle;
	string theaddress;
	char Randomdata[20] = "Stuff to send away!";
	DWORD mainint, lenofbuffer;
	ICMP_ECHO_REPLY reply; //ICMP_ECHO_REPLY data structure
	IPAddr address;
	lenofbuffer = strlen(Randomdata) + sizeof(ICMP_ECHO_REPLY) + 8; //Make buffer large enough to contain data sent and the size of the ICMP_ECHO_REPLY data structure
	char* bufferpointer = new char[lenofbuffer];
	MyHandle = IcmpCreateFile(); //Create Handle
	theaddress = destination; //Get IP address
	address = inet_addr(theaddress.c_str()); // convert IP address into IPAddr object
	for (int i = 0; i < duration; i++)
	{
		mainint = IcmpSendEcho2Ex(MyHandle, NULL, NULL, NULL, NULL, address, Randomdata, strlen(Randomdata), NULL, bufferpointer, lenofbuffer, 10000); //Perform the operation!
		memcpy(&reply, bufferpointer, sizeof(reply)); //Copy the returned information to an ICMP_ECHO_REPLY
		if (mainint != 0) { //If the status of the ICMP_ECHO_REPLY structures stored in bufferpointer is more than 0
			sum += reply.RoundTripTime;
			counter++;
		}
		else {
			//cout << "Received no response from the address" << " with error code " << GetLastError() << endl;
		}
	}
	avgms = to_string(sum / counter);


	IcmpCloseHandle(MyHandle);
	return avgms.append("ms");
}

int lol_print() {
	cout << ("_________________________________________________________________________________") << endl;
	cout << (":::         ::::::::  :::           :::::::::  ::::::::::: ::::    :::  ::::::::") << endl;
	cout << (":+:        :+:    :+: :+:           :+:    :+:     :+:     :+:+:   :+: :+:    :+:") << endl;
	cout << ("+:+        +:+    +:+ +:+           +:+    +:+     +:+     :+:+:+  +:+ +:+") << endl;
	cout << ("+#+        +#+    +:+ +#+           +#++:++#+      +#+     +#+ +:+ +#+ :#:") << endl;
	cout << ("+#+        +#+    +#+ +#+           +#+            +#+     +#+  +#+#+# +#+   +#+") << endl;
	cout << ("#+#        #+#    #+# #+#           #+#            #+#     #+#   #+#+# #+#    #+#") << endl;
	cout << ("##########  ########  ##########    ###        ########### ###    ####  ########") << endl;
	cout << (":::::::: :::    ::: ::::::::::  :::::::: :::    ::: :::::::::: :::::::::") << endl;
	cout << (":+:  :+: :+:    :+: :+:        :+:   :+: :+:   :+:  :+:        :+:    :+:") << endl;
	cout << ("+:+      +:+    +:+ +:+        +:+       +:+  +:+   +:+        +:+    +:+") << endl;
	cout << ("+#+      +#++:++#++ +#++:++#   +#+       +#++:++    +#++:++#   +#++:++#:") << endl;
	cout << ("+#+      +#+    +#+ +#+        +#+       +#+  +#+   +#+        +#+    +#+") << endl;
	cout << ("#+#  #+# #+#    #+# #+#        #+#   #+# #+#   #+#  #+#        #+#    #+#") << endl;
	cout << ("######## ###    ### ##########  ######## ###    ### ########## ###    ###") << endl;
	cout << ("_________________________________________________________________________________") << endl;
	cout << "" << endl;
	cout << ("_________________________________________________________________________________") << endl;
	return 0;
}

bool is_not_a_number(string choice) {
	for (unsigned i = 0; i < choice.size(); i++) {
		if (isdigit(choice[i]) == 0) {
			return true;
		}
	}
	return false;
}