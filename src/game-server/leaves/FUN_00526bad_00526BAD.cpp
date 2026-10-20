// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00526BAD .. +0x268 bytes.
extern "C" __declspec(naked) void FUN_00526bad_00526BAD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        push 5
        ; Exact mapped bytes E8 1A 11 02 00: call 0x547cda
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 4C E8 5D 00 00: cmp dword ptr [0x5de84c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 D7 01 00 00: jne 0x526da4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x526bd4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 F3: jne 0x526bcd
        __asm _emit 0x75
        __asm _emit 0xf3
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 01: je 0x526be1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x526bda
        __asm _emit 0x75
        __asm _emit 0xf3
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x526bee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x526be7
        __asm _emit 0x75
        __asm _emit 0xf3
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x526bfb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 F3: jne 0x526bf4
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 83 3D 20 E8 5D 00 00: cmp dword ptr [0x5de820], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x526ca6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 F4 11 11: mov word ptr [ebp - 0xc], 0x1111
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xf4
        __asm _emit 0x11
        __asm _emit 0x11
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x526c26
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 7D 25: jge 0x526c51
        __asm _emit 0x7d
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 4D F4: mov cx, word ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 66 89 4C 45 E0: mov word ptr [ebp + eax*2 - 0x20], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x45
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 45 F4: mov ax, word ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 66 89 44 55 E8: mov word ptr [ebp + edx*2 - 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x55
        __asm _emit 0xe8
        ; Exact mapped bytes 66 8B 4D F4: mov cx, word ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes 66 D1 E1: shl cx, 1
        __asm _emit 0x66
        __asm _emit 0xd1
        __asm _emit 0xe1
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        ; Exact mapped bytes EB CC: jmp 0x526c1d
        __asm _emit 0xeb
        __asm _emit 0xcc
        lea edx, [ebp - 20h]
        push edx
        push 1
        push 1
        push 8
        push 8
        ; Exact mapped bytes FF 15 9C 21 5E 00: call dword ptr [0x5e219c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 0C: jne 0x526c78
        __asm _emit 0x75
        __asm _emit 0x0c
        push 5
        ; Exact mapped bytes E8 99 11 02 00: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 4B D9 FD FF: call 0x5045c3
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 8C 21 5E 00: call dword ptr [0x5e218c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 20 E8 5D 00: mov dword ptr [0x5de820], eax
        __asm _emit 0xa3
        __asm _emit 0x20
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 E4 20 5E 00: call dword ptr [0x5e20e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 20 E8 5D 00 00: cmp dword ptr [0x5de820], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x20
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x526ca6
        __asm _emit 0x75
        __asm _emit 0x0c
        push 5
        ; Exact mapped bytes E8 6B 11 02 00: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 1D D9 FD FF: call 0x5045c3
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 1C E8 5D 00 00: cmp dword ptr [0x5de81c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 26: jne 0x526cd5
        __asm _emit 0x75
        __asm _emit 0x26
        push 0
        push 0
        push 2
        ; Exact mapped bytes FF 15 70 21 5E 00: call dword ptr [0x5e2170]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 1C E8 5D 00: mov dword ptr [0x5de81c], eax
        __asm _emit 0xa3
        __asm _emit 0x1c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 1C E8 5D 00 00: cmp dword ptr [0x5de81c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x526cd5
        __asm _emit 0x75
        __asm _emit 0x0c
        push 5
        ; Exact mapped bytes E8 3C 11 02 00: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 EE D8 FD FF: call 0x5045c3
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E8 68 E8 00 00: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 7907h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 68 26 5E 00: call dword ptr [0x5e2668]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 24 E8 5D 00: mov dword ptr [0x5de824], eax
        __asm _emit 0xa3
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push 7908h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 68 26 5E 00: call dword ptr [0x5e2668]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 28 E8 5D 00: mov dword ptr [0x5de828], eax
        __asm _emit 0xa3
        __asm _emit 0x28
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 E8 5D 00: mov ecx, dword ptr [0x5de824]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D 2C E8 5D 00: mov dword ptr [0x5de82c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 28 E8 5D 00: mov edx, dword ptr [0x5de828]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 30 E8 5D 00: mov dword ptr [0x5de830], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push 7909h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 68 26 5E 00: call dword ptr [0x5e2668]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 34 E8 5D 00: mov dword ptr [0x5de834], eax
        __asm _emit 0xa3
        __asm _emit 0x34
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push 790ah
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 68 26 5E 00: call dword ptr [0x5e2668]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 38 E8 5D 00: mov dword ptr [0x5de838], eax
        __asm _emit 0xa3
        __asm _emit 0x38
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 34 E8 5D 00: mov edx, dword ptr [0x5de834]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 3C E8 5D 00: mov dword ptr [0x5de83c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A1 38 E8 5D 00: mov eax, dword ptr [0x5de838]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes A3 40 E8 5D 00: mov dword ptr [0x5de840], eax
        __asm _emit 0xa3
        __asm _emit 0x40
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push 790bh
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 68 26 5E 00: call dword ptr [0x5e2668]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 44 E8 5D 00: mov dword ptr [0x5de844], eax
        __asm _emit 0xa3
        __asm _emit 0x44
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push 790ch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 68 26 5E 00: call dword ptr [0x5e2668]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 48 E8 5D 00: mov dword ptr [0x5de848], eax
        __asm _emit 0xa3
        __asm _emit 0x48
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push 4
        push 585b3ch
        push 585b34h
        ; Exact mapped bytes FF 15 58 23 5E 00: call dword ptr [0x5e2358]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 18 E8 5D 00: mov dword ptr [0x5de818], eax
        __asm _emit 0xa3
        __asm _emit 0x18
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 4C E8 5D 00 01 00 00 00: mov dword ptr [0x5de84c], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x4c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5
        ; Exact mapped bytes E8 61 10 02 00: call 0x547e0c
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 8B 15 18 E8 5D 00: mov edx, dword ptr [0x5de818]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov dword ptr [ecx + 20h], edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 20h]
        shl ecx, 1
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 18h], ecx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [eax + 1ch], edx
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 28h
        ; Exact mapped bytes E8 65 F2 00 00: call 0x53604b
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 38h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 40h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 44h], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
