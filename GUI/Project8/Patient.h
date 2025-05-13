#pragma once

using namespace System;

namespace Project8 {

	public ref class Patient {
	public:
		String^ id;
		String^ name;
		String^ username;
		String^ password;
		int age;
		System::Char gender;

		Patient(String^ id, String^ name, String^ username, String^ password, int age, char gender) {
			this->id = id;
			this->name = name;
			this->username = username;
			this->password = password;
			this->age = age;
			this->gender = gender;
		}
	};

}
