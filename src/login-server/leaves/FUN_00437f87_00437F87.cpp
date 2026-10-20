// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437F87 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_00437f87_00437F87() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov esi, 43f420h
        mov eax, dword ptr [esi]
        push 2
        push eax
        push eax
        lea eax, [ebp - 1ch]
        push 0
        push eax
        ; Exact mapped bytes FF 15 C0 C4 43 00: call dword ptr [0x43c4c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x437fc6
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dword ptr [ebp - 18h], 100h
        ; Exact mapped bytes 74 09: je 0x437fbb
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 18h], 104h
        ; Exact mapped bytes 75 1D: jne 0x437fd8
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 10h]
        shr eax, 10h
        test ah, 40h
        ; Exact mapped bytes 74 12: je 0x437fd8
        __asm _emit 0x74
        __asm _emit 0x12
        add esi, 4
        cmp esi, 43f45ch
        ; Exact mapped bytes 72 C2: jb 0x437f93
        __asm _emit 0x72
        __asm _emit 0xc2
        xor eax, eax
        pop esi
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 1
        pop eax
        ; Exact mapped bytes EB F6: jmp 0x437fd3
        __asm _emit 0xeb
        __asm _emit 0xf6
    }
}
