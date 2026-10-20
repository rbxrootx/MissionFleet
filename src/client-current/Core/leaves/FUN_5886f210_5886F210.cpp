// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F210 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_5886f210_5886F210() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 74 0C: je 0x5886f229
        __asm _emit 0x74
        __asm _emit 0x0c
        push -20h
        xor edx, edx
        pop eax
        div esi
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 72 37: jb 0x5886f260
        __asm _emit 0x72
        __asm _emit 0x37
        imul esi, dword ptr [ebp + 0ch]
        xor eax, eax
        inc eax
        test esi, esi
        cmove esi, eax
        ; Exact mapped bytes EB 14: jmp 0x5886f24b
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes E8 24 A8 00 00: call 0x58879a60
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x5886f260
        __asm _emit 0x74
        __asm _emit 0x20
        push esi
        ; Exact mapped bytes E8 2A 54 FF FF: call 0x58864670
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x5886f260
        __asm _emit 0x74
        __asm _emit 0x15
        push esi
        push 8
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
        ; Exact mapped bytes 74 D9: je 0x5886f237
        __asm _emit 0x74
        __asm _emit 0xd9
        ; Exact mapped bytes EB 0D: jmp 0x5886f26d
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes E8 0A 32 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 0ch
        xor eax, eax
        pop esi
        pop ebp
        ret
    }
}
