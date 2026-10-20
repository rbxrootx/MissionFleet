// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004523C9 .. +0x353 bytes.
extern "C" __declspec(naked) void FUN_004523c9_004523C9() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57b44fh
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
        sub esp, 18h
        push esi
        push edi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 24h], ecx
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 8
        ; Exact mapped bytes E8 75 F8 FE FF: call 0x441c80
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x452419
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 E9 02 00 00: jmp 0x452702
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 8
        ; Exact mapped bytes E8 CC B3 00 00: call 0x45d7f0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D6 EA 0D 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xea
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        push eax
        push 5b7edch
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 02 C5 07 00: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xc5
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 14h
        push 5b7efch
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 440h
        ; Exact mapped bytes E8 A0 B2 00 00: call 0x45d710
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 32 EB 0D 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xeb
        __asm _emit 0x0d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 440h
        ; Exact mapped bytes E8 B9 B2 00 00: call 0x45d740
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 80h
        push 4
        push 0
        push 1
        push 40000000h
        push 0
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 440h
        ; Exact mapped bytes E8 C5 B2 00 00: call 0x45d770
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 27 63 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x63
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 0F 84 25 02 00 00: je 0x4526eb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0ah
        push 0dh
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 70h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 6ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 68: mov cx, word ptr [eax + 0x68]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x68
        push ecx
        mov edx, dword ptr [ebp - 14h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 66: mov ax, word ptr [edx + 0x66]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x66
        push eax
        mov ecx, dword ptr [ebp - 14h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 64: mov dx, word ptr [ecx + 0x64]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x64
        push edx
        mov eax, dword ptr [ebp - 14h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 62: mov cx, word ptr [eax + 0x62]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x62
        push ecx
        mov edx, dword ptr [ebp - 14h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 60: mov ax, word ptr [edx + 0x60]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x60
        push eax
        mov ecx, dword ptr [ebp - 14h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        push edx
        mov eax, dword ptr [ebp - 14h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 5C: mov cx, word ptr [eax + 0x5c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x5c
        push ecx
        mov edx, dword ptr [ebp - 14h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 5A: mov ax, word ptr [edx + 0x5a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x5a
        push eax
        mov ecx, dword ptr [ebp - 14h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 58: mov dx, word ptr [ecx + 0x58]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 14h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 56: mov cx, word ptr [eax + 0x56]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x56
        push ecx
        mov edx, dword ptr [ebp - 14h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 54: mov ax, word ptr [edx + 0x54]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x54
        push eax
        mov ecx, dword ptr [ebp - 14h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 52: mov dx, word ptr [ecx + 0x52]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x52
        push edx
        mov eax, dword ptr [ebp - 14h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 50: mov cx, word ptr [eax + 0x50]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x50
        push ecx
        mov edx, dword ptr [ebp - 14h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 4E: mov ax, word ptr [edx + 0x4e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x4e
        push eax
        mov ecx, dword ptr [ebp - 14h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 4C: mov dx, word ptr [ecx + 0x4c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x4c
        push edx
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 48 4B: movsx ecx, byte ptr [eax + 0x4b]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x4b
        push ecx
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 42 4A: movsx eax, byte ptr [edx + 0x4a]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x4a
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 51 49: movsx edx, byte ptr [ecx + 0x49]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x49
        push edx
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 48 48: movsx ecx, byte ptr [eax + 0x48]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x48
        push ecx
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 42 47: movsx eax, byte ptr [edx + 0x47]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x47
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 51 46: movsx edx, byte ptr [ecx + 0x46]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x46
        push edx
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 48 45: movsx ecx, byte ptr [eax + 0x45]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x45
        push ecx
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 42 44: movsx eax, byte ptr [edx + 0x44]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x44
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 51 43: movsx edx, byte ptr [ecx + 0x43]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x43
        push edx
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 48 42: movsx ecx, byte ptr [eax + 0x42]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x42
        push ecx
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 42 41: movsx eax, byte ptr [edx + 0x41]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x41
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 51 40: movsx edx, byte ptr [ecx + 0x40]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x40
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 3ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov al, byte ptr [edx + 3ah]
        push eax
        ; Exact mapped bytes E8 4D A1 00 00: call 0x45c730
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 14h]
        xor edx, edx
        mov dl, byte ptr [ecx + 39h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov cl, byte ptr [eax + 38h]
        push ecx
        ; Exact mapped bytes E8 04 A1 00 00: call 0x45c700
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        mov edx, dword ptr [ebp - 14h]
        add edx, 28h
        push edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 18h
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 14h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        push eax
        push 5b7f14h
        push 5d7d0ch
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0b4h
        cmp esi, esp
        ; Exact mapped bytes E8 8C 61 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x61
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 2
        push 0
        push 0
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 73 61 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x61
        __asm _emit 0x05
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea edx, [ebp - 1ch]
        push edx
        mov edi, esp
        push 5d7d0ch
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp edi, esp
        ; Exact mapped bytes E8 57 61 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x61
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        push 5d7d0ch
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 40 61 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x61
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x4526aa
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 11: jne 0x4526bb
        __asm _emit 0x75
        __asm _emit 0x11
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 93 B1 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xb1
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 47: jmp 0x452702
        __asm _emit 0xeb
        __asm _emit 0x47
        mov esi, esp
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 12 61 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x61
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 8
        ; Exact mapped bytes E8 77 B1 00 00: call 0x45d850
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 21 AD 09 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xad
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 51 CF FF FF: call 0x44f644
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 4A B1 09 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xb1
        __asm _emit 0x09
        __asm _emit 0x00
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
        add esp, 24h
        cmp ebp, esp
        ; Exact mapped bytes E8 C8 60 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x60
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
