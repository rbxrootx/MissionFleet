// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58855C92 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_58855c92_58855C92() {
    __asm {
        mov edi, edi
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov edx, dword ptr [edi + 10h]
        lea eax, [edx + 4]
        mov dword ptr [edi + 10h], eax
        mov eax, 7fffffffh
        mov ebx, dword ptr [edi + 24h]
        cmp ebx, -1
        push dword ptr [edi + 28h]
        mov esi, dword ptr [edx]
        cmove ebx, eax
        movzx eax, byte ptr [edi + 2dh]
        push eax
        push dword ptr [edi + 4]
        mov dword ptr [edi + 30h], esi
        push dword ptr [edi]
        ; Exact mapped bytes E8 50 C0 FF FF: call 0x58851d17
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test al, al
        ; Exact mapped bytes 74 19: je 0x58855ce7
        __asm _emit 0x74
        __asm _emit 0x19
        test esi, esi
        ; Exact mapped bytes 75 08: jne 0x58855cda
        __asm _emit 0x75
        __asm _emit 0x08
        mov esi, 588c32c8h
        mov dword ptr [edi + 30h], esi
        push ebx
        push esi
        mov byte ptr [edi + 38h], 1
        ; Exact mapped bytes E8 DB 36 00 00: call 0x588593c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 13: jmp 0x58855cfa
        __asm _emit 0xeb
        __asm _emit 0x13
        test esi, esi
        ; Exact mapped bytes 75 08: jne 0x58855cf3
        __asm _emit 0x75
        __asm _emit 0x08
        mov esi, 588c32d8h
        mov dword ptr [edi + 30h], esi
        push ebx
        push esi
        ; Exact mapped bytes E8 36 34 00 00: call 0x58859130
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov dword ptr [edi + 34h], eax
        mov al, 1
        pop edi
        pop esi
        pop ebx
        ret
    }
}
