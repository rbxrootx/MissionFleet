// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00441CC0 .. +0x1F7 bytes.
extern "C" __declspec(naked) void FUN_00441cc0_00441CC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ecx + 4]
        sub ecx, dword ptr [edx]
        cmp eax, ecx
        ; Exact mapped bytes 76 08: jbe 0x441ce6
        __asm _emit 0x76
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 CB 01 00 00: jmp 0x441eb1
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [ebp - 8]
        mov byte ptr [ebp - 28h], dl
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 74 08: je 0x441d19
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 75 0B: jne 0x441d24
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E9 6B 01 00 00: jmp 0x441e8f
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 75 3B: jne 0x441d76
        __asm _emit 0x75
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 74 28: je 0x441d6b
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        xor edx, edx
        cmp eax, ecx
        sete dl
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 75 0B: jne 0x441d6b
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB D0: jmp 0x441d3b
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E9 19 01 00 00: jmp 0x441e8f
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F 84 F8 00 00 00: je 0x441e89
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 74 2A: je 0x441dc3
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        xor edx, edx
        cmp eax, ecx
        sete dl
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 02: je 0x441db8
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0B: jmp 0x441dc3
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB CE: jmp 0x441d91
        __asm _emit 0xeb
        __asm _emit 0xce
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 74 28: je 0x441df3
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        xor ecx, ecx
        cmp edx, eax
        sete cl
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 75 0B: jne 0x441df3
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB D0: jmp 0x441dc3
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 1ch]
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 75 0B: jne 0x441e06
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x441e8f
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 75 08: jne 0x441e2b
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 64: jmp 0x441e8f
        __asm _emit 0xeb
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        xor eax, eax
        cmp ecx, edx
        sete al
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x441e7b
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 75 08: jne 0x441e60
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 2F: jmp 0x441e8f
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 75 08: jne 0x441e79
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 16: jmp 0x441e8f
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes EB B0: jmp 0x441e2b
        __asm _emit 0xeb
        __asm _emit 0xb0
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes E9 FC FE FF FF: jmp 0x441d85
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 74 0D: je 0x441ea7
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [edx]
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x441eae
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0ffffffffh
        mov eax, dword ptr [ebp - 30h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
