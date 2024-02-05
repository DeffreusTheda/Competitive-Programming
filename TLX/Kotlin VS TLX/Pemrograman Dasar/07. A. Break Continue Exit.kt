import java.util.Scanner

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    val N = sc.nextInt()
    for(i in 1..N) {
        if(i % 10 == 0) continue 
        else if(i == 42) {
            println("ERROR"); break
        } else println(i)
    }   
}