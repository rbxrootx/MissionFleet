// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004280B0 .. +0x321 bytes.
extern "C" __declspec(naked) void FUN_004280b0_004280B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 14h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov ecx, dword ptr [ecx + 150h]
        ; Exact mapped bytes E8 35 90 FD FF: call 0x401113
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0xfd
        __asm _emit 0xff
        push 78h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov ecx, dword ptr [edx + 150h]
        ; Exact mapped bytes E8 12 8F FD FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x8f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x42810a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 32h
        ; Exact mapped bytes 0F 8D 3D 01 00 00: jge 0x428251
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 370h
        cmp dword ptr [edx + eax + 16bdch], 0
        ; Exact mapped bytes 0F 85 1B 01 00 00: jne 0x42824c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16be0h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [eax + 150h]
        ; Exact mapped bytes E8 AF 8E FD FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x42816d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 8D D5 00 00 00: jge 0x42824c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 0ah
        ; Exact mapped bytes 66 8B 8C 02 2E 01 00 00: mov cx, word ptr [edx + eax + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 5
        ; Exact mapped bytes 74 66: je 0x428210
        __asm _emit 0x74
        __asm _emit 0x66
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 0ah
        ; Exact mapped bytes 66 8B 8C 02 2E 01 00 00: mov cx, word ptr [edx + eax + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 6
        ; Exact mapped bytes 74 33: je 0x428210
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 0ah
        ; Exact mapped bytes 66 8B 8C 02 2E 01 00 00: mov cx, word ptr [edx + eax + 0x12e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        and ecx, 0ffffh
        cmp ecx, 0dh
        ; Exact mapped bytes 75 37: jne 0x428247
        __asm _emit 0x75
        __asm _emit 0x37
        push 0ah
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 0ah
        lea ecx, [edx + eax + 12eh]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [eax + 150h]
        ; Exact mapped bytes E8 C3 8D FD FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 18 FF FF FF: jmp 0x428164
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B0 FE FF FF: jmp 0x428101
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x428263
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 64h
        ; Exact mapped bytes 0F 8D 81 00 00 00: jge 0x4282ee
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [eax + ecx*4 + 94h], -1
        ; Exact mapped bytes 74 69: je 0x4282e9
        __asm _emit 0x74
        __asm _emit 0x69
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 278h]
        shr edx, 1
        and edx, 7fffffffh
        cmp edx, -1
        ; Exact mapped bytes 74 46: je 0x4282e9
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 37ch
        cmp dword ptr [ecx + edx + 2e4h], 0
        ; Exact mapped bytes 75 2D: jne 0x4282e9
        __asm _emit 0x75
        __asm _emit 0x2d
        push 37ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 37ch
        lea eax, [ecx + edx + 224h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov ecx, dword ptr [edx + 150h]
        ; Exact mapped bytes E8 21 8D FD FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 6C FF FF FF: jmp 0x42825a
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 1ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 78h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [eax + 150h]
        ; Exact mapped bytes E8 FF 8C FD FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 85 92 FD FF: call 0x40159b
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 3C 8E FD FF: call 0x401159
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 0B: jmp 0x42832d
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 64 90 FD FF: call 0x40138e
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x90
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 3A: je 0x42836d
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 74 2D: je 0x42836b
        __asm _emit 0x74
        __asm _emit 0x2d
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes E8 F4 D3 03 00: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xd3
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        add eax, 1
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        push 0
        push 0
        push 80016000h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B7 1D 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB B5: jmp 0x428322
        __asm _emit 0xeb
        __asm _emit 0xb5
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [eax + 150h]
        ; Exact mapped bytes E8 B8 95 FD FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov ecx, dword ptr [edx + 150h]
        ; Exact mapped bytes E8 91 91 FD FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x91
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 1
        push 0
        push 800200f0h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes E8 7B 1D 00 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 46ch
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 10h]
        ; Exact mapped bytes E8 ED 95 FD FF: call 0x4019a6
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A7 8E FD FF: call 0x401267
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x8e
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 23 CA 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
