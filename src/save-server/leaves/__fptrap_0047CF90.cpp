// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047CF90 .. +0xF bytes.
extern "C" __declspec(naked) void __fptrap_0047CF90() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes E8 F6 93 FE FF: call 0x466390
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x93
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
