// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798530 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_58798530_58798530() {
    __asm {
        mov eax, dword ptr [ecx]
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov esi, dword ptr [eax + 4]
        mov dword ptr [edi], esi
        cmp byte ptr [esi + 0dh], 0
        mov dword ptr [edi + 4], 0
        mov dword ptr [edi + 8], eax
        ; Exact mapped bytes 75 2F: jne 0x5879857c
        __asm _emit 0x75
        __asm _emit 0x2f
        push ebx
        mov ebx, dword ptr [esp + 14h]
        push ebx
        lea ecx, [esi + 10h]
        mov dword ptr [edi], esi
        ; Exact mapped bytes E8 93 0E 00 00: call 0x587993f0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 07: je 0x58798568
        __asm _emit 0x74
        __asm _emit 0x07
        mov esi, dword ptr [esi + 8]
        xor eax, eax
        ; Exact mapped bytes EB 0A: jmp 0x58798572
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [edi + 8], esi
        mov eax, 1
        mov esi, dword ptr [esi]
        mov dword ptr [edi + 4], eax
        cmp byte ptr [esi + 0dh], 0
        ; Exact mapped bytes 74 D7: je 0x58798552
        __asm _emit 0x74
        __asm _emit 0xd7
        pop ebx
        mov eax, edi
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
