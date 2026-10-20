// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B4E30 .. +0x1A5 bytes.
extern "C" __declspec(naked) void FUN_587b4e30_587B4E30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 0F 84 8E 01 00 00: je 0x587b4fd5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 0F 84 78 01 00 00: je 0x587b4fd5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes 0F BF 41 26: movsx eax, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x41
        __asm _emit 0x26
        cmp edx, eax
        ; Exact mapped bytes 7F 36: jg 0x587b4ea8
        __asm _emit 0x7f
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes 0F BF 41 26: movsx eax, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x41
        __asm _emit 0x26
        cmp edx, eax
        ; Exact mapped bytes 0F 85 3C 01 00 00: jne 0x587b4fc7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7D B7 CE FF: call 0x584a0610
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xb7
        __asm _emit 0xce
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 48h]
        ; Exact mapped bytes E8 70 B7 CE FF: call 0x584a0610
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xb7
        __asm _emit 0xce
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 8E 1F 01 00 00: jle 0x587b4fc7
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 48h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 44h], 0
        ; Exact mapped bytes 75 5F: jne 0x587b4f1f
        __asm _emit 0x75
        __asm _emit 0x5f
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 74 0F: je 0x587b4ed8
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 44h]
        mov dword ptr [edx + 44h], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 44h], 0
        ; Exact mapped bytes 74 0F: je 0x587b4ef0
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 44h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov dword ptr [ecx + 48h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 48h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 44h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 44h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4ch], ecx
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x587b4fc5
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x587b4fc0
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 51 26: movsx edx, word ptr [ecx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x51
        __asm _emit 0x26
        cmp eax, edx
        ; Exact mapped bytes 7F 28: jg 0x587b4f59
        __asm _emit 0x7f
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BF 48 26: movsx ecx, word ptr [eax + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 42 26: movsx eax, word ptr [edx + 0x26]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x26
        cmp ecx, eax
        ; Exact mapped bytes 75 21: jne 0x587b4f64
        __asm _emit 0x75
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C5 B6 CE FF: call 0x584a0610
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xb6
        __asm _emit 0xce
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BB B6 CE FF: call 0x584a0610
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb6
        __asm _emit 0xce
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7E 0B: jle 0x587b4f64
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 44h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 5C: jmp 0x587b4fc0
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 74 0F: je 0x587b4f7c
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 44h]
        mov dword ptr [edx + 44h], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 44h], 0
        ; Exact mapped bytes 74 0F: je 0x587b4f94
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 44h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 48h]
        mov dword ptr [ecx + 48h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 48h]
        mov dword ptr [ecx + 48h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 44h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 48h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 44h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 48h], ecx
        ; Exact mapped bytes EB 05: jmp 0x587b4fc5
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 F2 FE FF FF: jmp 0x587b4eb7
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 09: jmp 0x587b4fd0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 48h]
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E9 7B FE FF FF: jmp 0x587b4e50
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
