// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588714F0 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_588714f0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes 83 E4 F0: and esp, 0xfffffff0
        __asm _emit 0x83
        __asm _emit 0xe4
        __asm _emit 0xf0
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes F3 0F 7E 04 24: movq xmm0, qword ptr [esp]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 08 00 00 00: call 0x5887150e
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C9: leave
        __asm _emit 0xc9
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
