// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886A8A0 .. +0x19 bytes.
extern "C" __declspec(naked) void FUN_5886a8a0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 10: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x10
        ; Exact mapped bytes 83 E4 F0: and esp, 0xfffffff0
        __asm _emit 0x83
        __asm _emit 0xe4
        __asm _emit 0xf0
        ; Exact mapped bytes D9 C9: fxch st(1)
        __asm _emit 0xd9
        __asm _emit 0xc9
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes DD 5C 24 08: fstp qword ptr [esp + 8]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes E8 02 00 00 00: call 0x5886a8b9
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C9: leave
        __asm _emit 0xc9
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
