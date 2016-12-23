#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
        pincodeField(new QLineEdit())
{
    addRow("<font color = 'red'>First Name</font><font color = 'blue'>*</font>", firstNameField);
    addRow("<font color = 'red'>Last Name</font><font color = 'blue'>*</font>", lastNameField);
    addRow("<font color = 'red'>Address</font><font color = 'blue'>*</font>", addressField);
    addRow("<font color = 'red'>Phone Number</font><font color = 'blue'>*</font>", phoneNumberField);
    addRow("<font color = 'red'>Email</font><font color = 'blue'>*</font>", emailField);
    addRow("<font color = 'red'>pin code</font><font color = 'blue'>*</font>", pincodeField);
}

void QtContactForm::clear()
{
    firstNameField->setText("<font color = 'red'>First Name</font><font color = 'blue'>*</font>");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
    pincodeField->setText("");
}
