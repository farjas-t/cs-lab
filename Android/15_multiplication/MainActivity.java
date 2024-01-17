package com.mamo.multiplication;

import android.os.Bundle;
import android.app.Activity;
import android.view.Menu;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
    
    public void show(View v){
 	   String result="";
 	   EditText txt = (EditText) findViewById(R.id.editText1); 
 	   TextView txtv = (TextView) findViewById(R.id.textView1);
 	   int num =Integer.parseInt(txt.getText().toString());
 	   for(int i=1;i<=10;i++){
 		   int mul = i*num;
 		   result+= num+" * "+i+" = "+mul+"\n";
 		   txtv.setText(result);
 	   }
    }


    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.main, menu);
        return true;
    }
    
}
