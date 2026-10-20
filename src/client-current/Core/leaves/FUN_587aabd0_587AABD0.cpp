// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AABD0 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_587aabd0_587AABD0() {
    __asm {
        sub esp, 1ch
        push 1ch
        lea eax, [esp + 4]
        push eax
        push dword ptr [esp + 28h]
        ; Exact mapped bytes FF 15 7C 43 89 58: call dword ptr [0x5889437c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp dword ptr [esp + 10h], 1000h
        ; Exact mapped bytes 75 10: jne 0x587aabfe
        __asm _emit 0x75
        __asm _emit 0x10
        test byte ptr [esp + 14h], 0f0h
        ; Exact mapped bytes 74 09: je 0x587aabfe
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, 1
        add esp, 1ch
        ret
        xor eax, eax
        add esp, 1ch
        ret
    }
}
