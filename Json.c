struct contact_persons
{
		char * contact_person_id;
		char * fname;
		char * lname;
		char * email;
};

struct data
{
	  char * contact_id;
	  char * contact_name;
	  char * street;
	  char * area;
	  char * city;
	  struct contact_persons * cp;
}d[2];
