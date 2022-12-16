#include "Login.h"
#include "Admin.h"
#include "Worker.h"
#include"adminstration.h"
#include"cabstatus.h"
#include"Features.h"
#include"Tofrom.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//User^ user = nullptr;
	while (true) {
		Project4::Login login;
		login.ShowDialog();

		if (login.switchToAdmin) {
			//show the admin form
			Project4::Admin admin;
			admin.ShowDialog();

			if (admin.switchToLogin) {
				continue;
			}
			else {
				break;
			}
		}
		else if (login.switchToWorker) {
			//show the Worker form
			Project4::Worker worker;
			worker.ShowDialog();

			if (worker.switchToLogin) {
				continue;
			}
			else {

				break;
			}
		}
		else {
		
			break;
		}
	}


}