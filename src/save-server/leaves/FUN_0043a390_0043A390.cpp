// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043A390 .. +0x2D3 bytes.
extern "C" __declspec(naked) void FUN_0043a390_0043A390() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        push edi
        mov dword ptr [ebp - 64h], ecx
        mov edi, dword ptr [ebp + 8]
        or ecx, 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        add ecx, -1
        mov dword ptr [ebp - 5ch], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [ecx + 4]
        sub eax, dword ptr [edx]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 5ch]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 76 0C: jbe 0x43a3d4
        __asm _emit 0x76
        __asm _emit 0x0c
        mov dword ptr [ebp - 60h], 0ffffffffh
        ; Exact mapped bytes E9 85 02 00 00: jmp 0x43a659
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 75 29: jne 0x43a403
        __asm _emit 0x75
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 58h]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 73 08: jae 0x43a3ea
        __asm _emit 0x73
        __asm _emit 0x08
        lea eax, [ebp - 58h]
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 06: jmp 0x43a3f0
        __asm _emit 0xeb
        __asm _emit 0x06
        lea ecx, [ebp - 4]
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 60h], ecx
        ; Exact mapped bytes E9 56 02 00 00: jmp 0x43a659
        __asm _emit 0xe9
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        sub edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 58h]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 73 08: jae 0x43a41c
        __asm _emit 0x73
        __asm _emit 0x08
        lea ecx, [ebp - 58h]
        mov dword ptr [ebp - 6ch], ecx
        ; Exact mapped bytes EB 06: jmp 0x43a422
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp - 10h]
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 1ch]
        add edx, dword ptr [eax]
        add edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 8], edx
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ebp - 54h]
        ; Exact mapped bytes 75 0B: jne 0x43a462
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes E9 CF 01 00 00: jmp 0x43a631
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 28h], ecx
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 84 BC 01 00 00: je 0x43a631
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebp - 14h]
        mov byte ptr [ebp - 44h], al
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 40h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 08: je 0x43a491
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp - 54h]
        ; Exact mapped bytes 75 0B: jne 0x43a49c
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes E9 6B 01 00 00: jmp 0x43a607
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 34h]
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        cmp ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes 75 3B: jne 0x43a4ee
        __asm _emit 0x75
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 40h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 28: je 0x43a4e3
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
        ; Exact mapped bytes 75 0B: jne 0x43a4e3
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 40h]
        add eax, 1
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB D0: jmp 0x43a4b3
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes E9 19 01 00 00: jmp 0x43a607
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 30h]
        add eax, 1
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 40h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F 84 F8 00 00 00: je 0x43a601
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 40h]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 2A: je 0x43a53b
        __asm _emit 0x74
        __asm _emit 0x2a
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
        ; Exact mapped bytes 74 02: je 0x43a530
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 0B: jmp 0x43a53b
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 40h]
        add eax, 1
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB CE: jmp 0x43a509
        __asm _emit 0xeb
        __asm _emit 0xce
        mov ecx, dword ptr [ebp - 40h]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 28: je 0x43a56b
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ebp + 8]
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
        ; Exact mapped bytes 75 0B: jne 0x43a56b
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 40h]
        add edx, 1
        mov dword ptr [ebp - 40h], edx
        ; Exact mapped bytes EB D0: jmp 0x43a53b
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 40h]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 0B: jne 0x43a57e
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x43a607
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, 1
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 08: jne 0x43a5a3
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 64: jmp 0x43a607
        __asm _emit 0xeb
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        xor eax, eax
        cmp ecx, edx
        sete al
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 34: je 0x43a5f3
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 1
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        cmp edx, dword ptr [ebp - 54h]
        ; Exact mapped bytes 75 08: jne 0x43a5d8
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 2F: jmp 0x43a607
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, 1
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 08: jne 0x43a5f1
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 16: jmp 0x43a607
        __asm _emit 0xeb
        __asm _emit 0x16
        ; Exact mapped bytes EB B0: jmp 0x43a5a3
        __asm _emit 0xeb
        __asm _emit 0xb0
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 1
        mov dword ptr [ebp - 40h], ecx
        ; Exact mapped bytes E9 FC FE FF FF: jmp 0x43a4fd
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 08: jne 0x43a617
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 4ch], ecx
        ; Exact mapped bytes EB 1A: jmp 0x43a631
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        add ecx, 1
        mov dword ptr [ebp - 48h], ecx
        ; Exact mapped bytes E9 37 FE FF FF: jmp 0x43a468
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 0D: je 0x43a64c
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ebp - 0ch]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 70h], edx
        ; Exact mapped bytes EB 07: jmp 0x43a653
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 70h], 0ffffffffh
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 60h]
        pop edi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
