// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413EC7 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_00413ec7_00413EC7() {
    __asm {
        push 43d570h
        push dword ptr [esp + 8]
        ; Exact mapped bytes E8 20 00 00 00: call 0x413ef5
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x413ede
        __asm _emit 0x74
        __asm _emit 0x05
        push 1
        pop eax
        ; Exact mapped bytes EB 14: jmp 0x413ef2
        __asm _emit 0xeb
        __asm _emit 0x14
        push 43d674h
        push dword ptr [esp + 8]
        ; Exact mapped bytes E8 09 00 00 00: call 0x413ef5
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        neg eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
