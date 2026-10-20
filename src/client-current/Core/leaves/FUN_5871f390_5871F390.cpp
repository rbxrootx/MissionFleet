// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5871F390 .. +0x189 bytes.
extern "C" __declspec(naked) void FUN_5871f390_5871F390() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0f0h]
        ; Exact mapped bytes E8 3F A3 E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp eax, 8
        ; Exact mapped bytes 0F 8E 4F 01 00 00: jle 0x5871f509
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 6F: je 0x5871f42f
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0f0h]
        ; Exact mapped bytes E8 99 18 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 54: jle 0x5871f42f
        __asm _emit 0x7e
        __asm _emit 0x54
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5871f3ed
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 37: jge 0x5871f42a
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0f0h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 0f0h]
        ; Exact mapped bytes E8 5B 18 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x00
        sub eax, 1
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 39 23 0A 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x23
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x5871f3e4
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x5871f4bf
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x5871f4bf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f0h]
        ; Exact mapped bytes E8 20 18 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f0h]
        ; Exact mapped bytes E8 87 A2 E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xa2
        __asm _emit 0xe0
        __asm _emit 0xff
        sub eax, 8
        cmp esi, eax
        ; Exact mapped bytes 7D 4F: jge 0x5871f4bf
        __asm _emit 0x7d
        __asm _emit 0x4f
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5871f482
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 7D 37: jge 0x5871f4bf
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0f0h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0f0h]
        ; Exact mapped bytes E8 C6 17 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x17
        __asm _emit 0x0a
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A4 22 0A 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x22
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x5871f479
        __asm _emit 0xeb
        __asm _emit 0xba
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0f0h]
        ; Exact mapped bytes E8 9A 17 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x17
        __asm _emit 0x0a
        __asm _emit 0x00
        imul esi, eax, 63h
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0f0h]
        ; Exact mapped bytes E8 00 A2 E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xa2
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        sub ecx, 8
        mov eax, esi
        cdq
        idiv ecx
        add eax, 0dfh
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 FD FF FF: call 0x5871f210
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CF E1 FF FF: call 0x5871d6e0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
