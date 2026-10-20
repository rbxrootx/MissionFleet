// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58855D05 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_58855d05_58855D05() {
    __asm {
        mov edi, edi
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edx, dword ptr [esi + 10h]
        lea eax, [edx + 4]
        mov dword ptr [esi + 10h], eax
        mov eax, 7fffffffh
        mov ebx, dword ptr [esi + 24h]
        cmp ebx, -1
        push dword ptr [esi + 28h]
        mov edi, dword ptr [edx]
        cmove ebx, eax
        movzx eax, word ptr [esi + 2eh]
        push eax
        push dword ptr [esi + 4]
        mov dword ptr [esi + 30h], edi
        push dword ptr [esi]
        ; Exact mapped bytes E8 0E C0 FF FF: call 0x58851d48
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test al, al
        ; Exact mapped bytes 74 1B: je 0x58855d5c
        __asm _emit 0x74
        __asm _emit 0x1b
        test edi, edi
        ; Exact mapped bytes 75 08: jne 0x58855d4d
        __asm _emit 0x75
        __asm _emit 0x08
        mov edi, 588c32c8h
        mov dword ptr [esi + 30h], edi
        push ebx
        push edi
        mov byte ptr [esi + 38h], 1
        ; Exact mapped bytes E8 68 36 00 00: call 0x588593c0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 15: jmp 0x58855d71
        __asm _emit 0xeb
        __asm _emit 0x15
        test edi, edi
        ; Exact mapped bytes 75 07: jne 0x58855d67
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [esi + 30h], 588c32d8h
        push 0
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 09 00 00 00: call 0x58855d7a
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        mov dword ptr [esi + 34h], eax
        mov al, 1
        pop esi
        pop ebx
        ret
    }
}
