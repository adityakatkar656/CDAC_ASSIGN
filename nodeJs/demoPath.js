const p = require('path');
console.log("Name " + __dirname);
console.log("File "+ __filename);

const d = p.join(__dirname  , 'd.json')
console.log(d);