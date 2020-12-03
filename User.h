#include <iostream>

class User
{
private:
	std::string nameFirst;
	std::string nameLast;
	std::string userEmail;
	std::string userStreetAddress;
	std::string userCity;
	int userZipcode;
	int socialSecurity;
	int userID;

protected:
	std::string getnameFirst(std::string);
	std::string getnameLast(std::string);
	int getuserID(int);
	std::string getuserEmail(std::string);


public:
	User();
	~User();
};

class CreditAccount: private User
{
private: 
	int creditAccountNum;
	int creditCardNum;
	int creditExpiration;
	int creditCV;
	float creditTotal;
	float creditRemaining;
	float creditCashW;

};

class DebitAccount : private User
{

};