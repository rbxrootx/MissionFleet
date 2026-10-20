// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58638760 .. +0x32D bytes.
extern "C" __declspec(naked) void FUN_58638760_58638760() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1bch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 188h], ecx
        mov eax, dword ptr [ebp - 188h]
        cmp dword ptr [eax + 170h], 0
        ; Exact mapped bytes 0F 84 F3 02 00 00: je 0x58638a7f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        push 0
        lea ecx, [ebp - 184h]
        push ecx
        ; Exact mapped bytes E8 71 46 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x46
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        mov edx, dword ptr [ebp - 188h]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 48 54 ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x54
        __asm _emit 0xed
        __asm _emit 0xff
        add eax, 80h
        push eax
        lea eax, [ebp - 184h]
        push eax
        ; Exact mapped bytes E8 C6 40 21 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x40
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 188h]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 E2 4B ED FF: call 0x5850d3c0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x4b
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], eax
        mov dword ptr [ebp - 194h], 0
        mov edx, dword ptr [ebp - 188h]
        mov ecx, dword ptr [edx + 11ch]
        ; Exact mapped bytes E8 C1 80 18 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x80
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 18ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5863881b
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 18ch]
        add eax, 1
        mov dword ptr [ebp - 18ch], eax
        mov ecx, dword ptr [ebp - 18ch]
        cmp ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes 0F 83 52 02 00 00: jae 0x58638a7f
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x52
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18ch]
        movzx eax, byte ptr [ebp + edx*4 - 184h]
        test eax, eax
        ; Exact mapped bytes 0F 84 E9 01 00 00: je 0x58638a2c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18ch]
        movzx edx, word ptr [ebp + ecx*4 - 182h]
        test edx, edx
        ; Exact mapped bytes 0F 84 D3 01 00 00: je 0x58638a2c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18ch]
        mov ecx, dword ptr [ebp + eax*4 - 184h]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE E5 EB FF: call 0x584f6e30
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe5
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        cmp dword ptr [ebp - 190h], 0
        ; Exact mapped bytes 0F 84 57 01 00 00: je 0x586389dc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        push 0
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes E8 78 45 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x45
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 54 53 ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x53
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18ch]
        mov edx, dword ptr [eax + ecx*4 + 100h]
        mov dword ptr [ebp - 194h], edx
        mov eax, dword ptr [ebp - 190h]
        ; Exact mapped bytes 66 8B 88 9A 00 00 00: mov cx, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 75 5C: jne 0x58638937
        __asm _emit 0x75
        __asm _emit 0x5c
        mov eax, 0ffh
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes 66 23 81 98 00 00 00: and ax, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, ax
        imul edx, dword ptr [ebp - 194h]
        mov dword ptr [ebp - 19ch], edx
        push 588aedb4h
        ; Exact mapped bytes E8 E9 96 EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1a0h], eax
        mov eax, dword ptr [ebp - 194h]
        push eax
        mov ecx, dword ptr [ebp - 19ch]
        push ecx
        mov edx, dword ptr [ebp - 1a0h]
        push edx
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes EB 77: jmp 0x586389ae
        __asm _emit 0xeb
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 190h]
        ; Exact mapped bytes 66 8B 91 9A 00 00 00: mov dx, word ptr [ecx + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        cmp eax, 2
        ; Exact mapped bytes 75 5A: jne 0x586389ae
        __asm _emit 0x75
        __asm _emit 0x5a
        mov ecx, 0ffh
        mov edx, dword ptr [ebp - 190h]
        ; Exact mapped bytes 66 23 8A 98 00 00 00: and cx, word ptr [edx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x8a
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, cx
        imul eax, dword ptr [ebp - 194h]
        mov dword ptr [ebp - 1a4h], eax
        push 588aedcch
        ; Exact mapped bytes E8 70 96 EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x96
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1a8h], eax
        mov ecx, dword ptr [ebp - 194h]
        push ecx
        mov edx, dword ptr [ebp - 1a4h]
        push edx
        mov eax, dword ptr [ebp - 1a8h]
        push eax
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 11ch]
        mov dword ptr [ebp - 1ach], eax
        push 0ffffffh
        push -1
        lea ecx, [ebp - 104h]
        push ecx
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 47 7B 18 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x7b
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4E: jmp 0x58638a2a
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 11ch]
        mov dword ptr [ebp - 1b0h], eax
        mov ecx, dword ptr [ebp - 18ch]
        push ecx
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 70 7F 18 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x7f
        __asm _emit 0x18
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 188h]
        mov eax, dword ptr [edx + 11ch]
        mov dword ptr [ebp - 1b4h], eax
        push 0ffffffh
        push -1
        push 588aede4h
        mov ecx, dword ptr [ebp - 1b4h]
        ; Exact mapped bytes E8 F7 7A 18 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x7a
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4E: jmp 0x58638a7a
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 11ch]
        mov dword ptr [ebp - 1b8h], edx
        mov eax, dword ptr [ebp - 18ch]
        push eax
        mov ecx, dword ptr [ebp - 1b8h]
        ; Exact mapped bytes E8 20 7F 18 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x7f
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 11ch]
        mov dword ptr [ebp - 1bch], edx
        push 0ffffffh
        push -1
        push 588aede8h
        mov ecx, dword ptr [ebp - 1bch]
        ; Exact mapped bytes E8 A7 7A 18 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x7a
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8D FD FF FF: jmp 0x5863880c
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 C7 85 1F 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
