// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CAB10 .. +0x1E7 bytes.
extern "C" __declspec(naked) void FUN_004cab10_004CAB10() {
    __asm {
        sub esp, 28h
        push ebx
        push esi
        push edi
        push 5e04c0h
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes FF 15 6C 27 5E 00: call dword ptr [0x5e276c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ebx, eax
        push 0ch
        push ebx
        ; Exact mapped bytes 8B 35 E4 1F 5E 00: mov esi, dword ptr [0x5e1fe4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xe4
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edi, eax
        push 0eh
        push ebx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        imul edi, eax
        mov eax, 1
        cmp edi, 4
        ; Exact mapped bytes 7D 02: jge 0x4cab4c
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        push 1
        ; Exact mapped bytes 8B 3D B8 28 5E 00: mov edi, dword ptr [0x5e28b8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 E0 04 5E 00: mov dword ptr [0x5e04e0], eax
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp eax, 15eh
        ; Exact mapped bytes 75 15: jne 0x4cab77
        __asm _emit 0x75
        __asm _emit 0x15
        push 0
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp eax, 280h
        ; Exact mapped bytes 75 0A: jne 0x4cab77
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 E0 04 5E 00 00 00 00 00: mov dword ptr [0x5e04e0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push 0
        ; Exact mapped bytes FF 15 64 27 5E 00: call dword ptr [0x5e2764]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D E0 04 5E 00 00: cmp dword ptr [0x5e04e0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 22: je 0x4cabab
        __asm _emit 0x74
        __asm _emit 0x22
        push 5d2e58h
        ; Exact mapped bytes 8B 35 9C 23 5E 00: mov esi, dword ptr [0x5e239c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x9c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 A3 E8 04 5E 00: mov word ptr [0x5e04e8], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 21: jne 0x4cabc2
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes C7 05 E0 04 5E 00 00 00 00 00: mov dword ptr [0x5e04e0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5e04c0h
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A1 E0 04 5E 00: mov eax, dword ptr [0x5e04e0]
        __asm _emit 0xa1
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 28h
        ret
        push 5d2e40h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 A3 EE 04 5E 00: mov word ptr [0x5e04ee], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 CD: je 0x4caba1
        __asm _emit 0x74
        __asm _emit 0xcd
        push 5d2e50h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 A3 EC 04 5E 00: mov word ptr [0x5e04ec], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push 5d2e48h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 3D EC 04 5E 00 00: cmp word ptr [0x5e04ec], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 A3 EA 04 5E 00: mov word ptr [0x5e04ea], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x4cace4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 DF 00 00 00: je 0x4cace4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5d2e38h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 A3 F2 04 5E 00: mov word ptr [0x5e04f2], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        push 5d2e30h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 3D F2 04 5E 00 00: cmp word ptr [0x5e04f2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 A3 F0 04 5E 00: mov word ptr [0x5e04f0], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0xf0
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x4cacd1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x4cacd1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5d2e5ch
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 A3 F4 04 5E 00: mov word ptr [0x5e04f4], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 55 FF FF FF: je 0x4caba1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 2ah
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes A2 E5 0F 5E 00: mov byte ptr [0x5e0fe5], al
        __asm _emit 0xa2
        __asm _emit 0xe5
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E8 16 FE FF FF: call 0x4caa70
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes E8 7F 01 00 00: call 0x4cade0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 0F 84 35 FF FF FF: je 0x4caba1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, 5e0f40h
        mov esi, 58ed84h
        ; Exact mapped bytes 8B 3D AC 25 5E 00: mov edi, dword ptr [0x5e25ac]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xac
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        lea edx, [esi - 14h]
        mov dword ptr [ebx], eax
        lea ecx, [esp + 0ch]
        push ecx
        add ebx, 18h
        push edx
        add esi, 20h
        push 0
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 10h]
        cmp esi, 58ee44h
        mov dword ptr [ebx - 14h], ecx
        ; Exact mapped bytes 72 DA: jb 0x4cac7c
        __asm _emit 0x72
        __asm _emit 0xda
        lea eax, [esp + 0ch]
        push eax
        push 8002h
        push 0
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x4cacc2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [esp + 10h]
        ; Exact mapped bytes A3 D0 0F 5E 00: mov dword ptr [0x5e0fd0], eax
        __asm _emit 0xa3
        __asm _emit 0xd0
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 E9 FE FF FF: jmp 0x4cabab
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 D0 28 5E 00: mov eax, dword ptr [0x5e28d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 D0 0F 5E 00: mov dword ptr [0x5e0fd0], eax
        __asm _emit 0xa3
        __asm _emit 0xd0
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 DA FE FF FF: jmp 0x4cabab
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        ; Exact mapped bytes C7 05 E0 04 5E 00 00 00 00 00: mov dword ptr [0x5e04e0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        pop ebx
        add esp, 28h
        ret
        xor eax, eax
        pop edi
        ; Exact mapped bytes C7 05 E0 04 5E 00 00 00 00 00: mov dword ptr [0x5e04e0], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        pop ebx
        add esp, 28h
        ret
    }
}
