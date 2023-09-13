/* Professor: Nelio
Descrição: Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para
organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano,
quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este
laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas
informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia
utilizada e a quantidade de cobaias utilizadas em cada experimento. Faça um programa que leia um
valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um
inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S'), indicando o tipo
de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de
cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o
percentual deve ser apresentado com dois dígitos após o ponto.
Autor(a): João Renato Sant'Ana
Data atual: 18/07/2023 */

import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
		
		int n, i, qtd, soma, c, r, s;
	    double pc, pr, ps;
	    char cob;

	    System.out.print ("Quantos casos de teste serao digitados? ");
	    n = sc.nextInt();

	    c = 0;
	    r = 0;
	    s = 0;
	    soma = 0;

	    for(i = 1; i <= n; i++){

	    	System.out.print ("Quantidade de cobaias: ");
	        qtd = sc.nextInt();
	        System.out.print ("Tipo de cobaias: ");
	        cob = sc.next().charAt(0) ;

	        soma = soma + qtd;

	        if(cob == 'c'){

	            c = c + qtd;

	        } else if(cob == 'r'){

	            r = r + qtd;

	        } else if(cob == 's'){

	            s = s + qtd;

	        }
	    }

	    pc = (double) c / soma * 100.0;
	    pr = (double) r / soma * 100.0;
	    ps = (double) s / soma * 100.0;

	    System.out.println();
	    System.out.println ("RELATORIO FINAL: ");
	    System.out.println ("Total: " + soma + " cobaias");
	    System.out.println ("Total de coelhos: " + c);
	    System.out.println ("Total de ratos: " + r);
	    System.out.println ("Total de sapos: " + s);
	    System.out.println ("Percentual de coelhos: " + String.format("%.2f" , pc));
	    System.out.println ("Percentual de ratos: " + String.format("%.2f" , pr));
	    System.out.println ("Percentual de sapos: " + String.format("%.2f" , ps));

	    sc.close();
	    
	}

}
