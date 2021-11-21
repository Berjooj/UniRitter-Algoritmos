Program Sum

    INTEGER valor_01 
    INTEGER valor_02 
    INTEGER result
    
    PRINT *, "Informe um numero: "
    READ *, valor_01
    PRINT *, "Informe outro numero: "
    READ *, valor_02
    
    result = valor_01 + valor_02
    
    IF (result > 10) THEN
        PRINT *, "Resultado igual a ", result, " logo maior que dez!"
    ELSE
        PRINT *, "Resultado igual a ", result, " logo menor que dez!"
    ENDIF
    STOP
End Program Sum
