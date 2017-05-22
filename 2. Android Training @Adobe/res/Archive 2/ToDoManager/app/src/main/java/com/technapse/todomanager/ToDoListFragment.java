package com.technapse.todomanager;


import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.support.v4.app.FragmentManager;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.TextView;


/**
 * A simple {@link Fragment} subclass.
 */
public class ToDoListFragment extends Fragment {

    TextView todoListTextView;
    Button addButton;

    //must be there
    public ToDoListFragment() {

    }

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,
                             Bundle savedInstanceState) {

        View view = inflater.inflate(R.layout.fragment_to_do_list, container, false);

        todoListTextView = (TextView) view.findViewById(R.id.textView);
        addButton = (Button) view.findViewById(R.id.button);
        addButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                FragmentManager manager = getFragmentManager();

                //add the list fragment to activity
                AddToDoFragment frag = new AddToDoFragment();
                manager.beginTransaction().remove(ToDoListFragment.this)
                                          .add(R.id.mainLayout, frag, "LIST")
                                          .commit();
            }
        });

        return view;
    }

}
