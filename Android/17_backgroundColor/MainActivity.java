package com.mamo.backgroundcolor;

import android.os.Bundle;
import android.app.Activity;
import android.graphics.Color;
import android.view.Menu;
import android.view.View;
import android.widget.RelativeLayout;

public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
    
    public void setred(View v){
    	RelativeLayout layout =(RelativeLayout) findViewById(R.id.layout);
    	layout.setBackgroundColor(Color.parseColor("#ff0000"));
    }
    public void setgreen(View v){
    	RelativeLayout layout =(RelativeLayout) findViewById(R.id.layout);
    	layout.setBackgroundColor(Color.parseColor("#00ff00"));
    }
    public void setblue(View v){
    	RelativeLayout layout =(RelativeLayout) findViewById(R.id.layout);
    	layout.setBackgroundColor(Color.parseColor("#0000ff"));
    }


    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.main, menu);
        return true;
    }
    
}
