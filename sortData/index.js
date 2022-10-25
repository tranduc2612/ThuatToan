const input = [
  { sub: "a", product: "a2" },
  { sub: "a", product: "a1" },
  { sub: "a", product: "a3" },
  { sub: "c", product: "c2" },
  { sub: "c", product: "c1" },
  { sub: "c", product: "c3" },
  { sub: "b", product: "b2" },
  { sub: "b", product: "b1" },
  { sub: "b", product: "b3" },
];
const output = [
  { sub: "a", product: ["a2", "a1", "a3"] },
  { sub: "c", product: ["c2", "c1", "c3"] },
  { sub: "b", product: ["b2", "b1", "b3"] },
];

//  cach 1 // On^2
// let newArr = [];
// let subNew;
// input.forEach((e) => {
//   if (subNew != e.sub) {
//     newArr.push({ sub: e.sub, product: [] });
//     subNew = e.sub;
//   }
// });

// newArr.forEach((i) => {
//   input.forEach((j) => {
//     if (i.sub == j.sub) {
//       i.product.push(j.product);
//     }
//   });
// });

// console.log(newArr);

// cach 2 // O(n)
const myMap = new Map();
let subInit;
input.forEach((e) => {
  if (e.sub != subInit) {
    myMap.set(e.sub, []);
    subInit = e.sub;
  }
  myMap.get(e.sub).push(e.product);
});

const res = [];
myMap.forEach((value, key) => {
  res.push({ sub: key, product: [...value] });
});
console.log(res);
