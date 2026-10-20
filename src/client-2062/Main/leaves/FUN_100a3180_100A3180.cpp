// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A3180 .. +0x2BF bytes.
extern "C" __declspec(naked) void FUN_100a3180_100A3180() {
    __asm {
        push -1
        push 101712a9h
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
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 20h]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 24h]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 34h]
        mov edi, dword ptr [esp + 28h]
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push ebp
        push edi
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 4B B8 FF FF: call 0x1009ea10
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi], 10176044h
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ebx, ebx
        mov ecx, dword ptr [eax + 164h]
        mov dword ptr [esp + 1ch], ebx
        cmp ecx, 12dh
        ; Exact mapped bytes 7E 12: jle 0x100a31f6
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a31f6
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 4b4h]
        ; Exact mapped bytes EB 02: jmp 0x100a31f8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 84h]
        cmp eax, ebx
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100a322d
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
        push 0cch
        ; Exact mapped bytes E8 69 95 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 18: je 0x100a325f
        __asm _emit 0x74
        __asm _emit 0x18
        push 40h
        push ebx
        lea ecx, [ebp + 23h]
        push ebx
        add edi, 14h
        push ecx
        push edi
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B5 BB FA FF: call 0x1004ee10
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xbb
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100a3261
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0a8h], edi
        mov ecx, dword ptr [edi + 40h]
        cmp ecx, ebx
        mov byte ptr [esp + 1ch], bl
        ; Exact mapped bytes 66 C7 47 26 D0 07: mov word ptr [edi + 0x26], 0x7d0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0x26
        __asm _emit 0xd0
        __asm _emit 0x07
        ; Exact mapped bytes 74 06: je 0x100a327e
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 22 BD 05 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xbd
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x100a328b
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 75 BC 05 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 A4 57 1C 10: mov edx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 0a8h]
        push 3
        push ebx
        push 3
        push 14h
        push edx
        ; Exact mapped bytes E8 CC BF FA FF: call 0x1004f270
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0a8h]
        push 2
        ; Exact mapped bytes E8 BF C1 FA FF: call 0x1004f470
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0xff
        push 58h
        ; Exact mapped bytes E8 E8 94 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        cmp edi, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x100a334f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 A0 57 1C 10: mov eax, dword ptr [0x101c57a0]
        __asm _emit 0xa1
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0ch
        ; Exact mapped bytes 7E 12: jle 0x100a32ee
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a32ee
        __asm _emit 0x74
        __asm _emit 0x08
        lea ebp, [eax + 300h]
        ; Exact mapped bytes EB 02: jmp 0x100a32f0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push 0bb8h
        push ebx
        add eax, 1dh
        push ebx
        add ecx, 8
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A1 B6 05 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xb6
        __asm _emit 0x05
        __asm _emit 0x00
        cmp ebp, ebx
        mov dword ptr [edi], 101751f8h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        ; Exact mapped bytes 74 2A: je 0x100a3349
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 18h]
        add ebp, 20h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ebp, dword ptr [esp + 2ch]
        ; Exact mapped bytes EB 02: jmp 0x100a3351
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov dword ptr [esi + 0ach], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        push 6ch
        mov byte ptr [esp + 20h], bl
        ; Exact mapped bytes E8 38 94 0C 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x94
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 3F: je 0x100a33b7
        __asm _emit 0x74
        __asm _emit 0x3f
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0dh
        ; Exact mapped bytes 7E 12: jle 0x100a3399
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100a3399
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 340h
        ; Exact mapped bytes EB 02: jmp 0x100a339b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [esp + 28h]
        add ebp, 17h
        push 0bb8h
        add edx, 37h
        push ebp
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 AB EF F8 FF: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xef
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100a33b9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E8 06 F2 F8 FF: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf2
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 22h
        ; Exact mapped bytes 7E 12: jle 0x100a33ea
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a33ea
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 88h]
        ; Exact mapped bytes EB 02: jmp 0x100a33ec
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 0b4h], eax
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 21h
        ; Exact mapped bytes 7E 12: jle 0x100a3412
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebx
        ; Exact mapped bytes 74 08: je 0x100a3412
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 84h]
        ; Exact mapped bytes EB 02: jmp 0x100a3414
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esi + 0b8h], eax
        ; Exact mapped bytes 66 89 9E A4 00 00 00: mov word ptr [esi + 0xa4], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9E A6 00 00 00: mov word ptr [esi + 0xa6], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9e
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
