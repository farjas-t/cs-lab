package com.mamo.menu;

import android.os.Bundle;
import android.app.Activity;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.Toast;

public class MainActivity extends Activity {

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
	}

	@Override
	public boolean onCreateOptionsMenu(Menu menu) {
		// Inflate the menu; this adds items to the action bar if it is present.
		getMenuInflater().inflate(R.menu.main, menu);
		return true;
		
	}
	@Override
	public boolean onOptionsItemSelected(MenuItem item){
		switch(item.getItemId()){
		case R.id.New:
			showToast("New");
			return true;
		case R.id.open:
			showToast("Open");
			return true;
		case R.id.exit:
			showToast("Exit");
			return true;
		default:
            return super.onOptionsItemSelected(item);	
			
		}
	}
	private void showToast(String message){
		Toast.makeText(this, message, Toast.LENGTH_SHORT).show();
	}

}
