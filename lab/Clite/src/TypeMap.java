import java.util.*;

public class TypeMap extends HashMap<Variable, Type> { 

// TypeMap is implemented as a Java HashMap.  
// Plus a 'display' method to facilitate experimentation.
 void display(){
   for (Map.Entry<Variable, Type> e : this.entrySet()){
     System.out.println(e.getKey() + " : " + e.getValue());
   }
 }

}