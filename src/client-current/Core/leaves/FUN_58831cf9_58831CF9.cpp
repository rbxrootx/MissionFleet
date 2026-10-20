// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58831CF9 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_58831cf9_58831CF9() {
    __asm {
        push 0ch
        push 588ec5c0h
        ; Exact mapped bytes E8 5B 0A 00 00: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 19h], 0
        mov ebx, dword ptr [ebp + 0ch]
        mov eax, ebx
        mov edi, dword ptr [ebp + 10h]
        imul eax, edi
        mov esi, dword ptr [ebp + 8]
        add esi, eax
        mov dword ptr [ebp + 8], esi
        mov dword ptr [ebp - 4], 0
        mov eax, edi
        dec edi
        mov dword ptr [ebp + 10h], edi
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x58831d42
        __asm _emit 0x74
        __asm _emit 0x15
        sub esi, ebx
        mov dword ptr [ebp + 8], esi
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, esi
        ; Exact mapped bytes FF 55 14: call dword ptr [ebp + 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x14
        ; Exact mapped bytes EB E1: jmp 0x58831d23
        __asm _emit 0xeb
        __asm _emit 0xe1
        mov al, 1
        mov byte ptr [ebp - 19h], al
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 1E 00 00 00: call 0x58831d71
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
