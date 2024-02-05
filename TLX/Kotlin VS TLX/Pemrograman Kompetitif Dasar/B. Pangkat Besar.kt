import kotlin.math.*
import java.util.Scanner

fun main(Args: Array<String>) {
    val sc = Scanner(System.`in`)
    val A = sc.nextDouble(); val B = sc.nextDouble()
    val temp: String = Math.pow(A, B) as String
    var res: String = String.toString(temp)
    val len = res.length
    if(len > 6) {res = res.subSequence((len-6), (len-1))}
    print(res)  
}