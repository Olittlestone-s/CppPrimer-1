class Base{};

class Pub_Dev : public Base {};
class Prot_Dev : protected Base {};
class Priv_Dev : private Base {};

class PPub_Dev : public Pub_Dev{};
class PProt_Dev : public Prot_Dev{};
class PPriv_Dev : public Priv_Dev{};

Base *p0 = new Pub_Dev();
// Base *p1 = new Prot_Dev();
// Base *p2 = new Priv_Dev();

Base *p3 = new PPub_Dev();
// Base *p4 = new PProt_Dev();
// Base *p5 = new PPriv_Dev();

