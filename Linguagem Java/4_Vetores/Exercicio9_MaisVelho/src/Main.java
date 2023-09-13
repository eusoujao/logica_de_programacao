/* Professor: Nelio
Descrição: Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes
devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome
da pessoa mais velha.
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in); 
		
		int n, i, posMaior, maior;
	    String[] nomes = new String [9];
	    int[] idades = new int[9];

	    System.out.print ("Quantas pessoas voce vai digitar? ");
	    n = sc.nextInt();

	    for(i = 0; i < n; i++){

	    	System.out.println ("Dados da " + (i+1) + "a pessoa: ");
	    	System.out.print ("Nome: ");
	    	sc.nextLine();
	        nomes[i] = sc.nextLine();
	        System.out.print ("Idade: ");
	        idades[i] = sc.nextInt();

	    }

	    maior = idades[0];
	    posMaior = 0;

	    for(i = 0; i < n; i++){

	        if(idades[i] > maior){

	            maior = idades[i];
	            posMaior = i;

	        }
	    }

	    System.out.print ("PESSOA MAIS VELHA: " + nomes[posMaior]);
	    
	    sc.close();

	}

}
