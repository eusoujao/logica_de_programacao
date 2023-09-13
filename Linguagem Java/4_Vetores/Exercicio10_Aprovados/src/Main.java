/* Professor: Nelio
Descrição: Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou
igual a 6.0 (seis).
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		int n, i;
	    double media;
	    String[] nomes = new String [9];
	    double[] notas1 = new double [9];
	    double[] notas2 = new double [9];

	    System.out.print ("Quantos alunos serao digitados? ");
	    n = sc.nextInt();

	    for(i = 0; i < n; i++){

	    	System.out.println ("Digite nome, primeira e segunda nota do " + (i+1) + "o aluno: ");
	    	sc.nextLine();
	        nomes[i] = sc.nextLine();
	        notas1[i] = sc.nextDouble();
	        notas2[i] = sc.nextDouble();

	    }

	    System.out.println ("ALUNOS APROVADOS: ");

	    for(i = 0; i < n; i++){

	        media = (notas1[i] + notas2[i])/2;

	        if(media >= 6){

	        	System.out.println (nomes[i]);

	        }
	    }
	    
	    sc.close();

	}

}
