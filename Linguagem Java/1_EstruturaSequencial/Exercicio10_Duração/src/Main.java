/* Professor: Nelio
Descrição: Fazer um programa para ler uma duração de tempo em segundos, daí imprimir na tela esta duração no
formato horas:minutos:segundos.
Autor(a): João Renato Sant'Ana
Data atual: 17/07/2023 */

import java.util.Locale; 
import java.util.Scanner; 

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US); 
		Scanner sc = new Scanner(System.in);
		
		int segundos, horas, resto, minutos, segundosC;

	    System.out.print ("Digite a duracao em segundos: ");
	    segundos = sc.nextInt();

	    horas = segundos / 3600;
	    resto = segundos % 3600;
	    minutos = resto / 60;
	    segundosC = resto % 60;

	    System.out.println (horas + ":" + minutos + ":" + segundosC);
	    
	    sc.close(); 

	}

}
