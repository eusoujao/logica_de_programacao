/* Professor: Nelio
Descrição: Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais. Em seguida, fazer as
seguintes ações:
a) calcular e imprimir a soma de todos os elementos positivos da matriz.
b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha.
c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna.
d) imprimir os elementos da diagonal principal da matriz.
e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir
a matriz alterada.
Autor(a): João Renato Sant'Ana
Data atual: 19/07/2023 */

import java.util.Locale; 
import java.util.Scanner; 

public class Main {

	public static void main(String[] args) {
		
		 Locale.setDefault(Locale.US); 
		 Scanner sc = new Scanner(System.in);
		
		    int n, i, j, linha, coluna;
		    double soma;
		    double[][] mat = new double [9][9];
		    double[][] matAlt = new double [9][9];

		    System.out.print ("Qual a ordem da matriz? ");
		    n = sc.nextInt();

		    for(i = 0; i < n; i++){

		        for(j = 0; j < n; j++){

		        	System.out.print ("Elemento [" + i + "," + j + "]:");
		            mat[i][j] = sc.nextDouble();

		        }
		    }

		    soma = 0;

		    for(i = 0; i < n; i++){

		        for(j = 0; j < n; j++){

		            if(mat[i][j] > 0){

		                soma = soma + mat[i][j];

		            }
		        }
		    }

		    System.out.println ("\nSOMA DOS POSITIVOS: " + String.format("%.1f" , soma));

		    System.out.print ("\nEscolha uma linha: ");
		    linha = sc.nextInt();
		    System.out.print ("LINHA ESCOLHIDA: ");


		    for(j = 0; j < n; j++){

		    	System.out.print (String.format("%.1f" , mat[linha][j]) + " ");

		    }

		    System.out.println ();
		    System.out.print ("\nEscolha uma coluna: ");
		    coluna = sc.nextInt();
		    System.out.print ("COLUNA ESCOLHIDA: ");


		    for(i = 0; i < n; i++){

		    	System.out.print (String.format("%.1f" , mat[i][coluna]) + " ");

		    }

		    System.out.println ();
		    System.out.print ("\nDIAGONAL PRINCIPAL: ");

		    for(i = 0; i < n; i++){

		    	System.out.print (String.format("%.1f" , mat[i][i]) + " ");

		    }

		    System.out.println ();
		    System.out.println ("\nMATRIZ ALTERNADA:  ");

		    for(i = 0; i < n; i++){

		        for(j = 0; j < n; j++){

		            if(mat[i][j] < 0){

		                matAlt[i][j] = Math.pow(mat[i][j], 2);

		            }else {

		                matAlt[i][j] = mat[i][j];

		            }

		            System.out.print (String.format("%.1f" , matAlt[i][j]) + " ");

		        }

		        System.out.println ();

		    }
		    
		    sc.close();

	}

}
