package com.mamo.spinner;

import android.os.Bundle;
import android.app.Activity;
import android.view.Menu;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Spinner;
import android.widget.Toast;

public class MainActivity extends Activity {
 Spinner spin;
 String[] items={"Elephant","Lion","Monkey","Oranguttan","Rabbit","Cheetah"};
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        spin=(Spinner) findViewById(R.id.spinner1);
        spin.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() {

			@Override
			public void onItemSelected(AdapterView<?> parent, View view,
					int position, long id) {
				Toast.makeText(MainActivity.this, "Selected Items"+items [position],Toast.LENGTH_SHORT).show();
				
			}

			@Override
			public void onNothingSelected(AdapterView<?> parent) {
				Toast . makeText ( MainActivity . this , " No item selected " , Toast .
						LENGTH_SHORT ) . show () ;
						
				
			}
		});
        ArrayAdapter < String > adt = new ArrayAdapter < String >( this ,
        		android . R . layout . simple_list_item_1 , items ) ;
        		spin . setAdapter ( adt ) ;
		}
        	
		
    

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.main, menu);
        return true;
    }
    
}
