// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004CAD0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_1004cad0_1004CAD0() {
    __asm {
        ; Exact mapped bytes A1 18 57 1C 10: mov eax, dword ptr [0x101c5718]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 1c8h]
        ; Exact mapped bytes 66 83 BA 9C 01 00 00 04: cmp word ptr [edx + 0x19c], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 14: jne 0x1004caf9
        __asm _emit 0x75
        __asm _emit 0x14
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80010d04h
        ; Exact mapped bytes E8 57 F4 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf4
        __asm _emit 0x11
        __asm _emit 0x00
        ret
    }
}
