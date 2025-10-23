#include <iostream>

using namespace std;

// The following program enums represent time blocks and days of the week.

enum Block
{
    Mo1,
    Mo2,
    Mo3,
    Mo4,
    Mo5,
    Mo6,
    Mo7,
    Di1,
    Di2,
    Di3,
    Di4,
    Di5,
    Di6,
    Di7,
    Mi1,
    Mi2,
    Mi3,
    Mi4,
    Mi5,
    Mi6,
    Mi7,
    Do1,
    Do2,
    Do3,
    Do4,
    Do5,
    Do6,
    Do7,
    Fr1,
    Fr2,
    Fr3,
    Fr4,
    Fr5,
    Fr6,
    Fr7,
    Sa1,
    Sa2,
    Sa3,
    Sa4,
    Sa5,
    Sa6,
    Sa7
};

enum Tag
{
    MO,
    DI,
    MI,
    DO,
    FR,
    SA
};

Tag blockToTag(Block b)
{
    switch (b)
    {
    case Mo1:
    case Mo2:
    case Mo3:
    case Mo4:
    case Mo5:
    case Mo6:
    case Mo7:
        return MO;

    case Di1:
    case Di2:
    case Di3:
    case Di4:
    case Di5:
    case Di6:
    case Di7:
        return DI;

    case Mi1:
    case Mi2:
    case Mi3:
    case Mi4:
    case Mi5:
    case Mi6:
    case Mi7:
        return MI;

    case Do1:
    case Do2:
    case Do3:
    case Do4:
    case Do5:
    case Do6:
    case Do7:
        return DO;

    case Fr1:
    case Fr2:
    case Fr3:
    case Fr4:
    case Fr5:
    case Fr6:
    case Fr7:
        return FR;

    case Sa1:
    case Sa2:
    case Sa3:
    case Sa4:
    case Sa5:
    case Sa6:
    case Sa7:
        return SA;
    }

    return MO; //
}

bool istDienstagNachmittag(Block b)
{
    switch (b)
    {
    case Di4:
    case Di5:
    case Di6:
    case Di7:
        return true;

    default:
        return false;
    }
}

int main()
{
    Block block1 = Mo1;
    Tag tag1 = blockToTag(block1);
    cout << "Block 1 findet am " << (tag1 == MO ? "MO" : "kein Block am MO") << " statt." << endl;

    Block block2 = Di4;
    bool istDienstagNachmittag2 = istDienstagNachmittag(block2);
    cout << "Block 2 findet am " << (istDienstagNachmittag2 ? "Dienstag Nachmittag" : "kein Block am DI") << " statt." << endl;

    Block block3 = Mi3;
    Tag tag3 = blockToTag(block3);
    cout << "Block 3 findet am " << (tag3 == MI ? "MI" : "kein Block am MI") << " statt." << endl;

    Block block4 = Do4;
    Tag tag4 = blockToTag(block4);
    cout << "Block 4 findet am " << (tag4 == DO ? "DO" : "kein Block am DO") << " statt." << endl;

    Block block5 = Fr5;
    Tag tag5 = blockToTag(block5);
    cout << "Block 5 findet am " << (tag5 == FR ? "FR" : "kein Block am FR") << " statt." << endl;

    Block block6 = Sa6;
    Tag tag6 = blockToTag(block6);
    cout << "Block 6 findet am " << (tag6 == SA ? "SA" : "kein Block am SA") << " statt." << endl;

    return 0;
}
