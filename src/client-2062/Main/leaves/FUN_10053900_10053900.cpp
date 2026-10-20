// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10053900 .. +0x160 bytes.
extern "C" __declspec(naked) void FUN_10053900_10053900() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 0fch], 0c8h
        ; Exact mapped bytes 0F 85 47 01 00 00: jne 0x10053a5a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 8]
        push edi
        test eax, eax
        ; Exact mapped bytes 75 36: jne 0x10053952
        __asm _emit 0x75
        __asm _emit 0x36
        mov edi, dword ptr [esi + 0dch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8E AA 09 00 00: mov cx, word ptr [esi + 0x9aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0f4h], 0ah
        mov eax, ecx
        sub eax, edi
        test eax, eax
        mov dword ptr [esi + 0e8h], eax
        ; Exact mapped bytes 7F 02: jg 0x10053945
        __asm _emit 0x7f
        __asm _emit 0x02
        mov eax, ecx
        mov dword ptr [esi + 0e8h], eax
        push 7
        ; Exact mapped bytes E9 C3 00 00 00: jmp 0x10053a15
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 3E: jne 0x10053995
        __asm _emit 0x75
        __asm _emit 0x3e
        mov edx, dword ptr [esi + 0dch]
        mov edi, dword ptr [esi + 0e0h]
        imul edi, edx
        xor eax, eax
        mov dword ptr [esi + 0f4h], 28h
        ; Exact mapped bytes 66 8B 86 AA 09 00 00: mov ax, word ptr [esi + 0x9aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [edx + eax]
        cmp ecx, edi
        mov dword ptr [esi + 0e8h], ecx
        ; Exact mapped bytes 7F 02: jg 0x10053988
        __asm _emit 0x7f
        __asm _emit 0x02
        mov eax, ecx
        mov dword ptr [esi + 0e8h], eax
        push 3
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x10053a15
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 3C: jne 0x100539d6
        __asm _emit 0x75
        __asm _emit 0x3c
        mov edx, dword ptr [esi + 0e4h]
        xor edi, edi
        ; Exact mapped bytes 66 8B BE AA 09 00 00: mov di, word ptr [esi + 0x9aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0f4h], 14h
        mov ecx, edi
        sub ecx, edx
        mov eax, ecx
        mov dword ptr [esi + 0e8h], ecx
        cdq
        idiv dword ptr [esi + 0dch]
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x100539cc
        __asm _emit 0x75
        __asm _emit 0x02
        mov ecx, edi
        mov dword ptr [esi + 0e8h], ecx
        push 5
        ; Exact mapped bytes EB 3F: jmp 0x10053a15
        __asm _emit 0xeb
        __asm _emit 0x3f
        cmp eax, 3
        ; Exact mapped bytes 75 45: jne 0x10053a20
        __asm _emit 0x75
        __asm _emit 0x45
        mov eax, dword ptr [esi + 0e4h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8E AA 09 00 00: mov cx, word ptr [esi + 0x9aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 0f4h], 1eh
        lea edi, [eax + ecx]
        mov eax, edi
        mov dword ptr [esi + 0e8h], edi
        cdq
        idiv dword ptr [esi + 0dch]
        cmp edx, 1
        ; Exact mapped bytes 74 02: je 0x10053a0d
        __asm _emit 0x74
        __asm _emit 0x02
        mov ecx, edi
        mov dword ptr [esi + 0e8h], ecx
        push 1
        mov ecx, dword ptr [esi + 44ch]
        ; Exact mapped bytes E8 B0 81 FD FF: call 0x1002bbd0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0e8h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8E AA 09 00 00: mov cx, word ptr [esi + 0x9aa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        cmp ecx, eax
        ; Exact mapped bytes 74 26: je 0x10053a5a
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, esi
        ; Exact mapped bytes E8 65 F0 FF FF: call 0x10052aa0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 0e8h]
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1
        push 1
        push edx
        ; Exact mapped bytes E8 5F 8E FF FF: call 0x1004c8b0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
