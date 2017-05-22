package com.technapse.todomanager;

import android.support.v4.app.Fragment;
import android.support.v4.app.FragmentManager;
import android.support.v4.app.FragmentTransaction;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
            initFragment();

    }

    private void initFragment() {
        FragmentManager manager = getSupportFragmentManager();

        //add the list fragment to activity
        ToDoListFragment frag = new ToDoListFragment();

        Fragment listFrag = manager.findFragmentByTag("LIST");
        if(listFrag == null) {
           manager.beginTransaction().add(R.id.mainLayout, frag, "LIST").commit();
        }
    }

}
