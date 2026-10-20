// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B3F70 .. +0xC24 bytes.
extern "C" __declspec(naked) void FUN_004b3f70_004B3F70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2a8h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 22ch], 0
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp + 0ch]
        mov cl, byte ptr [eax]
        mov byte ptr [ebp - 28h], cl
        ; Exact mapped bytes 0F BE 55 D8: movsx edx, byte ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 0ch]
        add eax, 1
        mov dword ptr [ebp + 0ch], eax
        test edx, edx
        ; Exact mapped bytes 0F 84 D6 0B 00 00: je 0x4b4b87
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 22ch], 0
        ; Exact mapped bytes 0F 8C C9 0B 00 00: jl 0x4b4b87
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc9
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 4D D8: movsx ecx, byte ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xd8
        cmp ecx, 20h
        ; Exact mapped bytes 7C 1F: jl 0x4b3fe6
        __asm _emit 0x7c
        __asm _emit 0x1f
        ; Exact mapped bytes 0F BE 55 D8: movsx edx, byte ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xd8
        cmp edx, 78h
        ; Exact mapped bytes 7F 16: jg 0x4b3fe6
        __asm _emit 0x7f
        __asm _emit 0x16
        ; Exact mapped bytes 0F BE 45 D8: movsx eax, byte ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes 0F BE 88 C0 C7 58 00: movsx ecx, byte ptr [eax + 0x58c7c0]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x88
        __asm _emit 0xc0
        __asm _emit 0xc7
        __asm _emit 0x58
        __asm _emit 0x00
        and ecx, 0fh
        mov dword ptr [ebp - 290h], ecx
        ; Exact mapped bytes EB 0A: jmp 0x4b3ff0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 290h], 0
        mov edx, dword ptr [ebp - 290h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 94 C1 E0 C7 58 00: movsx edx, byte ptr [ecx + eax*8 + 0x58c7e0]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0xc7
        __asm _emit 0x58
        __asm _emit 0x00
        sar edx, 4
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 294h], eax
        cmp dword ptr [ebp - 294h], 7
        ; Exact mapped bytes 0F 87 5F 0B 00 00: ja 0x4b4b82
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x5f
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 294h]
        ; Exact mapped bytes FF 24 8D 94 4B 4B 00: jmp dword ptr [ecx*4 + 0x4b4b94]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x94
        __asm _emit 0x4b
        __asm _emit 0x4b
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 28h]
        and edx, 0ffh
        ; Exact mapped bytes A1 7C 16 5D 00: mov eax, dword ptr [0x5d167c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 0C 50: mov cx, word ptr [eax + edx*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x0c
        __asm _emit 0x50
        and ecx, 8000h
        test ecx, ecx
        ; Exact mapped bytes 74 58: je 0x4b40ad
        __asm _emit 0x74
        __asm _emit 0x58
        lea edx, [ebp - 22ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 0F BE 4D D8: movsx ecx, byte ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xd8
        push ecx
        ; Exact mapped bytes E8 36 0C 00 00: call 0x4b4ca0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 0ch]
        mov al, byte ptr [edx]
        mov byte ptr [ebp - 28h], al
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes 0F BE 55 D8: movsx edx, byte ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xd8
        test edx, edx
        ; Exact mapped bytes 75 21: jne 0x4b40a7
        __asm _emit 0x75
        __asm _emit 0x21
        push 58c860h
        push 0
        push 186h
        push 58c854h
        push 2
        ; Exact mapped bytes E8 92 CA FF FF: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4b40a7
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D1: jne 0x4b407e
        __asm _emit 0x75
        __asm _emit 0xd1
        lea ecx, [ebp - 22ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 0F BE 45 D8: movsx eax, byte ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xd8
        push eax
        ; Exact mapped bytes E8 DE 0B 00 00: call 0x4b4ca0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 B8 0A 00 00: jmp 0x4b4b82
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 23ch], ecx
        mov edx, dword ptr [ebp - 23ch]
        mov dword ptr [ebp - 244h], edx
        mov eax, dword ptr [ebp - 244h]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 234h], 0ffffffffh
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes E9 76 0A 00 00: jmp 0x4b4b82
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 4D D8: movsx ecx, byte ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xd8
        mov dword ptr [ebp - 298h], ecx
        mov edx, dword ptr [ebp - 298h]
        sub edx, 20h
        mov dword ptr [ebp - 298h], edx
        cmp dword ptr [ebp - 298h], 10h
        ; Exact mapped bytes 77 48: ja 0x4b4176
        __asm _emit 0x77
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 298h]
        xor eax, eax
        mov al, byte ptr [ecx + 4b4bcch]
        ; Exact mapped bytes FF 24 85 B4 4B 4B 00: jmp dword ptr [eax*4 + 0x4b4bb4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x4b
        __asm _emit 0x4b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        or edx, 4
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 28: jmp 0x4b4176
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 4]
        or al, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 1E: jmp 0x4b4176
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        or ecx, 2
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 13: jmp 0x4b4176
        __asm _emit 0xeb
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        or dl, 80h
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 08: jmp 0x4b4176
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        or al, 8
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 07 0A 00 00: jmp 0x4b4b82
        __asm _emit 0xe9
        __asm _emit 0x07
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 4D D8: movsx ecx, byte ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xd8
        cmp ecx, 2ah
        ; Exact mapped bytes 75 33: jne 0x4b41b7
        __asm _emit 0x75
        __asm _emit 0x33
        lea edx, [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 23 0C 00 00: call 0x4b4db0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 244h], eax
        cmp dword ptr [ebp - 244h], 0
        ; Exact mapped bytes 7D 16: jge 0x4b41b5
        __asm _emit 0x7d
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        or al, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 244h]
        neg ecx
        mov dword ptr [ebp - 244h], ecx
        ; Exact mapped bytes EB 17: jmp 0x4b41ce
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 244h]
        imul edx, edx, 0ah
        ; Exact mapped bytes 0F BE 45 D8: movsx eax, byte ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xd8
        lea ecx, [edx + eax - 30h]
        mov dword ptr [ebp - 244h], ecx
        ; Exact mapped bytes E9 AF 09 00 00: jmp 0x4b4b82
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 234h], 0
        ; Exact mapped bytes E9 A0 09 00 00: jmp 0x4b4b82
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 55 D8: movsx edx, byte ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xd8
        cmp edx, 2ah
        ; Exact mapped bytes 75 27: jne 0x4b4212
        __asm _emit 0x75
        __asm _emit 0x27
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 BC 0B 00 00: call 0x4b4db0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 234h], eax
        cmp dword ptr [ebp - 234h], 0
        ; Exact mapped bytes 7D 0A: jge 0x4b4210
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov dword ptr [ebp - 234h], 0ffffffffh
        ; Exact mapped bytes EB 17: jmp 0x4b4229
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 234h]
        imul ecx, ecx, 0ah
        ; Exact mapped bytes 0F BE 55 D8: movsx edx, byte ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xd8
        lea eax, [ecx + edx - 30h]
        mov dword ptr [ebp - 234h], eax
        ; Exact mapped bytes E9 54 09 00 00: jmp 0x4b4b82
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 4D D8: movsx ecx, byte ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xd8
        mov dword ptr [ebp - 29ch], ecx
        mov edx, dword ptr [ebp - 29ch]
        sub edx, 49h
        mov dword ptr [ebp - 29ch], edx
        cmp dword ptr [ebp - 29ch], 2eh
        ; Exact mapped bytes 77 6C: ja 0x4b42bc
        __asm _emit 0x77
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 29ch]
        xor eax, eax
        mov al, byte ptr [ecx + 4b4bf1h]
        ; Exact mapped bytes FF 24 85 DD 4B 4B 00: jmp dword ptr [eax*4 + 0x4b4bdd]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x4b
        __asm _emit 0x4b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        or edx, 10h
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 4C: jmp 0x4b42bc
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 36h
        ; Exact mapped bytes 75 20: jne 0x4b429b
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 42 01: movsx eax, byte ptr [edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x01
        cmp eax, 34h
        ; Exact mapped bytes 75 14: jne 0x4b429b
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 2
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        or dh, 80h
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 0C: jmp 0x4b42a7
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes E9 89 FD FF FF: jmp 0x4b4030
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x4b42bc
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        or al, 20h
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x4b42bc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        or ch, 8
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E9 C1 08 00 00: jmp 0x4b4b82
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 55 D8: movsx edx, byte ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xd8
        mov dword ptr [ebp - 2a0h], edx
        mov eax, dword ptr [ebp - 2a0h]
        sub eax, 43h
        mov dword ptr [ebp - 2a0h], eax
        cmp dword ptr [ebp - 2a0h], 35h
        ; Exact mapped bytes 0F 87 C0 06 00 00: ja 0x4b49a7
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2a0h]
        xor ecx, ecx
        mov cl, byte ptr [edx + 4b4c5ch]
        ; Exact mapped bytes FF 24 8D 20 4C 4B 00: jmp dword ptr [ecx*4 + 0x4b4c20]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x20
        __asm _emit 0x4c
        __asm _emit 0x4b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        and eax, 830h
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x4b4311
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        or ch, 8
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        and edx, 810h
        test edx, edx
        ; Exact mapped bytes 74 39: je 0x4b4357
        __asm _emit 0x74
        __asm _emit 0x39
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 C9 0A 00 00: call 0x4b4df0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes 66 89 45 EC: mov word ptr [ebp - 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 66 8B 4D EC: mov cx, word ptr [ebp - 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xec
        push ecx
        lea edx, [ebp - 228h]
        push edx
        ; Exact mapped bytes E8 71 BC 00 00: call 0x4bffb0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 7D 0A: jge 0x4b4355
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov dword ptr [ebp - 23ch], 1
        ; Exact mapped bytes EB 26: jmp 0x4b437d
        __asm _emit 0xeb
        __asm _emit 0x26
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 50 0A 00 00: call 0x4b4db0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes 66 89 85 B8 FD FF FF: mov word ptr [ebp - 0x248], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov cl, byte ptr [ebp - 248h]
        mov byte ptr [ebp - 228h], cl
        mov dword ptr [ebp - 24h], 1
        lea edx, [ebp - 228h]
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes E9 1C 06 00 00: jmp 0x4b49a7
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 1C 0A 00 00: call 0x4b4db0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24ch], eax
        cmp dword ptr [ebp - 24ch], 0
        ; Exact mapped bytes 74 0C: je 0x4b43b2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 24ch]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 1A: jne 0x4b43cc
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 15 D0 18 5D 00: mov edx, dword ptr [0x5d18d0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 0C 50 FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 4F: jmp 0x4b441b
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 4]
        and ecx, 800h
        test ecx, ecx
        ; Exact mapped bytes 74 23: je 0x4b43fc
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 24ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes 0F BF 11: movsx edx, word ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x11
        shr edx, 1
        mov dword ptr [ebp - 24h], edx
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 1F: jmp 0x4b441b
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 24ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 24ch]
        ; Exact mapped bytes 0F BF 02: movsx eax, word ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x02
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes E9 87 05 00 00: jmp 0x4b49a7
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        and ecx, 830h
        test ecx, ecx
        ; Exact mapped bytes 75 09: jne 0x4b4436
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        or dh, 8
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 234h], -1
        ; Exact mapped bytes 75 0C: jne 0x4b444b
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 2a4h], 7fffffffh
        ; Exact mapped bytes EB 0C: jmp 0x4b4457
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 234h]
        mov dword ptr [ebp - 2a4h], eax
        mov ecx, dword ptr [ebp - 2a4h]
        mov dword ptr [ebp - 258h], ecx
        lea edx, [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 44 09 00 00: call 0x4b4db0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 4]
        and eax, 810h
        test eax, eax
        ; Exact mapped bytes 74 68: je 0x4b44e6
        __asm _emit 0x74
        __asm _emit 0x68
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 09: jne 0x4b448d
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 8B 0D D4 18 5D 00: mov ecx, dword ptr [0x5d18d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 1ch], 1
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 254h], edx
        mov eax, dword ptr [ebp - 258h]
        mov ecx, dword ptr [ebp - 258h]
        sub ecx, 1
        mov dword ptr [ebp - 258h], ecx
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x4b44d6
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 254h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4b44d6
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 254h]
        add ecx, 2
        mov dword ptr [ebp - 254h], ecx
        ; Exact mapped bytes EB C7: jmp 0x4b449d
        __asm _emit 0xeb
        __asm _emit 0xc7
        mov edx, dword ptr [ebp - 254h]
        sub edx, dword ptr [ebp - 20h]
        sar edx, 1
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes EB 5A: jmp 0x4b4540
        __asm _emit 0xeb
        __asm _emit 0x5a
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 08: jne 0x4b44f4
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes A1 D0 18 5D 00: mov eax, dword ptr [0x5d18d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x18
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 250h], ecx
        mov edx, dword ptr [ebp - 258h]
        mov eax, dword ptr [ebp - 258h]
        sub eax, 1
        mov dword ptr [ebp - 258h], eax
        test edx, edx
        ; Exact mapped bytes 74 1E: je 0x4b4534
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 250h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x4b4534
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 250h]
        add eax, 1
        mov dword ptr [ebp - 250h], eax
        ; Exact mapped bytes EB C9: jmp 0x4b44fd
        __asm _emit 0xeb
        __asm _emit 0xc9
        mov ecx, dword ptr [ebp - 250h]
        sub ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes E9 62 04 00 00: jmp 0x4b49a7
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 62 08 00 00: call 0x4b4db0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 25ch], eax
        mov eax, dword ptr [ebp - 4]
        and eax, 20h
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x4b4573
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 25ch]
        ; Exact mapped bytes 66 8B 95 D4 FD FF FF: mov dx, word ptr [ebp - 0x22c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 11: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes EB 0E: jmp 0x4b4581
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 25ch]
        mov ecx, dword ptr [ebp - 22ch]
        mov dword ptr [eax], ecx
        mov dword ptr [ebp - 23ch], 1
        ; Exact mapped bytes E9 17 04 00 00: jmp 0x4b49a7
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 1
        mov dl, byte ptr [ebp - 28h]
        add dl, 20h
        mov byte ptr [ebp - 28h], dl
        mov eax, dword ptr [ebp - 4]
        or al, 40h
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 228h]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 234h], 0
        ; Exact mapped bytes 7D 0C: jge 0x4b45c6
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 234h], 6
        ; Exact mapped bytes EB 1C: jmp 0x4b45e2
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 234h], 0
        ; Exact mapped bytes 75 13: jne 0x4b45e2
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes 0F BE 55 D8: movsx edx, byte ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xd8
        cmp edx, 67h
        ; Exact mapped bytes 75 0A: jne 0x4b45e2
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ebp - 234h], 1
        mov eax, dword ptr [ebp + 10h]
        add eax, 8
        mov dword ptr [ebp + 10h], eax
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 8
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 264h], edx
        mov dword ptr [ebp - 260h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 234h]
        push edx
        ; Exact mapped bytes 0F BE 45 D8: movsx eax, byte ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xd8
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        lea edx, [ebp - 264h]
        push edx
        ; Exact mapped bytes FF 15 64 16 5D 00: call dword ptr [0x5d1664]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        add esp, 14h
        mov eax, dword ptr [ebp - 4]
        and eax, 80h
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x4b4648
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [ebp - 234h], 0
        ; Exact mapped bytes 75 0D: jne 0x4b4648
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 70 16 5D 00: call dword ptr [0x5d1670]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes 0F BE 55 D8: movsx edx, byte ptr [ebp - 0x28]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xd8
        cmp edx, 67h
        ; Exact mapped bytes 75 19: jne 0x4b466a
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        and eax, 80h
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x4b466a
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 68 16 5D 00: call dword ptr [0x5d1668]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x16
        __asm _emit 0x5d
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 2dh
        ; Exact mapped bytes 75 12: jne 0x4b4687
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        or ch, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 40 4D FF FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes E9 0C 03 00 00: jmp 0x4b49a7
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        or ecx, 40h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 238h], 0ah
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x4b4735
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 238h], 0ah
        ; Exact mapped bytes EB 76: jmp 0x4b4735
        __asm _emit 0xeb
        __asm _emit 0x76
        mov dword ptr [ebp - 234h], 8
        mov dword ptr [ebp - 230h], 7
        ; Exact mapped bytes EB 0A: jmp 0x4b46df
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 230h], 27h
        mov dword ptr [ebp - 238h], 10h
        mov edx, dword ptr [ebp - 4]
        and edx, 80h
        test edx, edx
        ; Exact mapped bytes 74 1D: je 0x4b4713
        __asm _emit 0x74
        __asm _emit 0x1d
        mov byte ptr [ebp - 240h], 30h
        mov eax, dword ptr [ebp - 230h]
        add eax, 51h
        mov byte ptr [ebp - 23fh], al
        mov dword ptr [ebp - 10h], 2
        ; Exact mapped bytes EB 20: jmp 0x4b4735
        __asm _emit 0xeb
        __asm _emit 0x20
        mov dword ptr [ebp - 238h], 8
        mov ecx, dword ptr [ebp - 4]
        and ecx, 80h
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x4b4735
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        or dh, 2
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        and eax, 8000h
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x4b475e
        __asm _emit 0x74
        __asm _emit 0x1d
        lea ecx, [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 86 06 00 00: call 0x4b4dd0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 278h], eax
        mov dword ptr [ebp - 274h], edx
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x4b47ef
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        and edx, 20h
        test edx, edx
        ; Exact mapped bytes 74 48: je 0x4b47b0
        __asm _emit 0x74
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 4]
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x4b4790
        __asm _emit 0x74
        __asm _emit 0x1e
        lea ecx, [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 35 06 00 00: call 0x4b4db0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        cdq
        mov dword ptr [ebp - 278h], eax
        mov dword ptr [ebp - 274h], edx
        ; Exact mapped bytes EB 1E: jmp 0x4b47ae
        __asm _emit 0xeb
        __asm _emit 0x1e
        lea edx, [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 17 06 00 00: call 0x4b4db0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        and eax, 0ffffh
        cdq
        mov dword ptr [ebp - 278h], eax
        mov dword ptr [ebp - 274h], edx
        ; Exact mapped bytes EB 3F: jmp 0x4b47ef
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 4]
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x4b47d5
        __asm _emit 0x74
        __asm _emit 0x1b
        lea ecx, [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 ED 05 00 00: call 0x4b4db0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cdq
        mov dword ptr [ebp - 278h], eax
        mov dword ptr [ebp - 274h], edx
        ; Exact mapped bytes EB 1A: jmp 0x4b47ef
        __asm _emit 0xeb
        __asm _emit 0x1a
        lea edx, [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 D2 05 00 00: call 0x4b4db0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor ecx, ecx
        mov dword ptr [ebp - 278h], eax
        mov dword ptr [ebp - 274h], ecx
        mov edx, dword ptr [ebp - 4]
        and edx, 40h
        test edx, edx
        ; Exact mapped bytes 74 3E: je 0x4b4837
        __asm _emit 0x74
        __asm _emit 0x3e
        cmp dword ptr [ebp - 274h], 0
        ; Exact mapped bytes 7F 35: jg 0x4b4837
        __asm _emit 0x7f
        __asm _emit 0x35
        ; Exact mapped bytes 7C 09: jl 0x4b480d
        __asm _emit 0x7c
        __asm _emit 0x09
        cmp dword ptr [ebp - 278h], 0
        ; Exact mapped bytes 73 2A: jae 0x4b4837
        __asm _emit 0x73
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 278h]
        neg eax
        mov ecx, dword ptr [ebp - 274h]
        adc ecx, 0
        neg ecx
        mov dword ptr [ebp - 26ch], eax
        mov dword ptr [ebp - 268h], ecx
        mov edx, dword ptr [ebp - 4]
        or dh, 1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 18: jmp 0x4b484f
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 278h]
        mov dword ptr [ebp - 26ch], eax
        mov ecx, dword ptr [ebp - 274h]
        mov dword ptr [ebp - 268h], ecx
        mov edx, dword ptr [ebp - 4]
        and edx, 8000h
        test edx, edx
        ; Exact mapped bytes 75 1B: jne 0x4b4877
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 26ch]
        mov ecx, dword ptr [ebp - 268h]
        and ecx, 0
        mov dword ptr [ebp - 26ch], eax
        mov dword ptr [ebp - 268h], ecx
        cmp dword ptr [ebp - 234h], 0
        ; Exact mapped bytes 7D 0C: jge 0x4b488c
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 234h], 1
        ; Exact mapped bytes EB 09: jmp 0x4b4895
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        and edx, 0fffffff7h
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 26ch]
        or eax, dword ptr [ebp - 268h]
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4b48ac
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        lea ecx, [ebp - 29h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 234h]
        mov eax, dword ptr [ebp - 234h]
        sub eax, 1
        mov dword ptr [ebp - 234h], eax
        test edx, edx
        ; Exact mapped bytes 7F 14: jg 0x4b48df
        __asm _emit 0x7f
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 26ch]
        or ecx, dword ptr [ebp - 268h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x4b4960
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 238h]
        cdq
        push edx
        push eax
        mov edx, dword ptr [ebp - 268h]
        push edx
        mov eax, dword ptr [ebp - 26ch]
        push eax
        ; Exact mapped bytes E8 65 7B FF FF: call 0x4ac460
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 30h
        mov dword ptr [ebp - 270h], eax
        mov eax, dword ptr [ebp - 238h]
        cdq
        push edx
        push eax
        mov ecx, dword ptr [ebp - 268h]
        push ecx
        mov edx, dword ptr [ebp - 26ch]
        push edx
        ; Exact mapped bytes E8 C0 7B FF FF: call 0x4ac4e0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 26ch], eax
        mov dword ptr [ebp - 268h], edx
        cmp dword ptr [ebp - 270h], 39h
        ; Exact mapped bytes 7E 12: jle 0x4b4947
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 270h]
        add eax, dword ptr [ebp - 230h]
        mov dword ptr [ebp - 270h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dl, byte ptr [ebp - 270h]
        mov byte ptr [ecx], dl
        mov eax, dword ptr [ebp - 20h]
        sub eax, 1
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x4b48b2
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 29h]
        sub ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 4]
        and eax, 200h
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x4b49a7
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 30h
        ; Exact mapped bytes 75 06: jne 0x4b498f
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 18: jne 0x4b49a7
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 20h]
        sub eax, 1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov byte ptr [ecx], 30h
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 23ch], 0
        ; Exact mapped bytes 0F 85 CE 01 00 00: jne 0x4b4b82
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x4b4a0d
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 4]
        and ecx, 100h
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x4b49db
        __asm _emit 0x74
        __asm _emit 0x10
        mov byte ptr [ebp - 240h], 2dh
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 32: jmp 0x4b4a0d
        __asm _emit 0xeb
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 4]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 10: je 0x4b49f5
        __asm _emit 0x74
        __asm _emit 0x10
        mov byte ptr [ebp - 240h], 2bh
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 18: jmp 0x4b4a0d
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x4b4a0d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov byte ptr [ebp - 240h], 20h
        mov dword ptr [ebp - 10h], 1
        mov ecx, dword ptr [ebp - 244h]
        sub ecx, dword ptr [ebp - 24h]
        sub ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 27ch], ecx
        mov edx, dword ptr [ebp - 4]
        and edx, 0ch
        test edx, edx
        ; Exact mapped bytes 75 1C: jne 0x4b4a45
        __asm _emit 0x75
        __asm _emit 0x1c
        lea eax, [ebp - 22ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 27ch]
        push edx
        push 20h
        ; Exact mapped bytes E8 DE 02 00 00: call 0x4b4d20
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        lea eax, [ebp - 22ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        lea eax, [ebp - 240h]
        push eax
        ; Exact mapped bytes E8 00 03 00 00: call 0x4b4d60
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 4]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 26: je 0x4b4a93
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 75 1C: jne 0x4b4a93
        __asm _emit 0x75
        __asm _emit 0x1c
        lea eax, [ebp - 22ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 27ch]
        push edx
        push 30h
        ; Exact mapped bytes E8 90 02 00 00: call 0x4b4d20
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x4b4b41
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 8E 9A 00 00 00: jle 0x4b4b41
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 280h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 284h], ecx
        mov edx, dword ptr [ebp - 284h]
        mov eax, dword ptr [ebp - 284h]
        sub eax, 1
        mov dword ptr [ebp - 284h], eax
        test edx, edx
        ; Exact mapped bytes 74 6D: je 0x4b4b3f
        __asm _emit 0x74
        __asm _emit 0x6d
        mov ecx, dword ptr [ebp - 280h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 89 95 5A FD FF FF: mov word ptr [ebp - 0x2a6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x5a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 85 5A FD FF FF: mov ax, word ptr [ebp - 0x2a6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x5a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 288h]
        push ecx
        mov edx, dword ptr [ebp - 280h]
        add edx, 2
        mov dword ptr [ebp - 280h], edx
        ; Exact mapped bytes E8 AB B4 00 00: call 0x4bffb0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 28ch], eax
        cmp dword ptr [ebp - 28ch], 0
        ; Exact mapped bytes 7F 02: jg 0x4b4b19
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes EB 26: jmp 0x4b4b3f
        __asm _emit 0xeb
        __asm _emit 0x26
        lea eax, [ebp - 22ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 28ch]
        push edx
        lea eax, [ebp - 288h]
        push eax
        ; Exact mapped bytes E8 29 02 00 00: call 0x4b4d60
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E9 7A FF FF FF: jmp 0x4b4ab9
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1B: jmp 0x4b4b5c
        __asm _emit 0xeb
        __asm _emit 0x1b
        lea ecx, [ebp - 22ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 07 02 00 00: call 0x4b4d60
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov edx, dword ptr [ebp - 4]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 1C: je 0x4b4b82
        __asm _emit 0x74
        __asm _emit 0x1c
        lea eax, [ebp - 22ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 27ch]
        push edx
        push 20h
        ; Exact mapped bytes E8 A1 01 00 00: call 0x4b4d20
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E9 0D F4 FF FF: jmp 0x4b3f94
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 22ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
