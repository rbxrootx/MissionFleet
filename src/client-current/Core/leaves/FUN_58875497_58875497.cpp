// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58875497 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_58875497_58875497() {
    __asm {
        mov edi, edi
        push esi
        ; Exact mapped bytes FF 15 78 41 89 58: call dword ptr [0x58894178]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 75 02: jne 0x588754a8
        __asm _emit 0x75
        __asm _emit 0x02
        pop esi
        ret
        push ebx
        push edi
        push esi
        ; Exact mapped bytes E8 10 FF FF FF: call 0x588753c0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        sub ebx, esi
        and ebx, 0fffffffeh
        push ebx
        ; Exact mapped bytes E8 13 7A FF FF: call 0x5886ced0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        pop ecx
        pop ecx
        test edi, edi
        ; Exact mapped bytes 74 0B: je 0x588754d0
        __asm _emit 0x74
        __asm _emit 0x0b
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 C3 73 FD FF: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x73
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        push 0
        ; Exact mapped bytes E8 39 77 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push esi
        ; Exact mapped bytes FF 15 40 43 89 58: call dword ptr [0x58894340]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, edi
        pop edi
        pop ebx
        pop esi
        ret
    }
}
