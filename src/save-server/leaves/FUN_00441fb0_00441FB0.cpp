// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00441FB0 .. +0x2AB bytes.
extern "C" __declspec(naked) void FUN_00441fb0_00441FB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        mov dword ptr [ebp - 58h], ecx
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 76 08: jbe 0x441fd7
        __asm _emit 0x76
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 7E 02 00 00: jmp 0x442255
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 26: jne 0x442003
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 73 08: jae 0x441fed
        __asm _emit 0x73
        __asm _emit 0x08
        lea edx, [ebp + 0ch]
        mov dword ptr [ebp - 5ch], edx
        ; Exact mapped bytes EB 06: jmp 0x441ff3
        __asm _emit 0xeb
        __asm _emit 0x06
        lea eax, [ebp - 4]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes E9 52 02 00 00: jmp 0x442255
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 08: jae 0x44201c
        __asm _emit 0x73
        __asm _emit 0x08
        lea edx, [ebp + 0ch]
        mov dword ptr [ebp - 60h], edx
        ; Exact mapped bytes EB 06: jmp 0x442022
        __asm _emit 0xeb
        __asm _emit 0x06
        lea eax, [ebp - 10h]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        add eax, dword ptr [ecx]
        add eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp - 54h]
        ; Exact mapped bytes 75 0B: jne 0x442062
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4ch], ecx
        ; Exact mapped bytes E9 CE 01 00 00: jmp 0x442230
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 28h], edx
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 0F 84 BB 01 00 00: je 0x442230
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [ebp - 14h]
        mov byte ptr [ebp - 44h], cl
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 40h]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 08: je 0x442091
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes 75 0B: jne 0x44209c
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes E9 6A 01 00 00: jmp 0x442206
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        add ecx, 1
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 34h]
        cmp edx, dword ptr [ebp - 54h]
        ; Exact mapped bytes 75 3A: jne 0x4420ed
        __asm _emit 0x75
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 40h]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 27: je 0x4420e2
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        xor eax, eax
        cmp ecx, edx
        sete al
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x4420e2
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 1
        mov dword ptr [ebp - 40h], ecx
        ; Exact mapped bytes EB D1: jmp 0x4420b3
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes E9 19 01 00 00: jmp 0x442206
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 1
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 40h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 84 F8 00 00 00: je 0x442200
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 29: je 0x442139
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        xor eax, eax
        cmp ecx, edx
        sete al
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x44212e
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0B: jmp 0x442139
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 1
        mov dword ptr [ebp - 40h], ecx
        ; Exact mapped bytes EB CF: jmp 0x442108
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov edx, dword ptr [ebp - 40h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 28: je 0x442169
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        xor edx, edx
        cmp eax, ecx
        sete dl
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 75 0B: jne 0x442169
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 40h]
        add eax, 1
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB D0: jmp 0x442139
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 40h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 0B: jne 0x44217c
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x442206
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        add edx, 1
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 08: jne 0x4421a1
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB 65: jmp 0x442206
        __asm _emit 0xeb
        __asm _emit 0x65
        mov edx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        xor ecx, ecx
        cmp edx, eax
        sete cl
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 34: je 0x4421f2
        __asm _emit 0x74
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 38h]
        add edx, 1
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 38h]
        cmp eax, dword ptr [ebp - 54h]
        ; Exact mapped bytes 75 08: jne 0x4421d7
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB 2F: jmp 0x442206
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 3ch]
        add edx, 1
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 08: jne 0x4421f0
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB 16: jmp 0x442206
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes EB AF: jmp 0x4421a1
        __asm _emit 0xeb
        __asm _emit 0xaf
        mov edx, dword ptr [ebp - 40h]
        add edx, 1
        mov dword ptr [ebp - 40h], edx
        ; Exact mapped bytes E9 FC FE FF FF: jmp 0x4420fc
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 08: jne 0x442216
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 4ch], edx
        ; Exact mapped bytes EB 1A: jmp 0x442230
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 48h]
        add edx, 1
        mov dword ptr [ebp - 48h], edx
        ; Exact mapped bytes E9 38 FE FF FF: jmp 0x442068
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 0D: je 0x44224b
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [ebp - 0ch]
        sub eax, dword ptr [edx]
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 07: jmp 0x442252
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 64h], 0ffffffffh
        mov eax, dword ptr [ebp - 64h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
