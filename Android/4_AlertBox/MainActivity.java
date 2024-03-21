package com.mamo.datetimedialogue;

import android.os.Bundle;
import android.app.Activity;
import android.view.Menu;
import android.app.AlertDialog;
import android.content.DialogInterface;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

public class MainActivity extends Activity {
Button b;
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		b=(Button)findViewById(R.id.button1);
		b.setOnClickListener(new View.OnClickListener() {
			
			@Override
			public void onClick(View v) {
				// TODO Auto-generated method stub
				AlertDialog.Builder b= new AlertDialog . Builder ( MainActivity . this
						) ;
				b . setTitle (" Alert " ) ;
				b . setMessage ( " Are you sure ? " ) ;
				b . setPositiveButton ( " OK " , new DialogInterface.OnClickListener() {
					
					@Override
					public void onClick(DialogInterface arg0, int arg1) {
						// TODO Auto-generated method stub
						Toast . makeText ( MainActivity . this , " You Clicked OK " ,
								Toast . LENGTH_SHORT ) . show () ;
								
					}
					
				});
				b.setNegativeButton("Cancel", new DialogInterface.OnClickListener() {
					
					@Override
					public void onClick(DialogInterface arg0, int arg1) {
						// TODO Auto-generated method stub
						Toast . makeText ( MainActivity . this , " You Clicked Cancel " ,
								Toast . LENGTH_SHORT ) . show () ;
					}
				});
				AlertDialog d=b.create();
				d.show();
				
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

