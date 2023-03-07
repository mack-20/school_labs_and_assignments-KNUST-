#include <iostream>
#include <list>
using namespace std;


class YoutubeChannel{
private:
	string name;
	string OwnerName;
	list<string> PublishedVideoTitles;
	unsigned int SubscriberCount;

public:
	void GetInfo();
	YoutubeChannel(string name,string OwnerName);
	~YoutubeChannel();
	void Subscribe();
	void Unsubscribe();
	string getName();
	void setName(string name);
	void PublishVideo();
};




int main(){
	YoutubeChannel ytChannel = YoutubeChannel("Veritasium","Vera");
	ytChannel.PublishVideo();

	//Unsubscribes from channel
	ytChannel.Unsubscribe();

	//Adds= 20 subscribers
	for (int count = 0; count < 20; count++)
		ytChannel.Subscribe();

	ytChannel.GetInfo();
	return 0;
}





void YoutubeChannel::GetInfo(){
	cout << "Channel Name: "<<name<<endl;
	cout << "Owner: "<<OwnerName<<endl;
	cout << "Number of Subscribers: "<<SubscriberCount<<endl;
	cout << "Published Videos: ";
	for(string videoTitle : PublishedVideoTitles){
		cout <<"[ "<<videoTitle<<" "<<" ]";
	}
	cout <<"\n\n";
}

YoutubeChannel::YoutubeChannel(string name,string OwnerName):name(name),OwnerName(OwnerName),SubscriberCount(0){
}

YoutubeChannel::~YoutubeChannel(){
	cout << name << " is being deleted.";
}

void YoutubeChannel::Subscribe(){
	SubscriberCount++;
}

void YoutubeChannel::Unsubscribe(){
	if( SubscriberCount > 0)
		SubscriberCount--;

	else
		cout<<"You have no subsrcibers."<<endl;
}

string YoutubeChannel::getName(){
	return name;
}

void YoutubeChannel::setName(string name){
	this -> name = name;
}

void YoutubeChannel::PublishVideo(){
	string video;
	cout<<"Enter title of video to be published: ";
	getline(cin,video);
	PublishedVideoTitles.push_back(video);
}