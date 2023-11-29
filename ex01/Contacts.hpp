#include <string>

#define FIRSTNAME "Frist Name"
#define LASTNAME "Last Name"
#define PHONENUMBER "Phone Number"
#define DARKESTSECRET "Darkest Secret"

enum validateType_e {
  v_Name,
  v_phoneNumber,
  v_dakestSecret,
};

class Contact {
public:
  Contact();
  ~Contact();

  void askFirstName();
  void askLastName();
  void askPhoneNumber();
  void askDarkestSecret();
  void assignId(size_t id);

  /* void printContact() const; */
  /* void printAll() const; */

private:
  std::string askInput(validateType_e validation,
                       std::string questionSpecifier) const;
  bool validateInput(std::string input, validateType_e validation) const;
  int _id;
  std::string _firstName;
  std::string _lastName;
  std::string _phoneNumber;
  std::string _darkestSecret;
};
