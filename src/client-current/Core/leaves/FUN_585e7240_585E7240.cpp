// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E7240 .. +0x154 bytes.
extern "C" __declspec(naked) void FUN_585e7240_585E7240() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [eax + 21ab1h], cl
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [edx + 21ab1h]
        mov byte ptr [ebp - 14h], al
        cmp byte ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 15: je 0x585e727c
        __asm _emit 0x74
        __asm _emit 0x15
        cmp byte ptr [ebp - 14h], 1
        ; Exact mapped bytes 74 6E: je 0x585e72db
        __asm _emit 0x74
        __asm _emit 0x6e
        cmp byte ptr [ebp - 14h], 2
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x585e7334
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 12 01 00 00: jmp 0x585e738e
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585e728e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 42: jge 0x585e72d6
        __asm _emit 0x7d
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 10d3ch]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 21e24h]
        ; Exact mapped bytes E8 2E 4C EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x4c
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0C D8 E9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xd8
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8D F9 E9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xf9
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AF: jmp 0x585e7285
        __asm _emit 0xeb
        __asm _emit 0xaf
        ; Exact mapped bytes E9 B3 00 00 00: jmp 0x585e738e
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585e72ed
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 3F: jge 0x585e7332
        __asm _emit 0x7d
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 10d3ch]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21e24h]
        ; Exact mapped bytes E8 CF 4B EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x4b
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B0 D7 E9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xd7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 31 F9 E9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xf9
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B2: jmp 0x585e72e4
        __asm _emit 0xeb
        __asm _emit 0xb2
        ; Exact mapped bytes EB 5A: jmp 0x585e738e
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x585e7346
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 7D 42: jge 0x585e738e
        __asm _emit 0x7d
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 10d3ch]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 21e24h]
        ; Exact mapped bytes E8 76 4B EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x4b
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 10h]
        add edx, 2
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 54 D7 E9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xd7
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 D5 F8 E9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf8
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AF: jmp 0x585e733d
        __asm _emit 0xeb
        __asm _emit 0xaf
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
