// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041211C .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_0041211c_0041211C() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        mov ebx, ecx
        xor ebp, ebp
        mov edi, esi
        mov al, byte ptr [esi]
        test al, al
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x4121b5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 27h
        ; Exact mapped bytes 75 31: jne 0x412169
        __asm _emit 0x75
        __asm _emit 0x31
        push esi
        ; Exact mapped bytes E8 AF D6 00 00: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [eax], 27h
        pop ecx
        ; Exact mapped bytes 75 18: jne 0x41215c
        __asm _emit 0x75
        __asm _emit 0x18
        mov al, byte ptr [esi]
        push esi
        mov byte ptr [edi], al
        ; Exact mapped bytes E8 9F D6 00 00: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov esi, eax
        ; Exact mapped bytes E8 97 D6 00 00: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov edi, eax
        pop ecx
        ; Exact mapped bytes EB 09: jmp 0x412165
        __asm _emit 0xeb
        __asm _emit 0x09
        xor eax, eax
        test ebp, ebp
        sete al
        mov ebp, eax
        mov al, byte ptr [esi]
        ; Exact mapped bytes EB 17: jmp 0x412180
        __asm _emit 0xeb
        __asm _emit 0x17
        test ebp, ebp
        ; Exact mapped bytes 75 13: jne 0x412180
        __asm _emit 0x75
        __asm _emit 0x13
        cmp al, 5bh
        ; Exact mapped bytes 75 25: jne 0x412196
        __asm _emit 0x75
        __asm _emit 0x25
        push esi
        ; Exact mapped bytes E8 76 D6 00 00: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [eax], 5bh
        pop ecx
        ; Exact mapped bytes 74 29: je 0x4121a6
        __asm _emit 0x74
        __asm _emit 0x29
        mov al, byte ptr [ebx + 14h]
        mov byte ptr [edi], al
        push esi
        ; Exact mapped bytes E8 65 D6 00 00: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov esi, eax
        ; Exact mapped bytes E8 5D D6 00 00: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov edi, eax
        pop ecx
        ; Exact mapped bytes EB 94: jmp 0x41212a
        __asm _emit 0xeb
        __asm _emit 0x94
        cmp al, 5dh
        ; Exact mapped bytes 75 E6: jne 0x412180
        __asm _emit 0x75
        __asm _emit 0xe6
        push esi
        ; Exact mapped bytes E8 4D D6 00 00: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [eax], 5dh
        pop ecx
        ; Exact mapped bytes 75 D7: jne 0x41217d
        __asm _emit 0x75
        __asm _emit 0xd7
        mov al, byte ptr [esi]
        push esi
        mov byte ptr [edi], al
        ; Exact mapped bytes E8 3D D6 00 00: call 0x41f7ed
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esi, eax
        ; Exact mapped bytes EB CD: jmp 0x412182
        __asm _emit 0xeb
        __asm _emit 0xcd
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
