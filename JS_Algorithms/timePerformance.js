const { performance } = require("perf_hooks");

function contar(n){
  for(let i = 0; i < n; i++){
    console.log(i);
  }
}

function medir(fn){
  return (n)=> {
    let inicio = performance.now();
    fn(n);
    let final = performance.now();
    let tiempo = final - inicio;
    console.log(`Tiempo de ejecución: ${tiempo}\n`);
    return tiempo;
  }
}

const test1 = medir(contar);
test1(10);

const test2 = medir(contar);
test2(20);

const test3 = medir(contar);
test2(10);

const test4 = medir(contar);
test2(10);

const test5 = medir(contar);
test2(10);

/*
mongodb+srv://BeauMongo:Set.Fire.2.Rain*007@cluster0demo.8n28e.mongodb.net/


Beauser
SetFire2Rain007


mongodb+srv://<db_username>:<db_password>@cluster0demo.8n28e.mongodb.net/

mongodb+srv://Beauser:SetFire2Rain007@cluster0demo.8n28e.mongodb.net/

*/

const usuarios = [];

for (let i = 0; i < 100; i++) {

usuarios.push({

FirstName: User${i + 1},

LastName: Doe${i + 1},

rol: i % 2 === 0 ? ["admin", "analytics"] : ["user", "editor"],

StartDate: new Date(1990, i % 12, i % 28 + 1),

Age: 34+i

});



