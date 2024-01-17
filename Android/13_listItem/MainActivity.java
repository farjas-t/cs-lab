package com.mamo.itemlist;

import android.os.Bundle;
import android.app.Activity;
import android.view.Menu;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListView;
import android.widget.Toast;

public class MainActivity extends Activity {
	

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        
        ListView lv=(ListView) findViewById(R.id.listView1);
        String title[]={"Google","Facebook","Twitter","Youtube"};
        ArrayAdapter<String> adt = new ArrayAdapter<String>(this, android.R.layout.simple_list_item_1, android.R.id.text1, title);
        lv.setAdapter(adt);
        
        lv.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                String selectedItem = (String) parent.getItemAtPosition(position);
                Toast.makeText(getApplicationContext(),selectedItem + " selected", Toast.LENGTH_SHORT).show();
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
