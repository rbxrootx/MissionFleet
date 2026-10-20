// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890AF00 .. +0x1A2 bytes.
extern "C" __declspec(naked) void FUN_5890af00() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 8]
        sub esp, 8
        add eax, -23h
        push esi
        mov esi, ecx
        cmp eax, 0bh
        ; Exact mapped bytes 0F 87 86 01 00 00: ja 0x5890b09f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [eax + 5890b0bch]
        push edi
        ; Exact mapped bytes FF 24 8D AC B0 90 58: jmp dword ptr [ecx*4 + 0x5890b0ac]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xac
        __asm _emit 0xb0
        __asm _emit 0x90
        __asm _emit 0x58
        mov edx, dword ptr [esi + 88h]
        mov edi, dword ptr [esi + 84h]
        mov eax, dword ptr [esi + 90h]
        lea ecx, [edi + edx]
        cmp eax, ecx
        ; Exact mapped bytes 0F 8D 59 01 00 00: jge 0x5890b09e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        add eax, ecx
        test byte ptr [eax], 80h
        ; Exact mapped bytes 75 49: jne 0x5890af9b
        __asm _emit 0x75
        __asm _emit 0x49
        test byte ptr [eax - 1], 80h
        ; Exact mapped bytes 75 43: jne 0x5890af9b
        __asm _emit 0x75
        __asm _emit 0x43
        mov eax, dword ptr [esi + 90h]
        lea ecx, [edx - 1]
        mov dword ptr [esi + 88h], ecx
        add ecx, edi
        cmp eax, ecx
        ; Exact mapped bytes 0F 8F 2D 01 00 00: jg 0x5890b09e
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 80h]
        lea ecx, [eax + edx]
        mov dl, byte ptr [ecx + 1]
        mov byte ptr [ecx], dl
        mov ecx, dword ptr [esi + 84h]
        add ecx, dword ptr [esi + 88h]
        inc eax
        cmp eax, ecx
        ; Exact mapped bytes 7E E1: jle 0x5890af71
        __asm _emit 0x7e
        __asm _emit 0xe1
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        lea ecx, [edi - 2]
        mov dword ptr [esi + 84h], ecx
        add ecx, edx
        cmp eax, ecx
        ; Exact mapped bytes 0F 8F EA 00 00 00: jg 0x5890b09e
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 80h]
        lea ecx, [eax + edx]
        mov dl, byte ptr [ecx + 2]
        mov byte ptr [ecx], dl
        mov ecx, dword ptr [esi + 84h]
        add ecx, dword ptr [esi + 88h]
        inc eax
        cmp eax, ecx
        ; Exact mapped bytes 7E E1: jle 0x5890afb4
        __asm _emit 0x7e
        __asm _emit 0xe1
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        mov dword ptr [esi + 90h], 0
        mov dword ptr [esi + 94h], 0
        pop esi
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi + 88h]
        mov eax, dword ptr [esi + 84h]
        mov ecx, dword ptr [esi + 50h]
        add eax, edx
        mov edx, dword ptr [esi + 94h]
        push ebx
        mov dword ptr [esi + 90h], eax
        mov edi, dword ptr [ecx]
        sub eax, edx
        lea ebx, [esp + 0ch]
        push ebx
        push eax
        mov eax, dword ptr [esi + 80h]
        add eax, edx
        mov edx, dword ptr [edi + 4]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 50h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [esi + 1ch]
        add ecx, dword ptr [esp + 0ch]
        sub edx, dword ptr [esi + 14h]
        cmp ecx, edx
        ; Exact mapped bytes 7C 56: jl 0x5890b09d
        __asm _emit 0x7c
        __asm _emit 0x56
        ; Exact mapped bytes EB 07: jmp 0x5890b050
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        mov edx, dword ptr [esi + 80h]
        cmp byte ptr [eax + edx], 0
        ; Exact mapped bytes 7D 05: jge 0x5890b067
        __asm _emit 0x7d
        __asm _emit 0x05
        add eax, 2
        ; Exact mapped bytes EB 01: jmp 0x5890b068
        __asm _emit 0xeb
        __asm _emit 0x01
        inc eax
        mov ecx, dword ptr [esi + 50h]
        lea ebx, [esp + 0ch]
        push ebx
        mov ebx, dword ptr [esi + 90h]
        sub ebx, eax
        mov dword ptr [esi + 94h], eax
        mov edi, dword ptr [ecx]
        add eax, edx
        push ebx
        push eax
        mov eax, dword ptr [edi + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [esi + 1ch]
        add edx, dword ptr [esp + 0ch]
        sub eax, dword ptr [esi + 14h]
        cmp edx, eax
        ; Exact mapped bytes 7D B3: jge 0x5890b050
        __asm _emit 0x7d
        __asm _emit 0xb3
        pop ebx
        pop edi
        mov eax, dword ptr [esi + 34h]
    }
}
