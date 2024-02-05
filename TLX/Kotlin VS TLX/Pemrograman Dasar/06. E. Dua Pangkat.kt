import kotlin.math.*
import java.util.Scanner

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    val N = sc.nextInt(); var testCase = 1;
    var isTwoPowered: Boolean = false
    for(i in 1..16) {
        testCase *= 2
        if(testCase == N) {
            print("ya")
            isTwoPowered = true
        }
    }
    if(isTwoPowered == false) print("bukan")

}