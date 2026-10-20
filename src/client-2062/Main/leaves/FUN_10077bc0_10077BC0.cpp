// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10077BC0 .. +0x24F bytes.
extern "C" __declspec(naked) void FUN_10077bc0_10077BC0() {
    __asm {
        push -1
        push 1016f8dbh
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
        push ebp
        push esi
        mov esi, ecx
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e1ffh
        or eax, 105h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [esi + 39ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 398h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 3a0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, esi
        ; Exact mapped bytes 89 35 DC 56 1C 10: mov dword ptr [0x101c56dc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 13 F2 FF FF: call 0x10076e30
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 3ech]
        or byte ptr [esi + 24h], 2
        xor ebx, ebx
        mov ebp, 1
        push ebx
        mov dword ptr [esi + 64h], ebx
        mov dword ptr [esi + 74h], ebx
        mov dword ptr [esi + 78h], ebp
        mov dword ptr [esi + 50h], eax
        mov dword ptr [esi + 54h], 30h
        ; Exact mapped bytes E8 D6 74 08 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x74
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ech]
        mov dword ptr [eax + 7ch], 100h
        mov ecx, dword ptr [esi + 3ech]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 0F: jle 0x10077c7e
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x10077c7e
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 4]
        ; Exact mapped bytes EB 02: jmp 0x10077c80
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3ech]
        cmp eax, ebx
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10077cb5
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [esi + 3fch]
        or byte ptr [eax + 24h], 2
        mov ecx, dword ptr [esi + 3a4h]
        ; Exact mapped bytes E8 36 7B 03 00: call 0x100af800
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x7b
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3fch]
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 70h]
        xor eax, eax
        cmp ecx, ebx
        ; Exact mapped bytes 7E 16: jle 0x10077cf3
        __asm _emit 0x7e
        __asm _emit 0x16
        lea ecx, [esi + 368h]
        mov edx, dword ptr [ecx]
        inc eax
        add ecx, 4
        mov dword ptr [edx + 50h], ebp
        mov edx, dword ptr [esi + 70h]
        cmp eax, edx
        ; Exact mapped bytes 7C F0: jl 0x10077ce3
        __asm _emit 0x7c
        __asm _emit 0xf0
        mov ecx, dword ptr [esi + 0a4h]
        push ebx
        mov eax, dword ptr [esi + ecx*4 + 368h]
        mov ecx, esi
        mov dword ptr [eax + 50h], 5
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp byte ptr [edx + 20bc4h], bl
        ; Exact mapped bytes 74 07: je 0x10077d1f
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 53 FC FF FF: call 0x10077970
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x10077d24
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 BC EA FF FF: call 0x100767e0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 2F: je 0x10077d5a
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 8B 0D 50 58 1C 10: mov ecx, dword ptr [0x101c5850]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 60h]
        cmp ecx, eax
        ; Exact mapped bytes 75 06: jne 0x10077d43
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 89 1D 50 58 1C 10: mov dword ptr [0x101c5850], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 39 1D E4 7D 1A 10: cmp dword ptr [0x101a7de4], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xe4
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 74 57: je 0x10077da2
        __asm _emit 0x74
        __asm _emit 0x57
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x10077d57
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx]
        push ebp
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 60h], ebx
        ; Exact mapped bytes 39 1D E4 7D 1A 10: cmp dword ptr [0x101a7de4], ebx
        __asm _emit 0x39
        __asm _emit 0x1d
        __asm _emit 0xe4
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        ; Exact mapped bytes 74 40: je 0x10077da2
        __asm _emit 0x74
        __asm _emit 0x40
        push 30h
        ; Exact mapped bytes E8 37 4A 0F 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x4a
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 0ch], eax
        cmp eax, ebx
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 74 1B: je 0x10077d93
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D BC 7D 1A 10: mov ecx, dword ptr [0x101a7dbc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xbc
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 FA CC 08 00: call 0x10104a80
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xcc
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [esp + 18h], 0ffffffffh
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes EB 3D: jmp 0x10077dd0
        __asm _emit 0xeb
        __asm _emit 0x3d
        xor eax, eax
        mov dword ptr [esp + 18h], 0ffffffffh
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes EB 2E: jmp 0x10077dd0
        __asm _emit 0xeb
        __asm _emit 0x2e
        ; Exact mapped bytes A1 08 58 1C 10: mov eax, dword ptr [0x101c5808]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, ebx
        ; Exact mapped bytes 74 22: je 0x10077dcd
        __asm _emit 0x74
        __asm _emit 0x22
        cmp dword ptr [eax + 170h], 4
        ; Exact mapped bytes 7E 12: jle 0x10077dc6
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x10077dc6
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 10h]
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes EB 0A: jmp 0x10077dd0
        __asm _emit 0xeb
        __asm _emit 0x0a
        xor eax, eax
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes EB 03: jmp 0x10077dd0
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [esi + 60h], ebx
        ; Exact mapped bytes 8B 0D 50 58 1C 10: mov ecx, dword ptr [0x101c5850]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, ebx
        ; Exact mapped bytes 74 05: je 0x10077ddf
        __asm _emit 0x74
        __asm _emit 0x05
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [esi + 60h]
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
        ; Exact mapped bytes 74 0D: je 0x10077dfd
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10077dfd
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ecx]
        push ebp
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [esp + 10h]
        pop esi
        pop ebp
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
