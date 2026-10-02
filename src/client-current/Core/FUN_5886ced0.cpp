// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886CED0 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_5886ced0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        cmp esi, -20h
        ; Exact mapped bytes 77 33: ja 0x5886cf11
        __asm _emit 0x77
        __asm _emit 0x33
        xor eax, eax
        inc eax
        test esi, esi
        cmove esi, eax
        ; Exact mapped bytes EB 14: jmp 0x5886cefc
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes E8 73 CB 00 00: call 0x58879a60
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x5886cf11
        __asm _emit 0x74
        __asm _emit 0x20
        push esi
        ; Exact mapped bytes E8 79 77 FF FF: call 0x58864670
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5886cf11
        __asm _emit 0x74
        __asm _emit 0x15
        push esi
        push 0
        ; Exact mapped bytes FF 35 70 9C 96 58: push dword ptr [0x58969c70]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x70
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes FF 15 5C 41 89 58: call dword ptr [0x5889415c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 D9: je 0x5886cee8
        __asm _emit 0x74
        __asm _emit 0xd9
        ; Exact mapped bytes EB 0D: jmp 0x5886cf1e
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes E8 59 55 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 0ch
        xor eax, eax
        pop esi
        pop ebp
        ret
    }
}
