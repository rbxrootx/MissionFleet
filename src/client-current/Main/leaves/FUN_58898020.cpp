// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58898020 .. +0x214 bytes.
extern "C" __declspec(naked) void FUN_58898020() {
    __asm {
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx + 0cc0h]
        movzx eax, word ptr [edx + 4]
        and eax, 1fh
        dec eax
        cmp eax, 8
        ; Exact mapped bytes 0F 87 F0 01 00 00: ja 0x58898232
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 34 82 89 58: jmp dword ptr [eax*4 + 0x58898234]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x82
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [esi + 148h]
        add eax, 2
        cmp eax, 80h
        mov dword ptr [esi + 184h], 5
        ; Exact mapped bytes 7F 18: jg 0x5889807b
        __asm _emit 0x7f
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 108h]
        mov edx, dword ptr [ecx + 64h]
        cmp edx, dword ptr [esi + 19ch]
        ; Exact mapped bytes 7D 07: jge 0x5889807b
        __asm _emit 0x7d
        __asm _emit 0x07
        push 2
        ; Exact mapped bytes E8 25 F2 06 00: call 0x589072a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [esi + 1ach], 1
        ; Exact mapped bytes 0F 85 AA 01 00 00: jne 0x58898232
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        pop esi
        ; Exact mapped bytes E9 10 F7 FF FF: jmp 0x588977a0
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 148h]
        add eax, 2
        cmp eax, 80h
        mov dword ptr [esi + 184h], 4
        ; Exact mapped bytes 7F 18: jg 0x588980c2
        __asm _emit 0x7f
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 104h]
        mov edx, dword ptr [ecx + 64h]
        cmp edx, dword ptr [esi + 198h]
        ; Exact mapped bytes 7D 07: jge 0x588980c2
        __asm _emit 0x7d
        __asm _emit 0x07
        push 2
        ; Exact mapped bytes E8 DE F1 06 00: call 0x589072a0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xf1
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [esi + 1ach], 1
        ; Exact mapped bytes 0F 85 63 01 00 00: jne 0x58898232
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        pop esi
        ; Exact mapped bytes E9 C9 F6 FF FF: jmp 0x588977a0
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 148h]
        add eax, 2
        cmp eax, 80h
        mov dword ptr [esi + 184h], 3
        ; Exact mapped bytes 7F 18: jg 0x58898109
        __asm _emit 0x7f
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 100h]
        mov edx, dword ptr [ecx + 64h]
        cmp edx, dword ptr [esi + 194h]
        ; Exact mapped bytes 7D 07: jge 0x58898109
        __asm _emit 0x7d
        __asm _emit 0x07
        push 2
        ; Exact mapped bytes E8 97 F1 06 00: call 0x589072a0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xf1
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [esi + 1ach], 1
        ; Exact mapped bytes 0F 85 1C 01 00 00: jne 0x58898232
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        pop esi
        ; Exact mapped bytes E9 82 F6 FF FF: jmp 0x588977a0
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 148h]
        add eax, 2
        cmp eax, 80h
        mov dword ptr [esi + 184h], 2
        ; Exact mapped bytes 7F 18: jg 0x58898150
        __asm _emit 0x7f
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 0fch]
        mov edx, dword ptr [ecx + 64h]
        cmp edx, dword ptr [esi + 190h]
        ; Exact mapped bytes 7D 07: jge 0x58898150
        __asm _emit 0x7d
        __asm _emit 0x07
        push 2
        ; Exact mapped bytes E8 50 F1 06 00: call 0x589072a0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xf1
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [esi + 1ach], 1
        ; Exact mapped bytes 0F 85 D5 00 00 00: jne 0x58898232
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        pop esi
        ; Exact mapped bytes E9 3B F6 FF FF: jmp 0x588977a0
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 148h]
        add eax, 2
        cmp eax, 80h
        mov dword ptr [esi + 184h], 0
        ; Exact mapped bytes 7F 18: jg 0x58898197
        __asm _emit 0x7f
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 0f4h]
        mov edx, dword ptr [ecx + 64h]
        cmp edx, dword ptr [esi + 188h]
        ; Exact mapped bytes 7D 07: jge 0x58898197
        __asm _emit 0x7d
        __asm _emit 0x07
        push 2
        ; Exact mapped bytes E8 09 F1 06 00: call 0x589072a0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xf1
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [esi + 1ach], 1
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x58898232
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        pop esi
        ; Exact mapped bytes E9 F4 F5 FF FF: jmp 0x588977a0
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 148h]
        add eax, 2
        cmp eax, 80h
        mov dword ptr [esi + 184h], 1
        ; Exact mapped bytes 7F 18: jg 0x588981de
        __asm _emit 0x7f
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 0f8h]
        mov edx, dword ptr [ecx + 64h]
        cmp edx, dword ptr [esi + 18ch]
        ; Exact mapped bytes 7D 07: jge 0x588981de
        __asm _emit 0x7d
        __asm _emit 0x07
        push 2
        ; Exact mapped bytes E8 C2 F0 06 00: call 0x589072a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [esi + 1ach], 1
        ; Exact mapped bytes 75 4B: jne 0x58898232
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, esi
        pop esi
        ; Exact mapped bytes E9 B1 F5 FF FF: jmp 0x588977a0
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 148h]
        add eax, 2
        cmp eax, 80h
        mov dword ptr [esi + 184h], 6
        ; Exact mapped bytes 7F 18: jg 0x58898221
        __asm _emit 0x7f
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 10ch]
        mov edx, dword ptr [ecx + 64h]
        cmp edx, dword ptr [esi + 1a0h]
        ; Exact mapped bytes 7D 07: jge 0x58898221
        __asm _emit 0x7d
        __asm _emit 0x07
        push 2
        ; Exact mapped bytes E8 7F F0 06 00: call 0x589072a0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [esi + 1ach], 1
        ; Exact mapped bytes 75 08: jne 0x58898232
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, esi
        pop esi
        ; Exact mapped bytes E9 6E F5 FF FF: jmp 0x588977a0
        __asm _emit 0xe9
        __asm _emit 0x6e
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ret
    }
}
