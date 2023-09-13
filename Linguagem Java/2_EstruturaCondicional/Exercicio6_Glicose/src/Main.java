/* Professor: Nelio
Descrição: Fazer um programa para ler a quantidade de glicose no sangue de uma pessoa e depois mostrar na tela a
classificação desta glicose.
Autor(a): João Renato Sant'Ana
Data atual: 17/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		double glicose;

		System.out.print ("Digite a medida de glicose: ");
	    glicose = sc.nextDouble();

	    if (glicose <= 100) {

	    	System.out.print ("Classificacao: normal");

	    } else if (glicose <= 140) {

	    	System.out.print ("Classificacao: elevado");

	    } else {

	    	System.out.print ("Classificacao: diabetes");

	    }
	    
	    sc.close();

	}

}
