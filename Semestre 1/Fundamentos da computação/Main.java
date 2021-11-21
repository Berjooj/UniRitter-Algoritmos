package Fundamentos;

import java.io.BufferedReader;
import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        final BufferedReader buffer = new BufferedReader(new java.io.InputStreamReader(System.in));

        int valor_01;
        int valor_02 = 0;
        int result;

        System.out.println("Informe um número:");
        valor_01 = Integer.parseInt(buffer.readLine());

        System.out.println("Informe outro número:");
        valor_02 = Integer.parseInt(buffer.readLine());

        result = valor_01 + valor_02;

        if (result > 10)
            System.out.println("Resultado igual a " + result + " logo, maior que dez!");
        else
            System.out.println("Resultado igual a " + result + " logo, menor que dez!");
    }
}