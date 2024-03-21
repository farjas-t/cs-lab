package com.mamo.datetimedialogue;

import java.util.Calendar;
import android.os.Bundle;
import android.app.Activity;
import android.app.AlertDialog;
import android.content.DialogInterface;
import android.view.Menu;
import android.view.View;

public class MainActivity extends Activity {
	
	int year, month, day, hour, minute, second;
    String sysdate, systime;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
    
    public void showDateTime(View view) {
        AlertDialog.Builder b1 = new AlertDialog.Builder(MainActivity.this);
        b1.setTitle("System Date and Time");
        b1.setMessage("Current System Date :" + sysdate + "\nCurrent System Time :" + systime);
        b1.setPositiveButton("OK", new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialog, int which) {
            }
        });
        
        AlertDialog d = b1.create();
        d.show();

        Calendar c1 = Calendar.getInstance();
        year = c1.get(Calendar.YEAR);
        month = c1.get(Calendar.MONTH);
        day = c1.get(Calendar.DAY_OF_MONTH);
        hour = c1.get(Calendar.HOUR_OF_DAY);
        minute = c1.get(Calendar.MINUTE);
        second = c1.get(Calendar.SECOND);
        sysdate = day + "/" + (month + 1) + "/" + year;
        systime = hour + ":" + minute + ":" + second;
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.main, menu);
        return true;
    }
    
}
