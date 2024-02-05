import java.util.Scanner
import kotlin.math.*

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    val N = sc.nextInt()
    for(i in 1..N) {
        var isFound = false; var now = sc.nextInt(); var fact = 2; var count = 0
        if(now == 1) {println("YA"); continue}
        while(!isFound) {
            if(fact == now) break;
            if(now % fact == 0) {count++}
            if(count > 2) {isFound = true; println("BUKAN"); break} 
            fact++
        }
        if(!isFound) println("YA")
    }
}