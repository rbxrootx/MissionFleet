// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58639060 .. +0x204 bytes.
extern "C" __declspec(naked) void FUN_58639060_58639060() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 12ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10ch], ecx
        mov eax, dword ptr [ebp - 10ch]
        cmp dword ptr [eax + 170h], 0
        ; Exact mapped bytes 0F 84 C8 01 00 00: je 0x58639254
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 63 4B ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x4b
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + edx*4 + 80h]
        mov dword ptr [ebp - 114h], eax
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 71 DD EB FF: call 0x584f6e30
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xdd
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        cmp dword ptr [ebp - 108h], 0
        ; Exact mapped bytes 0F 84 56 01 00 00: je 0x58639228
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        push 0
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes E8 2B 3D 21 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x3d
        __asm _emit 0x21
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 07 4B ED FF: call 0x5850dc00
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x4b
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + ecx*4 + 100h]
        mov dword ptr [ebp - 110h], edx
        mov eax, dword ptr [ebp - 108h]
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
        ; Exact mapped bytes 75 5C: jne 0x58639181
        __asm _emit 0x75
        __asm _emit 0x5c
        mov eax, 0ffh
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes 66 23 81 98 00 00 00: and ax, word ptr [ecx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, ax
        imul edx, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 118h], edx
        push 588aee60h
        ; Exact mapped bytes E8 9F 8E EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x8e
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 11ch], eax
        mov eax, dword ptr [ebp - 110h]
        push eax
        mov ecx, dword ptr [ebp - 118h]
        push ecx
        mov edx, dword ptr [ebp - 11ch]
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
        ; Exact mapped bytes EB 77: jmp 0x586391f8
        __asm _emit 0xeb
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 108h]
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
        ; Exact mapped bytes 75 5A: jne 0x586391f8
        __asm _emit 0x75
        __asm _emit 0x5a
        mov ecx, 0ffh
        mov edx, dword ptr [ebp - 108h]
        ; Exact mapped bytes 66 23 8A 98 00 00 00: and cx, word ptr [edx + 0x98]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x8a
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, cx
        imul eax, dword ptr [ebp - 110h]
        mov dword ptr [ebp - 120h], eax
        push 588aee78h
        ; Exact mapped bytes E8 26 8E EE FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x8e
        __asm _emit 0xee
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        mov ecx, dword ptr [ebp - 110h]
        push ecx
        mov edx, dword ptr [ebp - 120h]
        push edx
        mov eax, dword ptr [ebp - 124h]
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
        mov edx, dword ptr [ebp - 10ch]
        mov eax, dword ptr [edx + 11ch]
        mov dword ptr [ebp - 128h], eax
        push 0ff000000h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 DB 83 18 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2C: jmp 0x58639254
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 10ch]
        mov ecx, dword ptr [eax + 11ch]
        mov dword ptr [ebp - 12ch], ecx
        push 0ff000000h
        mov edx, dword ptr [ebp + 8]
        push edx
        push 588aee90h
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 AD 83 18 00: call 0x587c1600
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x83
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 F2 7D 1F 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x7d
        __asm _emit 0x1f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
