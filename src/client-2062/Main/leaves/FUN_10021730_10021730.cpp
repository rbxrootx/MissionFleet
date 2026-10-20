// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10021730 .. +0x19B bytes.
extern "C" __declspec(naked) void FUN_10021730_10021730() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        cmp dword ptr [esi + 70h], 1
        ; Exact mapped bytes 75 0C: jne 0x10021748
        __asm _emit 0x75
        __asm _emit 0x0c
        cmp dword ptr [esi + 74h], 6
        ; Exact mapped bytes 75 06: jne 0x10021748
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 89 1D 00 59 1C 10: mov dword ptr [0x101c5900], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 70h]
        cmp eax, ebx
        mov eax, dword ptr [esi + 74h]
        ; Exact mapped bytes 0F 84 F8 00 00 00: je 0x1002184e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 0E: jne 0x10021769
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 3A AD 04 00: call 0x1006c4a0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        pop esi
        pop ebx
        ret
        cmp eax, 4
        ; Exact mapped bytes 0F 84 56 01 00 00: je 0x100218c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 5
        ; Exact mapped bytes 0F 84 4D 01 00 00: je 0x100218c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 8
        ; Exact mapped bytes 0F 84 44 01 00 00: je 0x100218c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 12h
        ; Exact mapped bytes 75 0E: jne 0x10021797
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [esi + 90h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        pop esi
        pop ebx
        ret
        cmp eax, 64h
        ; Exact mapped bytes 75 0F: jne 0x100217ab
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        ; Exact mapped bytes E8 98 B2 02 00: call 0x1004ca40
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xb2
        __asm _emit 0x02
        __asm _emit 0x00
        pop esi
        pop ebx
        ret
        cmp eax, 12eh
        ; Exact mapped bytes 75 0F: jne 0x100217c1
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        pop esi
        mov byte ptr [ecx + 0e4h], bl
        pop ebx
        ret
        cmp eax, 131h
        ; Exact mapped bytes 75 1A: jne 0x100217e2
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 15 08 57 1C 10: mov edx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 0dch]
        mov ecx, dword ptr [eax + 0dch]
        ; Exact mapped bytes E8 F1 2B 06 00: call 0x100843d0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x2b
        __asm _emit 0x06
        __asm _emit 0x00
        pop esi
        pop ebx
        ret
        cmp eax, 190h
        ; Exact mapped bytes 75 20: jne 0x10021809
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [esi + 90h]
        cmp eax, ebx
        ; Exact mapped bytes 0F 84 D1 00 00 00: je 0x100218c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 87 AF 14 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xaf
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 90h], ebx
        pop esi
        pop ebx
        ret
        cmp eax, 1f4h
        ; Exact mapped bytes 75 20: jne 0x10021830
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [esi + 90h]
        cmp eax, ebx
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x100218c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 60 AF 14 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xaf
        __asm _emit 0x14
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 90h], ebx
        pop esi
        pop ebx
        ret
        cmp eax, 258h
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x100218c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F0 56 1C 10: mov ecx, dword ptr [0x101c56f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        pop esi
        pop ebx
        mov eax, dword ptr [ecx + 0d48h]
        or byte ptr [eax + 24h], 2
        ret
        cmp eax, 12h
        ; Exact mapped bytes 75 1B: jne 0x1002186e
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 15 E4 56 1C 10: mov edx, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push 64h
        mov ecx, dword ptr [edx + 30h]
        mov edx, dword ptr [esi + 90h]
        push edx
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        pop esi
        pop ebx
        ret
        cmp eax, 14h
        ; Exact mapped bytes 74 21: je 0x10021894
        __asm _emit 0x74
        __asm _emit 0x21
        cmp eax, 28h
        ; Exact mapped bytes 74 1C: je 0x10021894
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp eax, 320h
        ; Exact mapped bytes 74 15: je 0x10021894
        __asm _emit 0x74
        __asm _emit 0x15
        cmp eax, 321h
        ; Exact mapped bytes 74 0E: je 0x10021894
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp eax, 322h
        ; Exact mapped bytes 74 07: je 0x10021894
        __asm _emit 0x74
        __asm _emit 0x07
        cmp eax, 323h
        ; Exact mapped bytes 75 34: jne 0x100218c8
        __asm _emit 0x75
        __asm _emit 0x34
        ; Exact mapped bytes A1 F8 56 1C 10: mov eax, dword ptr [0x101c56f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ecx, ecx
        mov eax, dword ptr [eax + 9a4h]
        mov cl, byte ptr [eax + 25h]
        and cl, 1fh
        cmp cl, 2
        ; Exact mapped bytes 75 1C: jne 0x100218c8
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 15 E4 56 1C 10: mov edx, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push 64h
        push eax
        mov ecx, dword ptr [edx + 30h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [esi + 94h], 1
        pop esi
        pop ebx
        ret
    }
}
