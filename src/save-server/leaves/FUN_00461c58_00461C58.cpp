// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00461C58 .. +0x15C bytes.
extern "C" __declspec(naked) void FUN_00461c58_00461C58() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f78fh
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
        sub esp, 50h
        push esi
        mov eax, dword ptr [ebp + 8]
        sub eax, 40h
        mov dword ptr [ebp - 54h], eax
        push 0cdh
        push 67ca48h
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        ; Exact mapped bytes E8 D0 85 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [edx + 20h]
        mov eax, dword ptr [ebp - 54h]
        mov edx, dword ptr [eax + 20h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 18: je 0x461cc9
        __asm _emit 0x74
        __asm _emit 0x18
        lea ecx, [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 54h]
        mov ecx, dword ptr [edx + 20h]
        mov eax, dword ptr [ebp - 54h]
        mov edx, dword ptr [eax + 20h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 6C: call dword ptr [eax + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x6c
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 0A: jne 0x461cd9
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 8000ffffh
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x461da3
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 5C 44 12 00: call 0x58613d
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x44
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 48h], 1
        mov dword ptr [ebp - 14h], 10h
        lea ecx, [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 17 FE FF FF: call 0x461b1d
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x461d25
        __asm _emit 0x75
        __asm _emit 0x1b
        mov dword ptr [ebp - 58h], 8000ffffh
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 4B 45 12 00: call 0x58626b
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x45
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 58h]
        ; Exact mapped bytes EB 7E: jmp 0x461da3
        __asm _emit 0xeb
        __asm _emit 0x7e
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 23: je 0x461d4e
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 54h]
        cmp dword ptr [eax + 24h], -1
        ; Exact mapped bytes 75 0F: jne 0x461d43
        __asm _emit 0x75
        __asm _emit 0x0f
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 4F 67 0C 00: call 0x52848b
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x67
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 0B: jmp 0x461d4e
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 54h]
        mov ecx, dword ptr [eax + 24h]
        mov dword ptr [edx], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 36: je 0x461d8a
        __asm _emit 0x74
        __asm _emit 0x36
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 7A 67 0C 00: call 0x5284d6
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x67
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 0ffffh
        ; Exact mapped bytes 75 0B: jne 0x461d6e
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], 0ffffh
        ; Exact mapped bytes EB 1C: jmp 0x461d8a
        __asm _emit 0xeb
        __asm _emit 0x1c
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 60 67 0C 00: call 0x5284d6
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x67
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esi, eax
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 3D 67 0C 00: call 0x5284bd
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x67
        __asm _emit 0x0c
        __asm _emit 0x00
        sub esi, eax
        add esi, 1
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], esi
        mov dword ptr [ebp - 5ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 CB 44 12 00: call 0x58626b
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x44
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
