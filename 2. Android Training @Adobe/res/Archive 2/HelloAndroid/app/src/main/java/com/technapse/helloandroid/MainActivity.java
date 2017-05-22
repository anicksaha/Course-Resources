package com.technapse.helloandroid;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.text.Layout;
import android.view.LayoutInflater;
import android.view.View;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
       // setContentView(R.layout.activity_main);

        //get access to layout inflater
        LayoutInflater inflater = LayoutInflater.from(this);
        //inflate layout xml
        View view = inflater.inflate(R.layout.activity_main, null);
        //attach the view tree to the activity as content view
        setContentView(view);


    }
}
