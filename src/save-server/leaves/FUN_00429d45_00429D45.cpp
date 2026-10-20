// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429D45 .. +0x1BF bytes.
extern "C" __declspec(naked) void FUN_00429d45_00429D45() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D5 01 00 00: call 0x429f46
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 4], -1
        ; Exact mapped bytes 0F 84 F7 00 00 00: je 0x429e75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        push 46ah
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 17 7C FD FF: call 0x4019a6
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x7c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D1 74 FD FF: call 0x401267
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x74
        __asm _emit 0xfd
        __asm _emit 0xff
        push -1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 06 7C FD FF: call 0x4019a6
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x7c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DD 75 FD FF: call 0x401384
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x75
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 48h], 0
        ; Exact mapped bytes 74 12: je 0x429dc2
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 7C 3A 00 00: call 0x42d83e
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 84 C1 68 00: call dword ptr [0x68c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 18 B0 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 0c8h], 0
        ; Exact mapped bytes 74 46: je 0x429e34
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1A: je 0x429e20
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 D5 AF 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x429e27
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 0c8h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0cch], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 0d4h], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 0d0h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0d8h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 0dch], 0
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 20: je 0x429e9e
        __asm _emit 0x74
        __asm _emit 0x20
        mov esi, esp
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [edx + 50h]
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 50h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        cmp esi, esp
        ; Exact mapped bytes E8 54 AF 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 57: jmp 0x429ef5
        __asm _emit 0xeb
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D 50 50 68 00: mov ecx, dword ptr [0x685050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        sub ecx, 1
        ; Exact mapped bytes 89 0D 50 50 68 00: mov dword ptr [0x685050], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 50 50 68 00: mov edx, dword ptr [0x685050]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        push 670698h
        ; Exact mapped bytes E8 57 67 07 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x67
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1B: je 0x429eee
        __asm _emit 0x74
        __asm _emit 0x1b
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 07 AF 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x429ef5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        pop esi
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 F0 AE 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
