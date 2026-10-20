// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00442680 .. +0x76B bytes.
extern "C" __declspec(naked) void FUN_00442680_00442680() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 12ch
        mov dword ptr [ebp - 120h], ecx
        mov eax, dword ptr [ebp - 120h]
        mov ecx, dword ptr [ebp - 120h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 76 08: jbe 0x4426ad
        __asm _emit 0x76
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 38 07 00 00: jmp 0x442de5
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 11ch], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 118h], eax
        mov ecx, dword ptr [ebp - 120h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 114h], edx
        mov eax, dword ptr [ebp - 120h]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 110h], ecx
        mov dl, byte ptr [ebp - 14h]
        mov byte ptr [ebp - 10h], dl
        mov eax, dword ptr [ebp - 11ch]
        mov dword ptr [ebp - 108h], eax
        mov ecx, dword ptr [ebp - 118h]
        mov dword ptr [ebp - 104h], ecx
        mov edx, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 100h], edx
        mov eax, dword ptr [ebp - 114h]
        sub eax, dword ptr [ebp - 100h]
        sar eax, 2
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 09: jmp 0x442735
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        sub ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 8E 2E 02 00 00: jle 0x44296d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 100h]
        mov al, byte ptr [edx]
        mov byte ptr [ebp - 20h], al
        mov cl, byte ptr [ebp - 20h]
        mov byte ptr [ebp - 1ch], cl
        mov dl, byte ptr [ebp - 1ch]
        mov byte ptr [ebp - 34h], dl
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 2ch], ecx
        mov dl, byte ptr [ebp - 28h]
        mov byte ptr [ebp - 24h], dl
        lea eax, [ebp - 24h]
        push eax
        mov cl, byte ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 5D 6C 00 00: call 0x4493e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        xor ecx, ecx
        cmp eax, dword ptr [ebp - 104h]
        sete cl
        mov byte ptr [ebp - 38h], cl
        mov edx, dword ptr [ebp - 38h]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x4427b2
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes E9 F9 05 00 00: jmp 0x442dab
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        add ecx, 1
        mov dword ptr [ebp - 100h], ecx
        mov edx, dword ptr [ebp - 100h]
        mov al, byte ptr [edx]
        mov byte ptr [ebp - 40h], al
        mov cl, byte ptr [ebp - 40h]
        mov byte ptr [ebp - 3ch], cl
        mov dl, byte ptr [ebp - 3ch]
        mov byte ptr [ebp - 54h], dl
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 4ch], ecx
        mov dl, byte ptr [ebp - 48h]
        mov byte ptr [ebp - 44h], dl
        lea eax, [ebp - 44h]
        push eax
        mov cl, byte ptr [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        ; Exact mapped bytes E8 DB 6B 00 00: call 0x4493e0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        xor ecx, ecx
        cmp eax, dword ptr [ebp - 104h]
        sete cl
        mov byte ptr [ebp - 58h], cl
        mov edx, dword ptr [ebp - 58h]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x442834
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes E9 77 05 00 00: jmp 0x442dab
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        add ecx, 1
        mov dword ptr [ebp - 100h], ecx
        mov edx, dword ptr [ebp - 100h]
        mov al, byte ptr [edx]
        mov byte ptr [ebp - 60h], al
        mov cl, byte ptr [ebp - 60h]
        mov byte ptr [ebp - 5ch], cl
        mov dl, byte ptr [ebp - 5ch]
        mov byte ptr [ebp - 74h], dl
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 6ch], ecx
        mov dl, byte ptr [ebp - 68h]
        mov byte ptr [ebp - 64h], dl
        lea eax, [ebp - 64h]
        push eax
        mov cl, byte ptr [ebp - 74h]
        push ecx
        mov edx, dword ptr [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp - 6ch]
        push eax
        ; Exact mapped bytes E8 59 6B 00 00: call 0x4493e0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        xor ecx, ecx
        cmp eax, dword ptr [ebp - 104h]
        sete cl
        mov byte ptr [ebp - 78h], cl
        mov edx, dword ptr [ebp - 78h]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x4428b6
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes E9 F5 04 00 00: jmp 0x442dab
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        add ecx, 1
        mov dword ptr [ebp - 100h], ecx
        mov edx, dword ptr [ebp - 100h]
        mov al, byte ptr [edx]
        mov byte ptr [ebp - 80h], al
        mov cl, byte ptr [ebp - 80h]
        mov byte ptr [ebp - 7ch], cl
        mov dl, byte ptr [ebp - 7ch]
        mov byte ptr [ebp - 94h], dl
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 8ch], ecx
        mov dl, byte ptr [ebp - 88h]
        mov byte ptr [ebp - 84h], dl
        lea eax, [ebp - 84h]
        push eax
        mov cl, byte ptr [ebp - 94h]
        push ecx
        mov edx, dword ptr [ebp - 90h]
        push edx
        mov eax, dword ptr [ebp - 8ch]
        push eax
        ; Exact mapped bytes E8 BC 6A 00 00: call 0x4493e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        xor ecx, ecx
        cmp eax, dword ptr [ebp - 104h]
        sete cl
        mov byte ptr [ebp - 98h], cl
        mov edx, dword ptr [ebp - 98h]
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x442959
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes E9 52 04 00 00: jmp 0x442dab
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100h]
        add ecx, 1
        mov dword ptr [ebp - 100h], ecx
        ; Exact mapped bytes E9 BF FD FF FF: jmp 0x44272c
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 114h]
        sub edx, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 124h], edx
        cmp dword ptr [ebp - 124h], 1
        ; Exact mapped bytes 0F 84 77 01 00 00: je 0x442b03
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 124h], 2
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x442a55
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 124h], 3
        ; Exact mapped bytes 74 05: je 0x4429a7
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 F8 03 00 00: jmp 0x442d9f
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 100h]
        mov cl, byte ptr [eax]
        mov byte ptr [ebp - 0a0h], cl
        mov dl, byte ptr [ebp - 0a0h]
        mov byte ptr [ebp - 9ch], dl
        mov al, byte ptr [ebp - 9ch]
        mov byte ptr [ebp - 0b4h], al
        mov ecx, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 0b0h], ecx
        mov edx, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 0ach], edx
        mov al, byte ptr [ebp - 0a8h]
        mov byte ptr [ebp - 0a4h], al
        lea ecx, [ebp - 0a4h]
        push ecx
        mov dl, byte ptr [ebp - 0b4h]
        push edx
        mov eax, dword ptr [ebp - 0b0h]
        push eax
        mov ecx, dword ptr [ebp - 0ach]
        push ecx
        ; Exact mapped bytes E8 CE 69 00 00: call 0x4493e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        xor edx, edx
        cmp eax, dword ptr [ebp - 104h]
        sete dl
        mov byte ptr [ebp - 0b8h], dl
        mov eax, dword ptr [ebp - 0b8h]
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x442a46
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 10ch], ecx
        ; Exact mapped bytes E9 65 03 00 00: jmp 0x442dab
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 100h]
        add edx, 1
        mov dword ptr [ebp - 100h], edx
        mov eax, dword ptr [ebp - 100h]
        mov cl, byte ptr [eax]
        mov byte ptr [ebp - 0c0h], cl
        mov dl, byte ptr [ebp - 0c0h]
        mov byte ptr [ebp - 0bch], dl
        mov al, byte ptr [ebp - 0bch]
        mov byte ptr [ebp - 0d4h], al
        mov ecx, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 0d0h], ecx
        mov edx, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 0cch], edx
        mov al, byte ptr [ebp - 0c8h]
        mov byte ptr [ebp - 0c4h], al
        lea ecx, [ebp - 0c4h]
        push ecx
        mov dl, byte ptr [ebp - 0d4h]
        push edx
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        ; Exact mapped bytes E8 20 69 00 00: call 0x4493e0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        xor edx, edx
        cmp eax, dword ptr [ebp - 104h]
        sete dl
        mov byte ptr [ebp - 0d8h], dl
        mov eax, dword ptr [ebp - 0d8h]
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x442af4
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 10ch], ecx
        ; Exact mapped bytes E9 B7 02 00 00: jmp 0x442dab
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 100h]
        add edx, 1
        mov dword ptr [ebp - 100h], edx
        mov eax, dword ptr [ebp - 100h]
        mov cl, byte ptr [eax]
        mov byte ptr [ebp - 0e0h], cl
        mov dl, byte ptr [ebp - 0e0h]
        mov byte ptr [ebp - 0dch], dl
        mov eax, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 0fch], eax
        mov cl, byte ptr [ebp - 0e8h]
        mov byte ptr [ebp - 0e4h], cl
        mov dl, byte ptr [ebp - 0dch]
        mov byte ptr [ebp - 0f4h], dl
        mov eax, dword ptr [ebp - 108h]
        mov dword ptr [ebp - 0f0h], eax
        mov ecx, dword ptr [ebp - 0fch]
        sub ecx, dword ptr [ebp - 0f0h]
        sar ecx, 2
        mov dword ptr [ebp - 0ech], ecx
        ; Exact mapped bytes EB 0F: jmp 0x442b73
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0ech]
        sub edx, 1
        mov dword ptr [ebp - 0ech], edx
        cmp dword ptr [ebp - 0ech], 0
        ; Exact mapped bytes 0F 8E 08 01 00 00: jle 0x442c88
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 85 0C FF FF FF: movsx eax, byte ptr [ebp - 0xf4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        xor ecx, ecx
        cmp edx, eax
        sete cl
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x442bb2
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 0f8h], edx
        ; Exact mapped bytes E9 C5 01 00 00: jmp 0x442d77
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0f0h]
        add eax, 1
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes 0F BE 8D 0C FF FF FF: movsx ecx, byte ptr [ebp - 0xf4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        xor edx, edx
        cmp eax, ecx
        sete dl
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x442bf3
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes E9 84 01 00 00: jmp 0x442d77
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0f0h]
        add ecx, 1
        mov dword ptr [ebp - 0f0h], ecx
        ; Exact mapped bytes 0F BE 95 0C FF FF FF: movsx edx, byte ptr [ebp - 0xf4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        xor eax, eax
        cmp ecx, edx
        sete al
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x442c33
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 0f8h], ecx
        ; Exact mapped bytes E9 44 01 00 00: jmp 0x442d77
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0f0h]
        add edx, 1
        mov dword ptr [ebp - 0f0h], edx
        ; Exact mapped bytes 0F BE 85 0C FF FF FF: movsx eax, byte ptr [ebp - 0xf4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        xor ecx, ecx
        cmp edx, eax
        sete cl
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x442c74
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 0f8h], edx
        ; Exact mapped bytes E9 03 01 00 00: jmp 0x442d77
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0f0h]
        add eax, 1
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes E9 DC FE FF FF: jmp 0x442b64
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0fch]
        sub ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 128h], ecx
        cmp dword ptr [ebp - 128h], 1
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x442d3c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 128h], 2
        ; Exact mapped bytes 74 4E: je 0x442cfe
        __asm _emit 0x74
        __asm _emit 0x4e
        cmp dword ptr [ebp - 128h], 3
        ; Exact mapped bytes 74 05: je 0x442cbe
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x442d6b
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 95 0C FF FF FF: movsx edx, byte ptr [ebp - 0xf4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        xor eax, eax
        cmp ecx, edx
        sete al
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x442cef
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 0f8h], ecx
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x442d77
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0f0h]
        add edx, 1
        mov dword ptr [ebp - 0f0h], edx
        ; Exact mapped bytes 0F BE 85 0C FF FF FF: movsx eax, byte ptr [ebp - 0xf4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        xor ecx, ecx
        cmp edx, eax
        sete cl
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x442d2d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 0f8h], edx
        ; Exact mapped bytes EB 4A: jmp 0x442d77
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 0f0h]
        add eax, 1
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes 0F BE 8D 0C FF FF FF: movsx ecx, byte ptr [ebp - 0xf4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        xor edx, edx
        cmp eax, ecx
        sete dl
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 0E: je 0x442d6b
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 0f0h]
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0C: jmp 0x442d77
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0fch]
        mov dword ptr [ebp - 0f8h], ecx
        mov edx, dword ptr [ebp - 0f8h]
        xor eax, eax
        cmp edx, dword ptr [ebp - 104h]
        sete al
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x442d9f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 100h]
        mov dword ptr [ebp - 10ch], ecx
        ; Exact mapped bytes EB 0C: jmp 0x442dab
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [ebp - 10ch], edx
        mov eax, dword ptr [ebp - 10ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 120h]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 74 13: je 0x442dd5
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 120h]
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [eax]
        mov dword ptr [ebp - 12ch], ecx
        ; Exact mapped bytes EB 0A: jmp 0x442ddf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0ffffffffh
        mov eax, dword ptr [ebp - 12ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
