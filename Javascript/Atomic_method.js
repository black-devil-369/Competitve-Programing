var buf = new SharedArrayBuffer(25);
var sab = new SharedArrayBuffer(1024)
var b = new SharedArrayBuffer(40)
var arr = new Uint8Array(buf);
var int32 = new Int32Array(sab);
var int8 = new Uint16Array(b)
int8[0] = 64;
int32[0]= 53;
arr[0] = 6;
// Atomic.compareExchange(arraytype, index, exceptedvalue, exchangevalue)
console.log(Atomics.compareExchange(arr,0,6,9))
// Atomic.load(typedarray,index)==> give the element at a given index
console.log(Atomics.load(arr,0))
// Atomic.add(arraytype,index,value) method
console.log(Atomics.add(arr,0,7));
console.log(Atomics.load(arr,0));
// Atomic.exchange(arratype, index , value)
console.log(Atomics.exchange(arr,0,10))
console.log(Atomics.load(arr,0))
// Atomic.notify(typedarray,index, count)
console.log(Atomics.notify(int32,0,1))
// Atomic.store(typedarray, index, value)
console.log(Atomics.store(int32,0,134))
console.log(Atomics.load(int32,0))
// Atomic.sub(typedarray,index,value)
console.log(Atomics.sub(int8,0,14))
console.log(Atomics.load(int8,0))

