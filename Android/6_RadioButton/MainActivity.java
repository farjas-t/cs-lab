package com.mamo.radiobutton;

import android.os.Bundle;
import android.app.Activity;
import android.view.Menu;
import android.view.View;
import android.widget.Button;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Toast;

public class MainActivity extends Activity {
	RadioGroup rg;
	Button but ;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        but = (Button) findViewById ( R.id.button1 );
        rg = (RadioGroup)findViewById (R.id.Gender);
        but.setOnClickListener(new View.OnClickListener() {
			
			@Override
			public void onClick(View v) {
				int selected = rg . getCheckedRadioButtonId () ;
				RadioButton radio = (RadioButton) findViewById ( selected ) ;
				Toast . makeText ( MainActivity . this , " You selected : "+ radio . getText
				() , Toast . LENGTH_LONG ) . show () ;
				
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
