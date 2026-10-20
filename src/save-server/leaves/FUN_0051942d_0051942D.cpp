// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051942D .. +0x268 bytes.
extern "C" __declspec(naked) void FUN_0051942d_0051942D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        push 5
        ; Exact mapped bytes E8 3A 99 02 00: call 0x542d7a
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 9C 6D 68 00 00: cmp dword ptr [0x686d9c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x9c
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 D7 01 00 00: jne 0x519624
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x519454
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 F3: jne 0x51944d
        __asm _emit 0x75
        __asm _emit 0xf3
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 01: je 0x519461
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x51945a
        __asm _emit 0x75
        __asm _emit 0xf3
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x51946e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x519467
        __asm _emit 0x75
        __asm _emit 0xf3
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51947b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 F3: jne 0x519474
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes 83 3D 70 6D 68 00 00: cmp dword ptr [0x686d70], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x519526
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
        ; Exact mapped bytes EB 09: jmp 0x5194a6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 7D 25: jge 0x5194d1
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
        ; Exact mapped bytes EB CC: jmp 0x51949d
        __asm _emit 0xeb
        __asm _emit 0xcc
        lea edx, [ebp - 20h]
        push edx
        push 1
        push 1
        push 8
        push 8
        ; Exact mapped bytes FF 15 84 B6 68 00: call dword ptr [0x68b684]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 0C: jne 0x5194f8
        __asm _emit 0x75
        __asm _emit 0x0c
        push 5
        ; Exact mapped bytes E8 B9 99 02 00: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 7F 00 FD FF: call 0x4e9577
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 F8 B5 68 00: call dword ptr [0x68b5f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb5
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 70 6D 68 00: mov dword ptr [0x686d70], eax
        __asm _emit 0xa3
        __asm _emit 0x70
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 30 B6 68 00: call dword ptr [0x68b630]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 70 6D 68 00 00: cmp dword ptr [0x686d70], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x70
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x519526
        __asm _emit 0x75
        __asm _emit 0x0c
        push 5
        ; Exact mapped bytes E8 8B 99 02 00: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 51 00 FD FF: call 0x4e9577
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 6C 6D 68 00 00: cmp dword ptr [0x686d6c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 26: jne 0x519555
        __asm _emit 0x75
        __asm _emit 0x26
        push 0
        push 0
        push 2
        ; Exact mapped bytes FF 15 74 B6 68 00: call dword ptr [0x68b674]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 6C 6D 68 00: mov dword ptr [0x686d6c], eax
        __asm _emit 0xa3
        __asm _emit 0x6c
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 6C 6D 68 00 00: cmp dword ptr [0x686d6c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 0C: jne 0x519555
        __asm _emit 0x75
        __asm _emit 0x0c
        push 5
        ; Exact mapped bytes E8 5C 99 02 00: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E8 22 00 FD FF: call 0x4e9577
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E8 58 85 01 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 7907h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 48 BD 68 00: call dword ptr [0x68bd48]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 74 6D 68 00: mov dword ptr [0x686d74], eax
        __asm _emit 0xa3
        __asm _emit 0x74
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push 7908h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 48 BD 68 00: call dword ptr [0x68bd48]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 78 6D 68 00: mov dword ptr [0x686d78], eax
        __asm _emit 0xa3
        __asm _emit 0x78
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 6D 68 00: mov ecx, dword ptr [0x686d74]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D 7C 6D 68 00: mov dword ptr [0x686d7c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 78 6D 68 00: mov edx, dword ptr [0x686d78]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 80 6D 68 00: mov dword ptr [0x686d80], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push 7909h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 48 BD 68 00: call dword ptr [0x68bd48]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 84 6D 68 00: mov dword ptr [0x686d84], eax
        __asm _emit 0xa3
        __asm _emit 0x84
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push 790ah
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 48 BD 68 00: call dword ptr [0x68bd48]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 88 6D 68 00: mov dword ptr [0x686d88], eax
        __asm _emit 0xa3
        __asm _emit 0x88
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 84 6D 68 00: mov edx, dword ptr [0x686d84]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 15 8C 6D 68 00: mov dword ptr [0x686d8c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 88 6D 68 00: mov eax, dword ptr [0x686d88]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 90 6D 68 00: mov dword ptr [0x686d90], eax
        __asm _emit 0xa3
        __asm _emit 0x90
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push 790bh
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 48 BD 68 00: call dword ptr [0x68bd48]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 94 6D 68 00: mov dword ptr [0x686d94], eax
        __asm _emit 0xa3
        __asm _emit 0x94
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push 790ch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 48 BD 68 00: call dword ptr [0x68bd48]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 98 6D 68 00: mov dword ptr [0x686d98], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push 4
        push 638704h
        push 6386fch
        ; Exact mapped bytes FF 15 8C B9 68 00: call dword ptr [0x68b98c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 68 6D 68 00: mov dword ptr [0x686d68], eax
        __asm _emit 0xa3
        __asm _emit 0x68
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 9C 6D 68 00 01 00 00 00: mov dword ptr [0x686d9c], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x9c
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5
        ; Exact mapped bytes E8 81 98 02 00: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 8B 15 68 6D 68 00: mov edx, dword ptr [0x686d68]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x6d
        __asm _emit 0x68
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
        ; Exact mapped bytes E8 3D 8E 01 00: call 0x5324a3
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x8e
        __asm _emit 0x01
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
