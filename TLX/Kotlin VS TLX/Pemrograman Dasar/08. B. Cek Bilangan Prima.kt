import java.util.Scanner
import kotlin.math.*

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    val N = sc.nextInt()
    for(i in 1..N) {
        var now = sc.nextDouble()
        if(isPrime(now)) println("YA") else println("BUKAN") }   
}
fun isPrime(num: Double): Boolean {
    var res = true; var div = 2
    if(num == 1.0) res = false
    while(div <= truncate(sqrt(num))) {
        if(num % div == 0.0) res = false; div++
    } return res
}