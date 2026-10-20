// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588BDCD0 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_588bdcd0() {
    __asm {
        push ebx
        push esi
        mov esi, 2
        mov ebx, ecx
        cmp dword ptr [esp + 10h], esi
        ; Exact mapped bytes 0F 85 B8 00 00 00: jne 0x588bdd9b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0ch]
        cmp eax, dword ptr [ebx + 94h]
        ; Exact mapped bytes 75 3B: jne 0x588bdd2a
        __asm _emit 0x75
        __asm _emit 0x3b
        mov al, byte ptr [ebx + 0aeh]
        push edi
        mov byte ptr [ebx + 0adh], al
        mov dword ptr [ebx + 3d0h], 1
        lea edi, [ebx + 0b0h]
        lea esi, [ebx + 240h]
        mov ecx, 64h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 8]
        mov ecx, ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ebx + 98h]
        ; Exact mapped bytes 75 18: jne 0x588bdd4a
        __asm _emit 0x75
        __asm _emit 0x18
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebx + 3d0h], 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ebx + 9ch]
        ; Exact mapped bytes 75 0C: jne 0x588bdd5e
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes E8 79 FB FF FF: call 0x588bd8d0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ebx + 0a0h]
        ; Exact mapped bytes 75 0C: jne 0x588bdd72
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes E8 B5 FB FF FF: call 0x588bd920
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ebx + 0a4h]
        ; Exact mapped bytes 75 21: jne 0x588bdd9b
        __asm _emit 0x75
        __asm _emit 0x21
        mov ecx, dword ptr [ebx + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        push 0
        push 0f230h
        push ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [edx + 8]
        mov ecx, ebx
        mov dword ptr [ebx + 3d0h], esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
