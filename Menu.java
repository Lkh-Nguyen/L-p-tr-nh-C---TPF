package view;

import controller.inputValidator;
import java.util.ArrayList;

public abstract class Menu<T> {
    protected String title;
    protected ArrayList<T> function;
    public Menu(){

    }
    
    public Menu(String title,T[] function){
        this.title=title;
        this.function = new ArrayList<>();
        for (T element:function){
            this.function.add(element);
        }
    }    
    
    public void display(){
        System.out.println(title);
        for (int i=0;i<function.size();i++){
            System.out.println((i+1)+"."+function.get(i));
        }
        System.out.println("-----------------------------------");
    }
    
    public abstract void execute(int n);
    public int getSelection(){
        display();
        return Integer.parseInt(inputValidator.enterInput("selection...", "Integer"));
    }
    public void run(){
        while (true){
            int n = getSelection();
            execute(n);
            if (n>function.size()) break;
        }
    }
}    