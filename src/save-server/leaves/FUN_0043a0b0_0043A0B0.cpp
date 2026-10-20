// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043A0B0 .. +0x2D5 bytes.
extern "C" __declspec(naked) void FUN_0043a0b0_0043A0B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        mov dword ptr [ebp - 68h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 60h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [ebp - 68h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 60h]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 76 0C: jbe 0x43a0f7
        __asm _emit 0x76
        __asm _emit 0x0c
        mov dword ptr [ebp - 64h], 0ffffffffh
        ; Exact mapped bytes E9 85 02 00 00: jmp 0x43a37c
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 75 29: jne 0x43a126
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 5ch]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 73 08: jae 0x43a10d
        __asm _emit 0x73
        __asm _emit 0x08
        lea edx, [ebp - 5ch]
        mov dword ptr [ebp - 6ch], edx
        ; Exact mapped bytes EB 06: jmp 0x43a113
        __asm _emit 0xeb
        __asm _emit 0x06
        lea eax, [ebp - 4]
        mov dword ptr [ebp - 6ch], eax
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes E9 56 02 00 00: jmp 0x43a37c
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 5ch]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 08: jae 0x43a13f
        __asm _emit 0x73
        __asm _emit 0x08
        lea eax, [ebp - 5ch]
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 06: jmp 0x43a145
        __asm _emit 0xeb
        __asm _emit 0x06
        lea ecx, [ebp - 10h]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [edx]
        add ecx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 58h]
        add eax, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 68h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 58h]
        cmp ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes 75 0B: jne 0x43a185
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4ch], edx
        ; Exact mapped bytes E9 CF 01 00 00: jmp 0x43a354
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 28h], eax
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 0F 84 BC 01 00 00: je 0x43a354
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [ebp - 14h]
        mov byte ptr [ebp - 44h], dl
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 08: je 0x43a1b4
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 58h]
        cmp edx, dword ptr [ebp - 54h]
        ; Exact mapped bytes 75 0B: jne 0x43a1bf
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes E9 6B 01 00 00: jmp 0x43a32a
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 34h]
        add edx, 1
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        cmp eax, dword ptr [ebp - 54h]
        ; Exact mapped bytes 75 3B: jne 0x43a211
        __asm _emit 0x75
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 40h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 28: je 0x43a206
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        xor ecx, ecx
        cmp edx, eax
        sete cl
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 75 0B: jne 0x43a206
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 40h]
        add edx, 1
        mov dword ptr [ebp - 40h], edx
        ; Exact mapped bytes EB D0: jmp 0x43a1d6
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes E9 19 01 00 00: jmp 0x43a32a
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        add edx, 1
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 40h]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 84 F8 00 00 00: je 0x43a324
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 2A: je 0x43a25e
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 58h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        xor ecx, ecx
        cmp edx, eax
        sete cl
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x43a253
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0B: jmp 0x43a25e
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 40h]
        add edx, 1
        mov dword ptr [ebp - 40h], edx
        ; Exact mapped bytes EB CE: jmp 0x43a22c
        __asm _emit 0xeb
        __asm _emit 0xce
        mov eax, dword ptr [ebp - 40h]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 27: je 0x43a28d
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 58h]
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
        ; Exact mapped bytes 75 0B: jne 0x43a28d
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 1
        mov dword ptr [ebp - 40h], ecx
        ; Exact mapped bytes EB D1: jmp 0x43a25e
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov edx, dword ptr [ebp - 40h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 0B: jne 0x43a2a0
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x43a32a
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        add eax, 1
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 08: jne 0x43a2c5
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB 65: jmp 0x43a32a
        __asm _emit 0xeb
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        xor edx, edx
        cmp eax, ecx
        sete dl
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 34: je 0x43a316
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 38h]
        add eax, 1
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        cmp ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes 75 08: jne 0x43a2fb
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB 2F: jmp 0x43a32a
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 3ch]
        add eax, 1
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 08: jne 0x43a314
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB 16: jmp 0x43a32a
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes EB AF: jmp 0x43a2c5
        __asm _emit 0xeb
        __asm _emit 0xaf
        mov eax, dword ptr [ebp - 40h]
        add eax, 1
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes E9 FC FE FF FF: jmp 0x43a220
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 08: jne 0x43a33a
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 1A: jmp 0x43a354
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 48h]
        add eax, 1
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes E9 37 FE FF FF: jmp 0x43a18b
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 0D: je 0x43a36f
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, dword ptr [eax]
        mov dword ptr [ebp - 74h], ecx
        ; Exact mapped bytes EB 07: jmp 0x43a376
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 74h], 0ffffffffh
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp - 64h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
