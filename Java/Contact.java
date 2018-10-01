package td3.contact;

//author : vcaze L2

public class Contact {
  private String nom;
  private String numero;
  private String mail;
  
  public Contact() {
    this("Virginie", "06666666", "andromede@gmail.com");
  }
  
  public Contact(String nom, String numero, String mail) {
    setNom(nom);
    setNumero(numero);
    setMail(mail);
  }
  
  public String getNom() {
    return nom;
  }
  
  public String getNumero() {
    return numero;
  }
  
  public String getMail() {
    return mail;
  }
  
  public void setNom(String nom) {
    this.nom = nom;
  }
  
  public void setNumero(String numero) {
    this.numero = numero;
  }
  
  public void setMail(String mail) {
    this.mail = mail
  }
  
  public String toString() {
    return "Contact [ Name" +name+ ","Numero :" +numero+ ","Mail :"] +mail;
  }
      
 }      
