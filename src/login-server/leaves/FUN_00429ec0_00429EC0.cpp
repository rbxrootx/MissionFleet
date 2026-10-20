// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429EC0 .. +0x1E7 bytes.
extern "C" __declspec(naked) void FUN_00429ec0_00429EC0() {
    __asm {
        sub esp, 28h
        push ebx
        push esi
        push edi
        push 4513e0h
        ; Exact mapped bytes FF 15 7C C1 43 00: call dword ptr [0x43c17c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes FF 15 C0 C3 43 00: call dword ptr [0x43c3c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        mov ebx, eax
        push 0ch
        push ebx
        ; Exact mapped bytes 8B 35 A8 C0 43 00: mov esi, dword ptr [0x43c0a8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xa8
        __asm _emit 0xc0
        __asm _emit 0x43
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
        ; Exact mapped bytes 7D 02: jge 0x429efc
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        push 1
        ; Exact mapped bytes 8B 3D 44 C5 43 00: mov edi, dword ptr [0x43c544]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes A3 00 14 45 00: mov dword ptr [0x451400], eax
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp eax, 15eh
        ; Exact mapped bytes 75 15: jne 0x429f27
        __asm _emit 0x75
        __asm _emit 0x15
        push 0
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp eax, 280h
        ; Exact mapped bytes 75 0A: jne 0x429f27
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 00 14 45 00 00 00 00 00: mov dword ptr [0x451400], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push 0
        ; Exact mapped bytes FF 15 C4 C3 43 00: call dword ptr [0x43c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 00 14 45 00 00: cmp dword ptr [0x451400], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 22: je 0x429f5b
        __asm _emit 0x74
        __asm _emit 0x22
        push 44d9e4h
        ; Exact mapped bytes 8B 35 F8 C1 43 00: mov esi, dword ptr [0x43c1f8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 A3 08 14 45 00: mov word ptr [0x451408], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 21: jne 0x429f72
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes C7 05 00 14 45 00 00 00 00 00: mov dword ptr [0x451400], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4513e0h
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes A1 00 14 45 00: mov eax, dword ptr [0x451400]
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 28h
        ret
        push 44d9cch
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 A3 0E 14 45 00: mov word ptr [0x45140e], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x0e
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 CD: je 0x429f51
        __asm _emit 0x74
        __asm _emit 0xcd
        push 44d9dch
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 A3 0C 14 45 00: mov word ptr [0x45140c], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x0c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push 44d9d4h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 3D 0C 14 45 00 00: cmp word ptr [0x45140c], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 A3 0A 14 45 00: mov word ptr [0x45140a], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x0a
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x42a094
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
        ; Exact mapped bytes 0F 84 DF 00 00 00: je 0x42a094
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 44d9c4h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 A3 12 14 45 00: mov word ptr [0x451412], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x12
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        push 44d9bch
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 3D 12 14 45 00 00: cmp word ptr [0x451412], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x12
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 A3 10 14 45 00: mov word ptr [0x451410], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x10
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x42a081
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
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x42a081
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 44d9e8h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 A3 14 14 45 00: mov word ptr [0x451414], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 55 FF FF FF: je 0x429f51
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
        ; Exact mapped bytes A2 05 1F 45 00: mov byte ptr [0x451f05], al
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x1f
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes E8 16 FE FF FF: call 0x429e20
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes E8 7F 01 00 00: call 0x42a190
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 0F 84 35 FF FF FF: je 0x429f51
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, 451e60h
        mov esi, 4408b4h
        ; Exact mapped bytes 8B 3D 30 C4 43 00: mov edi, dword ptr [0x43c430]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0xc4
        __asm _emit 0x43
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
        cmp esi, 440974h
        mov dword ptr [ebx - 14h], ecx
        ; Exact mapped bytes 72 DA: jb 0x42a02c
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
        ; Exact mapped bytes 74 0E: je 0x42a072
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [esp + 10h]
        ; Exact mapped bytes A3 F0 1E 45 00: mov dword ptr [0x451ef0], eax
        __asm _emit 0xa3
        __asm _emit 0xf0
        __asm _emit 0x1e
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes E9 E9 FE FF FF: jmp 0x429f5b
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 78 C5 43 00: mov eax, dword ptr [0x43c578]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes A3 F0 1E 45 00: mov dword ptr [0x451ef0], eax
        __asm _emit 0xa3
        __asm _emit 0xf0
        __asm _emit 0x1e
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes E9 DA FE FF FF: jmp 0x429f5b
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        ; Exact mapped bytes C7 05 00 14 45 00 00 00 00 00: mov dword ptr [0x451400], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x45
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
        ; Exact mapped bytes C7 05 00 14 45 00 00 00 00 00: mov dword ptr [0x451400], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x14
        __asm _emit 0x45
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
