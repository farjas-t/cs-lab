package com.example.addnumbers;

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

    public void add(View V){
    	EditText num1,num2;
    	TextView r;
    	num1=(EditText) findViewById(R.id.editText1);
    	num2=(EditText) findViewById(R.id.editText2);
    	r=(TextView) findViewById(R.id.textView1);
    	int x=Integer.parseInt(num1.getText().toString());
    	int y=Integer.parseInt(num2.getText().toString());
    	int sum= x+y;
    	r.setText("Result : "+sum);
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.main, menu);
        return true;
    }
    
}
