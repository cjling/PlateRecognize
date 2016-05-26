package com.link_trust.platerecognize;

import android.provider.Settings;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;
import com.link_trust.platerecognize.PlateRecognizeLib;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView textView = (TextView) findViewById(R.id.textview);
        PlateRecognizeLib recognize_lib = new PlateRecognizeLib();
        String ann_path = "/sdcard/ann.xml";
        String svm_path = "/sdcard/svm.xml";
        String img_path = "/sdcard/tst.jpg";
        textView.setText(recognize_lib.Recongize1(ann_path, svm_path, img_path));
    }
}
