package com.mamo.checkbox;

import android.os.Bundle;
import android.app.Activity;
import android.view.Menu;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;
import android.widget.Toast;

public class MainActivity extends Activity {
	CheckBox a,b,c,d;
	Button bt;
	
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        a=(CheckBox)findViewById(R.id.checkBox1);
        b=(CheckBox)findViewById(R.id.checkBox2);
        c=(CheckBox)findViewById(R.id.checkBox3);
        d=(CheckBox)findViewById(R.id.checkBox4);
        bt=(Button)findViewById(R.id.button1);
        bt.setOnClickListener(new View.OnClickListener() {
			
			@Override
			public void onClick(View v) {
				String res="Ice cream:"+a.isChecked()+"\nChoco Bar:"+b.isChecked()+"\nMango Bar:"+c.isChecked()+"\nGrape Bar:"+d.isChecked();
				Toast.makeText(MainActivity.this,res, Toast.LENGTH_LONG).show();
			}
		});
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.main, menu);
        return true;
    }
    
}