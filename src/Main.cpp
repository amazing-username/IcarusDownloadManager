#include<iostream>
#include<string>

#include"Syncers/Download.h"
#include"Syncers/Upload.h"
#include"Managers/FileManager.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

using Managers::FileManager;
using Syncers::Download;
using Syncers::Upload;

string songPath;
string newSongPath;

int main(int argc, char** argv)
{
	cout<<"Argument size: "<<argc<<endl;
	switch(argc)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			songPath = argv[1];
			newSongPath = argv[2];
			break;
		default:
			break;
	}

	cout<<"Song path: "<<songPath<<endl;
	/**
	FileManager fm{songPath};
	fm.saveFile(newSongPath);

	Upload upS{songPath};
	upS.uploadSong();
	*/

	Download df{newSongPath};
	df.downloadSong(1);



	return 0;
}
