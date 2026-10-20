// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10053F20 .. +0x3FE bytes.
extern "C" __declspec(naked) void FUN_10053f20_10053F20() {
    __asm {
        push -1
        push 1016ed16h
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
        push ebx
        mov ebx, dword ptr [esp + 1ch]
        mov edx, dword ptr [esp + 18h]
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 30h]
        mov edi, dword ptr [esp + 2ch]
        push 40h
        push eax
        push ecx
        push edi
        push ebx
        push edx
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 4E AA 0A 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xaa
        __asm _emit 0x0a
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], ebx
        mov ebp, 100h
        xor ebx, ebx
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 58h], ebp
        mov dword ptr [esi + 5ch], ebx
        push 70h
        mov dword ptr [esp + 20h], ebx
        mov dword ptr [esi], 10175bf4h
        ; Exact mapped bytes E8 16 88 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x88
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 24h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 48: je 0x10053fe4
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes A1 98 56 1C 10: mov eax, dword ptr [0x101c5698]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D E4 56 1C 10: mov ecx, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebx
        push 0ffffffh
        push 28h
        push 320h
        push 19h
        push 2bch
        push eax
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 BB 1B FC FF: call 0x10015b80
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x1b
        __asm _emit 0xfc
        __asm _emit 0xff
        push 80h
        mov byte ptr [esp + 20h], 2
        mov dword ptr [edi], 10175338h
        ; Exact mapped bytes E8 C6 87 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x87
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [edi + 6ch], eax
        add esp, 4
        mov byte ptr [eax], bl
        ; Exact mapped bytes EB 02: jmp 0x10053fe6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 89 3D D0 56 1C 10: mov dword ptr [0x101c56d0], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 1ch], bl
        ; Exact mapped bytes 66 C7 47 26 00 7D: mov word ptr [edi + 0x26], 0x7d00
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x7d
        ; Exact mapped bytes 74 06: je 0x10054003
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 9D AF 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xaf
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10054010
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 F0 AE 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xae
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 D0 56 1C 10: mov edx, dword ptr [0x101c56d0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 90 7C 1A 10: mov ecx, dword ptr [0x101a7c90]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x7c
        __asm _emit 0x1a
        __asm _emit 0x10
        xor ecx, 0aah
        mov eax, dword ptr [edx + 6ch]
        ; Exact mapped bytes 8B 15 8C 7C 1A 10: mov edx, dword ptr [0x101a7c8c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x7c
        __asm _emit 0x1a
        __asm _emit 0x10
        push ecx
        push edx
        push 101aab34h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes A1 D0 56 1C 10: mov eax, dword ptr [0x101c56d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        lea ecx, [esi + 84h]
        lea edi, [esi + 8ch]
        push 14h
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        xor eax, eax
        mov dword ptr [ecx], eax
        mov dword ptr [ecx + 4], eax
        mov ecx, 20h
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov dword ptr [esi + 110h], 10h
        ; Exact mapped bytes E8 31 87 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x87
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 14h
        mov dword ptr [esp + 24h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 21: je 0x100540a2
        __asm _emit 0x74
        __asm _emit 0x21
        push 2000h
        mov dword ptr [edi], 10175bf0h
        mov dword ptr [edi + 4], ebp
        ; Exact mapped bytes E8 0C 87 11 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x87
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [edi + 10h], eax
        mov dword ptr [edi + 8], ebx
        mov dword ptr [edi + 0ch], ebx
        ; Exact mapped bytes EB 02: jmp 0x100540a4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, esi
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esi + 188h], edi
        mov dword ptr [esi + 344h], ebx
        ; Exact mapped bytes E8 05 14 00 00: call 0x100554c0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 5E 09 00 00: call 0x10054a20
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [esp + 34h]
        mov ebp, 1
        push edx
        push 0f003fh
        push ebx
        push 10197c20h
        push 80000002h
        mov dword ptr [esi + 70h], ebx
        mov dword ptr [esi + 7ch], ebx
        mov dword ptr [esi + 80h], ebx
        ; Exact mapped bytes 66 89 AE 16 01 00 00: mov word ptr [esi + 0x116], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 3ch], 80h
        mov dword ptr [esp + 44h], ebp
        ; Exact mapped bytes FF 15 14 50 17 10: call dword ptr [0x10175014]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 3D 10 50 17 10: mov edi, dword ptr [0x10175010]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x1005412e
        __asm _emit 0x74
        __asm _emit 0x23
        lea eax, [esp + 2ch]
        lea ecx, [esp + 34h]
        push eax
        push ecx
        push ebx
        push 0f003fh
        push ebx
        push 101ace48h
        push ebx
        push 10197c20h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        lea edx, [esp + 28h]
        lea eax, [esp + 30h]
        push edx
        mov edx, dword ptr [esp + 38h]
        lea ecx, [esp + 30h]
        push eax
        push ecx
        push ebx
        push 101aab2ch
        push edx
        ; Exact mapped bytes FF 15 00 50 17 10: call dword ptr [0x10175000]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 3D: je 0x1005418f
        __asm _emit 0x74
        __asm _emit 0x3d
        lea eax, [esp + 2ch]
        lea ecx, [esp + 34h]
        push eax
        push ecx
        push ebx
        push 0f003fh
        push ebx
        push 101aab2ch
        push ebx
        push 10197c20h
        push 80000002h
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [esp + 34h]
        lea edx, [esp + 30h]
        push 4
        push edx
        push 4
        push ebx
        push 101aab2ch
        push eax
        ; Exact mapped bytes FF 15 04 50 17 10: call dword ptr [0x10175004]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 34h]
        push ecx
        ; Exact mapped bytes FF 15 0C 50 17 10: call dword ptr [0x1017500c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 30h]
        ; Exact mapped bytes 66 3B CD: cmp cx, bp
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xcd
        ; Exact mapped bytes 66 89 8E 16 01 00 00: mov word ptr [esi + 0x116], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8e
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 55: jne 0x100541ff
        __asm _emit 0x75
        __asm _emit 0x55
        mov eax, dword ptr [esi + 3f0h]
        cmp dword ptr [eax + 164h], ebx
        ; Exact mapped bytes 7E 0E: jle 0x100541c6
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 04: je 0x100541c6
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x100541c8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3f4h]
        cmp eax, ebx
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 58: je 0x1005422d
        __asm _emit 0x74
        __asm _emit 0x58
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
        ; Exact mapped bytes EB 2E: jmp 0x1005422d
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov eax, 1019b025h
        ; Exact mapped bytes 66 0F B6 50 FF: movzx dx, byte ptr [eax - 1]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x50
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F B6 38: movzx di, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x38
        shl edx, 4
        or edx, edi
        ; Exact mapped bytes 66 0F B6 78 01: movzx di, byte ptr [eax + 1]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x78
        __asm _emit 0x01
        shl edx, 4
        or edx, edi
        ; Exact mapped bytes 66 3B D1: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd1
        ; Exact mapped bytes 74 0C: je 0x1005422d
        __asm _emit 0x74
        __asm _emit 0x0c
        add eax, 0cb8h
        cmp eax, 101a7ba5h
        ; Exact mapped bytes 7C D7: jl 0x10054204
        __asm _emit 0x7c
        __asm _emit 0xd7
        push 320h
        mov ecx, esi
        mov dword ptr [esi + 11ch], ebp
        ; Exact mapped bytes 66 89 9E 18 01 00 00: mov word ptr [esi + 0x118], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E 14 01 00 00: mov word ptr [esi + 0x114], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 17ch], ebx
        mov dword ptr [esi + 174h], ebx
        mov dword ptr [esi + 68h], 0ffffffffh
        mov dword ptr [esi + 120h], ebx
        mov dword ptr [esi + 64h], ebx
        mov dword ptr [esi + 124h], ebx
        mov dword ptr [esi + 16ch], 8
        mov dword ptr [esi + 6ch], ebx
        mov dword ptr [esi + 178h], ebx
        mov dword ptr [esi + 180h], ebx
        mov dword ptr [esi + 74h], 28h
        ; Exact mapped bytes E8 31 AB 0A 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xab
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 1eh
        ; Exact mapped bytes 7E 0F: jle 0x100542ac
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x100542ac
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 78h]
        ; Exact mapped bytes EB 02: jmp 0x100542ae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 318h], eax
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e5ffh
        mov byte ptr [esi + 184h], bl
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes A1 E4 7D 1A 10: mov eax, dword ptr [0x101a7de4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x100542d8
        __asm _emit 0x74
        __asm _emit 0x05
        mov dword ptr [esi + 60h], ebx
        ; Exact mapped bytes EB 2F: jmp 0x10054307
        __asm _emit 0xeb
        __asm _emit 0x2f
        ; Exact mapped bytes A1 08 58 1C 10: mov eax, dword ptr [0x101c5808]
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp eax, ebx
        ; Exact mapped bytes 74 20: je 0x10054301
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [eax + 170h], ebx
        ; Exact mapped bytes 7E 11: jle 0x100542fa
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebx
        ; Exact mapped bytes 74 07: je 0x100542fa
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [eax]
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes EB 0D: jmp 0x10054307
        __asm _emit 0xeb
        __asm _emit 0x0d
        xor eax, eax
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes EB 06: jmp 0x10054307
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 89 1D 08 58 1C 10: mov dword ptr [0x101c5808], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x08
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 14h]
        mov eax, esi
        pop edi
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
