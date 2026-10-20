// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A1FDF .. +0x273 bytes.
extern "C" __declspec(naked) void FUN_004a1fdf_004A1FDF() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f05eh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 44h
        push ebx
        push esi
        push edi
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 A3 B2 0A 00: call 0x54d2a8
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xb2
        __asm _emit 0x0a
        __asm _emit 0x00
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 B1 77 00 00: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], esp
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 C2 09 00 00: call 0x4a29ea
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        and ch, 0dfh
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 4ch]
        sub edx, 2
        mov dword ptr [ebp - 4ch], edx
        cmp dword ptr [ebp - 4ch], 11h
        ; Exact mapped bytes 0F 87 D2 01 00 00: ja 0x4a221b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 24 85 52 22 4A 00: jmp dword ptr [eax*4 + 0x4a2252]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0x22
        __asm _emit 0x4a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 11: movsx edx, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x11
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 05 2D 09 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x2d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 D7 01 00 00: jmp 0x4a223e
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F1 2C 09 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 C3 01 00 00: jmp 0x4a223e
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F BF 02: movsx eax, word ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x02
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DD 2C 09 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 AF 01 00 00: jmp 0x4a223e
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 62 2C 09 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 9C 01 00 00: jmp 0x4a223e
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov cl, byte ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A9 2B 09 00: call 0x534c59
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x2b
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 89 01 00 00: jmp 0x4a223e
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CE 2B 09 00: call 0x534c92
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x2b
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 75 01 00 00: jmp 0x4a223e
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5C 2C 09 00: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 62 01 00 00: jmp 0x4a223e
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A6 33 09 00: call 0x535490
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x33
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 4F 01 00 00: jmp 0x4a223e
        __asm _emit 0xe9
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [edx]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C4 33 09 00: call 0x5354c5
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x33
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 38 01 00 00: jmp 0x4a223e
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 85 A4 0A 00: call 0x54c593
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 66 C7 45 E0 06 00: mov word ptr [ebp - 0x20], 6
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe0
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], ecx
        push 0
        push 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 42 B1 FF FF: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 54 2E 09 00: call 0x534f95
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x2e
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 5A A4 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xa4
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes E9 E9 00 00 00: jmp 0x4a223e
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 36 A4 0A 00: call 0x54c593
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xa4
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes 66 C7 45 D0 07 00: mov word ptr [ebp - 0x30], 7
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xd0
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 24h], edx
        push 0
        push 8
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 F3 B0 FF FF: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 05 2E 09 00: call 0x534f95
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x2e
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 0B A4 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa4
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E8 2D 09 00: call 0x534f95
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x4a223e
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3F 2B 09 00: call 0x534cff
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x2b
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 7C: jmp 0x4a223e
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 24 2C 09 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x2c
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 6C: jmp 0x4a223e
        __asm _emit 0xeb
        __asm _emit 0x6c
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 B9 A3 0A 00: call 0x54c593
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xa3
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 15 B4 FF FF: call 0x49d602
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        sub esp, 10h
        mov ecx, esp
        mov dword ptr [ebp - 44h], esp
        lea edx, [ebp - 40h]
        push edx
        ; Exact mapped bytes E8 A2 AC FF FF: call 0x49cea0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 95 B8 FF FF: call 0x49da9f
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 91 A3 0A 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xa3
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 23: jmp 0x4a223e
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4a2238
        __asm _emit 0x74
        __asm _emit 0x14
        push 0a94h
        push 5cbe8ch
        ; Exact mapped bytes E8 CD 27 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x27
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a2238
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4a221b
        __asm _emit 0x75
        __asm _emit 0xdd
        lea esp, [ebp - 5ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
