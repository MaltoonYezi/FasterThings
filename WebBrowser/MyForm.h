#pragma once
#include <string>


//#include <msclr\marshal_cppstd.h> //this causes the error

using namespace System;


namespace WebBrowser {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonBack;
	private: System::Windows::Forms::Button^ buttonForward;
	private: System::Windows::Forms::TextBox^ textNavigate;
	protected:



	private: System::Windows::Forms::Button^ buttonNavigate;
	private: System::Windows::Forms::WebBrowser^ webBrowser;
	private: System::Windows::Forms::Button^ buttonRefresh;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonBack = (gcnew System::Windows::Forms::Button());
			this->buttonForward = (gcnew System::Windows::Forms::Button());
			this->textNavigate = (gcnew System::Windows::Forms::TextBox());
			this->buttonNavigate = (gcnew System::Windows::Forms::Button());
			this->webBrowser = (gcnew System::Windows::Forms::WebBrowser());
			this->buttonRefresh = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonBack
			// 
			this->buttonBack->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonBack->Location = System::Drawing::Point(4, 6);
			this->buttonBack->Name = L"buttonBack";
			this->buttonBack->Size = System::Drawing::Size(25, 25);
			this->buttonBack->TabIndex = 0;
			this->buttonBack->Text = L"<";
			this->buttonBack->UseVisualStyleBackColor = true;
			this->buttonBack->Click += gcnew System::EventHandler(this, &MyForm::buttonBack_Click);
			// 
			// buttonForward
			// 
			this->buttonForward->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonForward->Location = System::Drawing::Point(35, 5);
			this->buttonForward->Name = L"buttonForward";
			this->buttonForward->Size = System::Drawing::Size(25, 25);
			this->buttonForward->TabIndex = 1;
			this->buttonForward->Text = L">";
			this->buttonForward->UseVisualStyleBackColor = true;
			this->buttonForward->Click += gcnew System::EventHandler(this, &MyForm::buttonForward_Click);
			// 
			// textNavigate
			// 
			this->textNavigate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textNavigate->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textNavigate->Location = System::Drawing::Point(66, 7);
			this->textNavigate->Name = L"textNavigate";
			this->textNavigate->Size = System::Drawing::Size(440, 23);
			this->textNavigate->TabIndex = 2;
			this->textNavigate->Text = L"Type a URL";
			this->textNavigate->Click += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textNavigate->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::textNavigate_MouseClick);
			this->textNavigate->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textNavigate->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textNavigate_KeyDown);
			this->textNavigate->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textNavigate_KeyPress);
			// 
			// buttonNavigate
			// 
			this->buttonNavigate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonNavigate->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNavigate->Location = System::Drawing::Point(592, 7);
			this->buttonNavigate->Name = L"buttonNavigate";
			this->buttonNavigate->Size = System::Drawing::Size(71, 23);
			this->buttonNavigate->TabIndex = 3;
			this->buttonNavigate->Text = L"Navigate";
			this->buttonNavigate->UseVisualStyleBackColor = true;
			this->buttonNavigate->Click += gcnew System::EventHandler(this, &MyForm::buttonNavigate_Click);
			// 
			// webBrowser
			// 
			this->webBrowser->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->webBrowser->Location = System::Drawing::Point(1, 36);
			this->webBrowser->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser->Name = L"webBrowser";
			this->webBrowser->ScriptErrorsSuppressed = true;
			this->webBrowser->Size = System::Drawing::Size(662, 425);
			this->webBrowser->TabIndex = 4;
			this->webBrowser->Url = (gcnew System::Uri(L"https://duckduckgo.com", System::UriKind::Absolute));
			this->webBrowser->DocumentCompleted += gcnew System::Windows::Forms::WebBrowserDocumentCompletedEventHandler(this, &MyForm::webBrowser_DocumentCompleted);
			// 
			// buttonRefresh
			// 
			this->buttonRefresh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonRefresh->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRefresh->Location = System::Drawing::Point(517, 7);
			this->buttonRefresh->Name = L"buttonRefresh";
			this->buttonRefresh->Size = System::Drawing::Size(65, 23);
			this->buttonRefresh->TabIndex = 5;
			this->buttonRefresh->Text = L"Refresh";
			this->buttonRefresh->UseVisualStyleBackColor = true;
			this->buttonRefresh->Click += gcnew System::EventHandler(this, &MyForm::buttonRefresh_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(666, 456);
			this->Controls->Add(this->buttonRefresh);
			this->Controls->Add(this->webBrowser);
			this->Controls->Add(this->buttonNavigate);
			this->Controls->Add(this->textNavigate);
			this->Controls->Add(this->buttonForward);
			this->Controls->Add(this->buttonBack);
			this->HelpButton = true;
			this->Name = L"MyForm";
			this->Text = L"FasterThings Web Browser";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void webBrowser1_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {
	}
private: System::Void buttonBack_Click(System::Object^ sender, System::EventArgs^ e) 
{
	webBrowser->GoBack();
}
private: System::Void buttonForward_Click(System::Object^ sender, System::EventArgs^ e) 
{
	webBrowser->GoForward();

	//textNavigate->Text = webBrowser->Url;

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	/* if (textNavigate->Text == "Type a URL") {
		textNavigate->Text = ""; 

	} */
}
private: System::Void buttonNavigate_Click(System::Object^ sender, System::EventArgs^ e) 
{
	/* //The issue is here, this fragment of code is the reason, why #include <msclr\marshal_cppstd.h> is used
	std::string dot; //Vanialla string

	System::String^ systemString = textNavigate->Text; //Object string

	msclr::interop::marshal_context context;
	std::string standardString = context.marshal_as<std::string>(systemString);

	dot = standardString;

	int occurrence = 0;

	for (int i = 0; i < dot.size(); i++) {
		if (dot[i] == '.') { occurrence++; }
	} 
	
	if (occurrence > 0) {

		webBrowser->Navigate(textNavigate->Text);

	}
	else {
		textNavigate->Text = "Inavlid URL";

	} */

	//webBrowser->Navigate(textNavigate->Text);

	//another solution, works buggy though
	

	System::String^ systemString = textNavigate->Text + "!";

	int occurrence = 0;
	int i = 0;
	

	while(systemString[i] != '!') {

		if (systemString[i] == '.') { occurrence++; }
		i++;
	}

	if (occurrence > 0) {

		webBrowser->Navigate(textNavigate->Text);
		
	}
	else {
		System::String^ searchString = "duckduckgo.com/?q=";
		System::String^ queryString = textNavigate->Text +"!";

		i = 0;

		while (queryString[i] != '!') {

			if (queryString[i] != ' ') {

				searchString = searchString + queryString[i];

			}

			else if (queryString[i] == ' ') {
				searchString = searchString + "+";

			}
			i++;

		}

		
		webBrowser ->Navigate (searchString);
		//textNavigate->Text = "Inavlid URL";

	}




}
private: System::Void buttonRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
	webBrowser->Refresh();

}
private: System::Void textNavigate_Leave(System::Object^ sender, System::EventArgs^ e) {
	if (textNavigate->Text == "") {

		textNavigate->Text = "Type a URL";


	}
}
private: System::Void textNavigate_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	

}
private: System::Void webBrowser_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {
}
private: System::Void textNavigate_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter)
	{

		//another solution, works buggy though

		System::String^ systemString = textNavigate->Text + "!";

		int occurrence = 0;
		int i = 0;


		while (systemString[i] != '!') {

			if (systemString[i] == '.') { occurrence++; }
			i++;
		}

		if (occurrence > 0) {

			webBrowser->Navigate(textNavigate->Text);

		}
		else {
			System::String^ searchString = "duckduckgo.com/?q=";
			System::String^ queryString = textNavigate->Text + "!";

			i = 0;

			while (queryString[i] != '!') {

				if (queryString[i] != ' ') {

					searchString = searchString + queryString[i];

				}

				else if (queryString[i] == ' ') {
					searchString = searchString + "+";

				}
				i++;

			}


			webBrowser->Navigate(searchString);
			//textNavigate->Text = "Inavlid URL";

		}


		//webBrowser -> Navigate(textNavigate->Text);

	}

}
private: System::Void textNavigate_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (textNavigate->Text == "Type a URL"|| textNavigate->Text =="Inavlid URL") {
		textNavigate->Text = "";

	}

}
};
}
