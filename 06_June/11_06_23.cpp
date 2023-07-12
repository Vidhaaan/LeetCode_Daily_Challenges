// Problem: 1146. Snapshot Array
// Date: 11th June

class SnapshotArray
{
public:
    int snap_id = 0;
    vector<map<int, int>> a;
    SnapshotArray(int length)
    {
        a.resize(length);
        for (int i = 0; i < length; i++)
        {
            a[i][0] = 0;
        }
    }

    void set(int index, int val)
    {
        a[index][snap_id] = val;
    }

    int snap()
    {

        return ++snap_id - 1;
    }

    int get(int index, int snap_id)
    {
        if (a[index].find(snap_id) == a[index].end())
        {
            auto it = --a[index].lower_bound(snap_id);
            return it->second;
        }
        return a[index][snap_id];
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */