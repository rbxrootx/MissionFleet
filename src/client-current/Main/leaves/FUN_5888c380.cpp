// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888C380 .. +0x13B bytes.
extern "C" __declspec(naked) void FUN_5888c380() {
    __asm {
        push esi
        push edi
        mov edi, 2
        mov esi, ecx
        cmp dword ptr [esp + 10h], edi
        ; Exact mapped bytes 0F 85 21 01 00 00: jne 0x5888c4b4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 0ch]
        lea ecx, [esi + 6ch]
        push ebx
        cmp eax, dword ptr [ecx]
        ; Exact mapped bytes 75 26: jne 0x5888c3c5
        __asm _emit 0x75
        __asm _emit 0x26
        mov edx, ecx
        lea esi, [edi + 3]
        mov eax, dword ptr [edx]
        mov ebx, 0fffdh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add edx, 4
        sub esi, 1
        ; Exact mapped bytes 75 ED: jne 0x5888c3a4
        __asm _emit 0x75
        __asm _emit 0xed
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes 66 09 79 24: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 70h]
        ; Exact mapped bytes 75 28: jne 0x5888c3f2
        __asm _emit 0x75
        __asm _emit 0x28
        mov edx, 5
        nop
        mov eax, dword ptr [ecx]
        mov ebx, 0fffdh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x5888c3d0
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, dword ptr [esi + 70h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 74h]
        ; Exact mapped bytes 75 2B: jne 0x5888c422
        __asm _emit 0x75
        __asm _emit 0x2b
        mov edx, 5
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov ebx, 0fffdh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x5888c400
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, dword ptr [esi + 74h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 78h]
        ; Exact mapped bytes 75 2B: jne 0x5888c452
        __asm _emit 0x75
        __asm _emit 0x2b
        mov edx, 5
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov ebx, 0fffdh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x5888c430
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, dword ptr [esi + 78h]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 7ch]
        ; Exact mapped bytes 75 2B: jne 0x5888c482
        __asm _emit 0x75
        __asm _emit 0x2b
        mov edx, 5
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov ebx, 0fffdh
        ; Exact mapped bytes 66 21 58 24: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x5888c460
        __asm _emit 0x75
        __asm _emit 0xed
        mov eax, dword ptr [esi + 7ch]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 84h]
        ; Exact mapped bytes 75 18: jne 0x5888c4a2
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, esi
        ; Exact mapped bytes E8 CF F9 FF FF: call 0x5888be60
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 88h]
        ; Exact mapped bytes 75 09: jne 0x5888c4b3
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
