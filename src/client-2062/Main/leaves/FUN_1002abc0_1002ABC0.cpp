// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002ABC0 .. +0x1D6 bytes.
extern "C" __declspec(naked) void FUN_1002abc0_1002ABC0() {
    __asm {
        push -1
        push 1016dbc9h
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
        push ecx
        mov eax, dword ptr [esp + 24h]
        mov edx, dword ptr [esp + 1ch]
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [esp + 2ch]
        mov edi, 3e8h
        push edi
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        mov ecx, dword ptr [esp + 2ch]
        push edx
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes E8 0B 36 FE FF: call 0x1000e210
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x36
        __asm _emit 0xfe
        __asm _emit 0xff
        xor ebx, ebx
        mov eax, 1
        mov edx, 5
        mov ecx, 0ah
        push 58h
        mov dword ptr [esp + 1ch], ebx
        mov dword ptr [esi], 10175734h
        mov dword ptr [esi + 98h], eax
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 58h], edx
        mov dword ptr [esi + 60h], ecx
        mov dword ptr [esi + 5ch], edx
        mov dword ptr [esi + 64h], ecx
        mov dword ptr [esi + 0d4h], ebx
        mov dword ptr [esi + 0d8h], 5f5e100h
        mov dword ptr [esi + 94h], ebx
        mov dword ptr [esi + 0a4h], ebx
        mov dword ptr [esi + 0b0h], ebx
        mov dword ptr [esi + 0b4h], 2eeh
        mov dword ptr [esi + 68h], 5dch
        mov dword ptr [esi + 0ach], ebx
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes E8 22 1B 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x1b
        __asm _emit 0x14
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        cmp edi, ebx
        mov byte ptr [esp + 18h], 1
        ; Exact mapped bytes 74 24: je 0x1002acb4
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        push ebx
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 0C 3D 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x3d
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x1002acb6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esi + 0cch], ecx
        ; Exact mapped bytes E8 96 44 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x44
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0cch]
        push 58h
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E8 C3 1A 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x1a
        __asm _emit 0x14
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 30h], edi
        cmp edi, ebx
        mov byte ptr [esp + 18h], 2
        ; Exact mapped bytes 74 22: je 0x1002ad11
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        push ebx
        push ebx
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 AD 3C 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x3c
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x1002ad13
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0c8h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        push 20h
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esi + 0c4h], ebx
        ; Exact mapped bytes E8 70 1A 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x1a
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 30h], eax
        cmp eax, ebx
        mov byte ptr [esp + 18h], 3
        ; Exact mapped bytes 74 32: je 0x1002ad72
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D D4 57 1C 10: mov ecx, dword ptr [0x101c57d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 170h], 0ch
        ; Exact mapped bytes 7E 17: jle 0x1002ad66
        __asm _emit 0x7e
        __asm _emit 0x17
        mov ecx, dword ptr [ecx + 194h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0D: je 0x1002ad66
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ecx + 30h]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 9C DB 01 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 0E: jmp 0x1002ad74
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor ecx, ecx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 90 DB 01 00: call 0x10048900
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1002ad74
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [esi + 0dch], eax
        mov dword ptr [esi + 0d0h], ebx
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
