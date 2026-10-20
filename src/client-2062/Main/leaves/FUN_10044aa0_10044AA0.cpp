// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10044AA0 .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_10044aa0_10044AA0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push ebx
        push esi
        push edi
        test eax, eax
        mov ebx, ecx
        ; Exact mapped bytes 74 47: je 0x10044af4
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 66 8B 88 9A 00 00 00: mov cx, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [ebx + 260h]
        and ecx, 0f00h
        mov esi, eax
        cmp ecx, 100h
        mov ecx, 2bh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        push 78h
        ; Exact mapped bytes 75 04: jne 0x10044ad7
        __asm _emit 0x75
        __asm _emit 0x04
        push 50h
        ; Exact mapped bytes EB 0A: jmp 0x10044ae1
        __asm _emit 0xeb
        __asm _emit 0x0a
        xor edx, edx
        ; Exact mapped bytes 66 8B 90 9C 00 00 00: mov dx, word ptr [eax + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        push 3fffh
        ; Exact mapped bytes E8 F5 D2 FD FF: call 0x10021de0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebx + 25ch], eax
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x10044b43
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 66 8B 88 9A 00 00 00: mov cx, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edi, [ebx + 314h]
        and ecx, 0f00h
        mov esi, eax
        cmp ecx, 100h
        mov ecx, 2bh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        push 78h
        ; Exact mapped bytes 75 04: jne 0x10044b26
        __asm _emit 0x75
        __asm _emit 0x04
        push 50h
        ; Exact mapped bytes EB 0A: jmp 0x10044b30
        __asm _emit 0xeb
        __asm _emit 0x0a
        xor edx, edx
        ; Exact mapped bytes 66 8B 90 9C 00 00 00: mov dx, word ptr [eax + 0x9c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        push 3fffh
        ; Exact mapped bytes E8 A6 D2 FD FF: call 0x10021de0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebx + 310h], eax
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
