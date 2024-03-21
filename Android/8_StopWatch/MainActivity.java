package com.mamo.stopwatch;

import android.os.Bundle;
import android.os.Handler;
import android.os.SystemClock;
import android.app.Activity;
import android.view.View;
import android.widget.TextView;

public class MainActivity extends Activity {

    private TextView tm;
    private long sT = 0;
    private Handler cH = new Handler();
    private long ts = 0;
    private long tSB = 0;
    private long uT = 0;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        tm = (TextView) findViewById(R.id.textView1);
    }

    public void startButtonClick(View view) {
        sT = SystemClock.uptimeMillis();
        cH.postDelayed(updateTimerThread, 0);
    }

    public void resetButtonClick(View view) {
        tm.setText("00:00:00");
    }

    public void pauseButtonClick(View view) {
        tSB = ts;
        cH.removeCallbacks(updateTimerThread);
    }

    private Runnable updateTimerThread = new Runnable() {
        @Override
        public void run() {
            ts = SystemClock.uptimeMillis() - sT;
            uT = tSB + ts;
            int secs = (int) (uT / 1000);
            int mins = secs / 60;
            secs = secs % 60;
            int mS = (int) (uT % 1000);
            tm.setText("" + mins + ":"
                    + String.format("%02d", secs) + ":"
                    + String.format("%03d", mS));
            cH.postDelayed(this, 0);
        }
    };
}
