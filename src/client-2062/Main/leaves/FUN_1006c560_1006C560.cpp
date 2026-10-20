// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006C560 .. +0x239 bytes.
extern "C" __declspec(naked) void FUN_1006c560_1006C560() {
    __asm {
        push -1
        push 1016f616h
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
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov eax, 1
        push edi
        mov ecx, dword ptr [esi + 20b98h]
        mov dword ptr [esi + 10464h], 10000000h
        mov dword ptr [esi + 10510h], ebx
        mov dword ptr [esi + 110h], eax
        mov dword ptr [esi + 370h], ebx
        mov dword ptr [esi + 374h], ebx
        mov dword ptr [esi + 390h], ebx
        mov dword ptr [esi + 37ch], eax
        mov dword ptr [esi + 394h], ebx
        mov dword ptr [esi + 104f0h], ebx
        mov dword ptr [esi + 104f8h], ebx
        mov dword ptr [esi + 104f4h], ebx
        mov dword ptr [esi + 36ch], ebx
        mov dword ptr [esi + 20b88h], ebx
        ; Exact mapped bytes 66 C7 86 84 0B 02 00 08 00: mov word ptr [esi + 0x20b84], 8
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [esi + 104c8h], ebx
        mov dword ptr [esi + 104cch], ebx
        mov dword ptr [esi + 10488h], ebx
        mov dword ptr [esi + 108b4h], 0ffffffffh
        ; Exact mapped bytes E8 0C 81 09 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x81
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 20b98h]
        push 262h
        ; Exact mapped bytes E8 AC 27 09 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x27
        __asm _emit 0x09
        __asm _emit 0x00
        lea ecx, [esi + 0d0h]
        mov edx, 8
        mov edi, 0fffeh
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 21 78 24: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x1006c624
        __asm _emit 0x75
        __asm _emit 0xf4
        lea edi, [esi + 10894h]
        mov ecx, 8
        mov eax, 0aaaaaaaah
        push ebp
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea edi, [esi + 10a4ch]
        mov ebp, 4
        mov ecx, dword ptr [edi - 14h]
        push ebx
        ; Exact mapped bytes E8 C9 30 09 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push ebx
        ; Exact mapped bytes E8 C1 30 09 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 E9: jne 0x1006c64e
        __asm _emit 0x75
        __asm _emit 0xe9
        mov ecx, dword ptr [esi + 10a48h]
        push ebx
        ; Exact mapped bytes E8 AF 30 09 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x30
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, 80h
        xor eax, eax
        lea edi, [esi + 168h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, dword ptr [esi + 104e0h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 BE 94 05 01 00 04: cmp word ptr [esi + 0x10594], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x04
        pop ebp
        ; Exact mapped bytes 75 10: jne 0x1006c6a6
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 1F FB FB FF: call 0x1002c1c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xfb
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 30h
        ; Exact mapped bytes 7F 1A: jg 0x1006c6c0
        __asm _emit 0x7f
        __asm _emit 0x1a
        ; Exact mapped bytes 66 83 BE 94 05 01 00 05: cmp word ptr [esi + 0x10594], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 75 36: jne 0x1006c6e6
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 05 FB FB FF: call 0x1002c1c0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfb
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp eax, 18h
        ; Exact mapped bytes 7E 26: jle 0x1006c6e6
        __asm _emit 0x7e
        __asm _emit 0x26
        push 30h
        ; Exact mapped bytes E8 D9 00 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 0ch], eax
        cmp eax, ebx
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 74 3A: je 0x1006c710
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 0D A8 7D 1A 10: mov ecx, dword ptr [0x101a7da8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 9C 83 09 00: call 0x10104a80
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x83
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 2C: jmp 0x1006c712
        __asm _emit 0xeb
        __asm _emit 0x2c
        push 30h
        ; Exact mapped bytes E8 B3 00 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 0ch], eax
        cmp eax, ebx
        mov dword ptr [esp + 18h], 1
        ; Exact mapped bytes 74 10: je 0x1006c710
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 C0 7D 1A 10: mov edx, dword ptr [0x101a7dc0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        mov ecx, eax
        push edx
        ; Exact mapped bytes E8 72 83 09 00: call 0x10104a80
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x83
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1006c712
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 109fch], eax
        mov dword ptr [esi + 109f8h], eax
        ; Exact mapped bytes 8B 0D 50 58 1C 10: mov ecx, dword ptr [0x101c5850]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 18h], 0ffffffffh
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x1006c735
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [esi + 109f8h]
        ; Exact mapped bytes A3 50 58 1C 10: mov dword ptr [0x101c5850], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 2C 56 1C 10: mov eax, dword ptr [0x101c562c]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, ebx
        ; Exact mapped bytes 74 23: je 0x1006c76c
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [esi + 109f8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 19: je 0x1006c76c
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 109f8h]
        ; Exact mapped bytes 8B 15 F8 58 1C 10: mov edx, dword ptr [0x101c58f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edx
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 3C 56 1C 10: mov ecx, dword ptr [0x101c563c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1
        or ecx, 10000h
        ; Exact mapped bytes 89 0D 3C 56 1C 10: mov dword ptr [0x101c563c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, esi
        ; Exact mapped bytes E8 29 F8 FF FF: call 0x1006bfb0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 10h]
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
        ret
    }
}
