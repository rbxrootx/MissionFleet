// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586379E0 .. +0x250 bytes.
extern "C" __declspec(naked) void FUN_586379e0_586379E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ach
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
        ; Exact mapped bytes 0F 84 16 02 00 00: je 0x58637c22
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 80h
        push 0
        lea ecx, [ebp - 184h]
        push ecx
        ; Exact mapped bytes E8 F1 53 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x53
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        mov edx, dword ptr [ebp - 188h]
        mov ecx, dword ptr [edx + 170h]
        ; Exact mapped bytes E8 C8 61 ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x61
        __asm _emit 0xed
        __asm _emit 0xff
        add eax, 200h
        push eax
        lea eax, [ebp - 184h]
        push eax
        ; Exact mapped bytes E8 46 4E 21 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x4e
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 188h]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 62 59 ED FF: call 0x5850d3c0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x59
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], eax
        mov dword ptr [ebp - 190h], 0
        mov edx, dword ptr [ebp - 188h]
        mov ecx, dword ptr [edx + 120h]
        ; Exact mapped bytes E8 41 8E 18 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x8e
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 18ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x58637a9b
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 18ch]
        add eax, 1
        mov dword ptr [ebp - 18ch], eax
        mov ecx, dword ptr [ebp - 18ch]
        cmp ecx, dword ptr [ebp - 198h]
        ; Exact mapped bytes 0F 83 75 01 00 00: jae 0x58637c22
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18ch]
        movzx eax, byte ptr [ebp + edx*4 - 184h]
        test eax, eax
        ; Exact mapped bytes 0F 84 30 01 00 00: je 0x58637bf3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18ch]
        movzx edx, word ptr [ebp + ecx*4 - 182h]
        test edx, edx
        ; Exact mapped bytes 0F 84 1A 01 00 00: je 0x58637bf3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
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
        ; Exact mapped bytes E8 3E F3 EB FF: call 0x584f6e30
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf3
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        cmp dword ptr [ebp - 194h], 0
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x58637bc7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        push 0
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes E8 F8 52 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x52
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 D4 60 ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x60
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18ch]
        mov edx, dword ptr [eax + ecx*4 + 280h]
        mov dword ptr [ebp - 190h], edx
        mov eax, 0ffh
        mov ecx, dword ptr [ebp - 194h]
        ; Exact mapped bytes 66 23 81 98 00 00 00: and ax, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, ax
        imul edx, dword ptr [ebp - 190h]
        mov dword ptr [ebp - 19ch], edx
        push 588aedech
        ; Exact mapped bytes E8 85 A4 EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1a0h], eax
        mov eax, dword ptr [ebp - 190h]
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
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 120h]
        mov dword ptr [ebp - 1a4h], edx
        push 0ffffffh
        push -1
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 1a4h]
        ; Exact mapped bytes E8 5C 89 18 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x89
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2A: jmp 0x58637bf1
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 188h]
        mov edx, dword ptr [ecx + 120h]
        mov dword ptr [ebp - 1a8h], edx
        push 0ffffffh
        push -1
        push 588aee04h
        mov ecx, dword ptr [ebp - 1a8h]
        ; Exact mapped bytes E8 30 89 18 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x89
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2A: jmp 0x58637c1d
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 188h]
        mov ecx, dword ptr [eax + 120h]
        mov dword ptr [ebp - 1ach], ecx
        push 0ffffffh
        push -1
        push 588aee08h
        mov ecx, dword ptr [ebp - 1ach]
        ; Exact mapped bytes E8 04 89 18 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x89
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 6A FE FF FF: jmp 0x58637a8c
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 24 94 1F 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
