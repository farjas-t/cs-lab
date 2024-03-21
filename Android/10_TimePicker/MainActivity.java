package com.mamo.timepicker;

import android.os.Bundle;
import android.app.Activity;
import android.view.Menu;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.TimePicker;

public class MainActivity extends Activity {
	Button bt;
	TextView t;
	TimePicker tmp;
	
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        tmp=(TimePicker)findViewById(R.id.timePicker1);
        tmp.setIs24HourView(true);
        bt=(Button)findViewById(R.id.button1);
        t=(TextView)findViewById(R.id.textView1);
        bt.setOnClickListener(new View.OnClickListener() {
			
			@Override
			public void onClick(View view) {
				t.setText("Curent Time:"+tmp.getCurrentHour()+":"+tmp.getCurrentMinute());
				
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

