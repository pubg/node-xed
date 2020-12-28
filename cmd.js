const xed = require('./index');
const argv = require('yargs').argv;

if (argv._.length) {
  const data = new Uint8Array(argv._.map(p => parseInt(p, 16)));
  const insns = xed.disassemble(data, 0);

  insns.forEach(insn => console.log(insn.addr, insn.asm));
}
