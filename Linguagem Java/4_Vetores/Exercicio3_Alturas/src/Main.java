/* Professor: Nelio
Descrição: Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
bem como os nomes dessas pessoas caso houver.
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		int n, i, soma;
	    double somaAlt, porcentagem;
	    String[] nomes = new String [9];
	    int[] idades = new int[9];
	    double[] alturas = new double [9];

	    System.out.print ("Quantas pessoas serao digitadas? ");
	    n = sc.nextInt();

	    somaAlt = 0;
	    soma = 0;
	    porcentagem = 0;

	    for(i = 0; i < n; i++){

	    	System.out.println ("Dados da " + (i + 1) + "a pessoa:");
	    	System.out.print ("Nome: ");
	    	sc.nextLine();
	        nomes[i] = sc.nextLine();
	        System.out.print ("Idade: ");
	        idades[i] = sc.nextInt();
	        System.out.print ("Altura: ");
	        alturas[i] = sc.nextDouble();

	    }

	    for(i = 0; i < n; i++){

	        somaAlt = somaAlt + alturas[i];

	    }

	    System.out.println ("\nAltura media: " + String.format("%.2f" , (somaAlt / n)));

	    for(i = 0; i < n; i++){

	        if(idades[i] < 16){

	            soma = soma + 1;

	        }
	    }

	    porcentagem = 100.0 * soma / n;

	    System.out.println ("Pessoas com menos de 16 anos: " + String.format("%.1f" , porcentagem) + "%");

	    for(i = 0; i < n; i++){

	        if(idades[i] < 16){

	        	System.out.println (nomes[i]);

	        }
	    }
	    
	    sc.close();

	}

}
