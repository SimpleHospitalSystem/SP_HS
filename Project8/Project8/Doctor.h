#pragma once

namespace Project8 {

	using namespace System;
	public ref class Doctor {
	public:
		String^ id;
		String^ name;
		String^ username;
		String^ password;
		String^ specialication;

		Doctor(String^ id, String^ name, String^ username, String^ password, String^ specialication) {
			this->id = id;
			this->name = name;
			this->username = username;
			this->password = password;
			this->specialication = specialication;

		}
	};

}