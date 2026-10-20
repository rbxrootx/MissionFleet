// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58594350 .. +0x205 bytes.
extern "C" __declspec(naked) void FUN_58594350_58594350() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0f8h], 0
        ; Exact mapped bytes 0F 85 74 01 00 00: jne 0x585944de
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5859437c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7D 37: jge 0x585943b9
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 134h]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 44 1B EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x1b
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 148h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2A 1B EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x1b
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x58594373
        __asm _emit 0xeb
        __asm _emit 0xba
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 90h], 0fffffffeh
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 94h], 0fffffffeh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0f8h], 40000000h
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 36 B6 FE FF: call 0x5857fa20
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EC 19 EF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x19
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [edx + 0e8h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 504h]
        ; Exact mapped bytes E8 B5 25 EF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x25
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + esi*8 + 5c0h]
        sub edx, eax
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 4]
        mov esi, dword ptr [eax + 0e8h]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 504h]
        ; Exact mapped bytes E8 7F 7C EF FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x7c
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + esi*8 + 5c4h]
        sub ecx, eax
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 504h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e8h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*8 + 5c4h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*8 + 5c0h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B4 7B FD FF: call 0x5856c030
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x7b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 778h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A8 E6 F8 FF: call 0x58522b40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xe6
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585944ab
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 9e8h]
        ; Exact mapped bytes 7D 23: jge 0x585944dc
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 810h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 17 45 00 00: call 0x585989f0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C6: jmp 0x585944a2
        __asm _emit 0xeb
        __asm _emit 0xc6
        ; Exact mapped bytes EB 72: jmp 0x58594550
        __asm _emit 0xeb
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0f8h], 40000000h
        ; Exact mapped bytes 75 63: jne 0x58594550
        __asm _emit 0x75
        __asm _emit 0x63
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0e8h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 10 9B 00 00: call 0x5859e010
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a06h]
        push ecx
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA A9 13 00: call 0x586ceec0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa9
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0f8h], 0
        push 1
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 18 EF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0xef
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A6 18 EF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x18
        __asm _emit 0xef
        __asm _emit 0xff
        push 40000000h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D9 B4 FE FF: call 0x5857fa20
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 21 33 00 00: call 0x58597870
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
