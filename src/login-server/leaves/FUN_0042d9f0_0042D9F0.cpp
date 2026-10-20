// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D9F0 .. +0x12 bytes.
extern "C" __declspec(naked) void FUN_0042d9f0_0042D9F0() {
    __asm {
        ; Exact mapped bytes 6A 40: push 0x40
        __asm _emit 0x6a
        __asm _emit 0x40
        ; Exact mapped bytes 68 10 02 00 00: push 0x210
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B9 18 DC 44 00: mov ecx, 0x44dc18
        __asm _emit 0xb9
        __asm _emit 0x18
        __asm _emit 0xdc
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 19 9D FE FF: call 0x41771a
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
