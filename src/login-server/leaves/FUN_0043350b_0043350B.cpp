// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043350B .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_0043350b_0043350B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 104h
        push esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        test edi, edi
        mov esi, edi
        ; Exact mapped bytes 75 0D: jne 0x43352c
        __asm _emit 0x75
        __asm _emit 0x0d
        lea esi, [ebp - 104h]
        mov dword ptr [ebp + 10h], 104h
        push dword ptr [ebp + 10h]
        push esi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BE 58 FF FF: call 0x428df6
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0E: je 0x43354b
        __asm _emit 0x74
        __asm _emit 0x0e
        push dword ptr [ebp + 10h]
        push edi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C8 3E 00 00: call 0x437411
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x43355b
        __asm _emit 0xeb
        __asm _emit 0x10
        test edi, edi
        ; Exact mapped bytes 75 0A: jne 0x433559
        __asm _emit 0x75
        __asm _emit 0x0a
        push esi
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        inc eax
        ; Exact mapped bytes EB 02: jmp 0x43355b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
