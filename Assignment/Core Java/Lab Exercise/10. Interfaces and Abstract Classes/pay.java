package Assignment;

//Interface
interface PaymentGateway {
 void pay(double amount);    // to make payment
 void refund(double amount); // to refund payment
}

//Class implementing the interface
class SBI implements PaymentGateway {
 String email;

 // Constructor
 SBI(String email) {
     this.email = email;
 }

 @Override
 public void pay(double amount) {
     System.out.println("Paying Rs." + amount + " using SBI account: " + email);
 }

 @Override
 public void refund(double amount) {
     System.out.println("Refunding Rs." + amount + " to SBI account: " + email);
 }
}

//Another class implementing the interface
class CreditCard implements PaymentGateway {
 String cardNumber;

 // Constructor
 CreditCard(String cardNumber) {
     this.cardNumber = cardNumber;
 }

 @Override
 public void pay(double amount) {
     System.out.println("Paying Rs." + amount + " using Credit Card: " + cardNumber);
 }

 @Override
 public void refund(double amount) {
     System.out.println("Refunding Rs." + amount + " to Credit Card: " + cardNumber);
 }
}

//Main class
public class pay {
 public static void main(String[] args) {
     // Create SBI payment object
     PaymentGateway SBIPayment = new SBI("sbi@user.com");
     SBIPayment.pay(100.50);
     SBIPayment.refund(50.25);

     System.out.println();

     // Create Credit Card payment object
     PaymentGateway creditCardPayment = new CreditCard("1234-5678-9012-0628");
     creditCardPayment.pay(200.00);
     creditCardPayment.refund(75.00);
 }
}
