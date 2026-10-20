// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58859CC0 .. +0x109 bytes.
extern "C" __declspec(naked) void FUN_58859cc0() {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        mov eax, ebp
        imul eax, eax, 0d4h
        push esi
        mov esi, ecx
        movzx ecx, word ptr [eax + esi + 270h]
        push edi
        lea edi, [eax + esi + 270h]
        lea eax, [esi + ecx*4 + 8a4h]
        mov ecx, dword ptr [eax]
        mov ebx, ecx
        xor ebx, 0aah
        ; Exact mapped bytes 7E 3C: jle 0x58859d30
        __asm _emit 0x7e
        __asm _emit 0x3c
        push ecx
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 3F 79 F4 FF: call 0x587a1640
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x79
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx edx, word ptr [edi]
        dec ebx
        xor ebx, 0aah
        mov dword ptr [esi + edx*4 + 8a4h], ebx
        movzx eax, word ptr [edi]
        mov ecx, dword ptr [esi + eax*4 + 8a4h]
        lea eax, [esi + eax*4 + 8a4h]
        push ecx
        ; Exact mapped bytes 8B 0D FC 45 A2 58: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 B0 78 F4 FF: call 0x587a15e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x78
        __asm _emit 0xf4
        __asm _emit 0xff
        add dword ptr [esi + ebp*4 + 8c8h], -1
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x58859dc2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, esi
        mov dword ptr [esi + ebp*4 + 138h], 1
        ; Exact mapped bytes E8 7E EE FF FF: call 0x58858bd0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        ; Exact mapped bytes E8 22 C2 F8 FF: call 0x587e5f80
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xc2
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp ebp, dword ptr [esi + 0f4h]
        ; Exact mapped bytes 75 5C: jne 0x58859dc2
        __asm _emit 0x75
        __asm _emit 0x5c
        ; Exact mapped bytes A1 A0 46 A2 58: mov eax, dword ptr [0x58a246a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 17h
        ; Exact mapped bytes 7E 16: jle 0x58859d8a
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x58859d8a
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 5c0h
        ; Exact mapped bytes EB 02: jmp 0x58859d8c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esi, dword ptr [esi + 0a7ch]
        mov dword ptr [esi + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x58859dc2
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [esi + 0ch], edx
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [esi + 10h], ecx
        mov edx, dword ptr [eax + 20h]
        add eax, 20h
        lea ecx, [esi + 14h]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
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
