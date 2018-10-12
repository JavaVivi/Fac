package td4.repertoire;

import java.util.Arrays;

public class Repertoire {
	private Contact[] contacts;
	private int nbContacts = 0;
	
	public Repertoire() {
		this(10);
	}
	
	public Repertoire(int nbContacts) {
		contacts = new Contact[nbContacts];
	}

	public Contact getContacts(int i) {
		return contacts[i];
	}

	public void setContacts(Contact[] contacts) {
		this.contacts = contacts;
	}

	public int getNbContacts() {
		return nbContacts;
	}

	public void setNbContacts(int nbContacts) {
		this.nbContacts = nbContacts;
	}
	
	public void ajouter(Contact contact) {
		if(nbContacts != contacts.length) {
			contacts[nbContacts] = contact;
			nbContacts++;
		}
	}
	
	public Contact rechercheNom(String nom) {
		for(int i = 0; i < contacts.length; i++) {
			if(contacts[i].getNom() == nom) {
				return contacts[i];
			}
		}
		return null;
	}
	
	public Contact rechercheTel(String numero) {
		for(int i = 0; i < contacts.length; i++) {
			if(contacts[i].getNumero() == numero) {
				return contacts[i];
			}
		}
		return null;
	}

	@Override
	public String toString() {
		return "Repertoire [contacts=" + Arrays.toString(contacts) + "]";
	}
	
	
}
