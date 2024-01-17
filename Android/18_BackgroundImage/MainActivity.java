package com.mamo.backgroundimage;

import android.os.Bundle;
import android.app.Activity;
import android.view.Menu;
import android.view.View;
import android.widget.RelativeLayout;

public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
    
    public void setday(View v){
    	RelativeLayout layout =(RelativeLayout) findViewById(R.id.layout);
    	layout.setBackgroundResource(R.drawable.day);
    }
    public void setnight(View v){
    	RelativeLayout layout =(RelativeLayout) findViewById(R.id.layout);
    	layout.setBackgroundResource(R.drawable.night);
    }


    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.main, menu);
        return true;
    }
    
}
