/* Professor: Nelio
Descrição:Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a
média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao
intervalo [0,10]). Cada nota deve ser validada separadamente.
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in); 
		
		double nota1, nota2, media;

		System.out.print ("Digite a primeira nota: ");
	    nota1 = sc.nextDouble();

	    while(nota1 > 10 || nota1 < 0){

	    	System.out.print ("Valor invalido! Tente novamente: ");
	        nota1 = sc.nextDouble();

	    };

	    System.out.print ("Digite a segunda nota: ");
	    nota2 = sc.nextDouble();

	    while(nota2 > 10 || nota2 < 0){

	    	System.out.print ("Valor invalido! Tente novamente: ");
	        nota2 = sc.nextDouble();

	    };

	    media = (nota1 + nota2) / 2;

	    System.out.print ("MEDIA = " + String.format("%.2f" , media));
	    
	    sc.close();

	}

}
