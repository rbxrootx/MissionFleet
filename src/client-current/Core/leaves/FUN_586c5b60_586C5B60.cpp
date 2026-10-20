// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C5B60 .. +0x317 bytes.
extern "C" __declspec(naked) void FUN_586c5b60_586C5B60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 150h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 108h], ecx
        mov eax, dword ptr [ebp - 108h]
        add eax, 98h
        mov dword ptr [ebp - 11ch], eax
        lea ecx, [ebp - 110h]
        push ecx
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 E4 24 DC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x24
        __asm _emit 0xdc
        __asm _emit 0xff
        xor edx, edx
        ; Exact mapped bytes 66 89 95 F4 FE FF FF: mov word ptr [ebp - 0x10c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 11: jmp 0x586c5bb8
        __asm _emit 0xeb
        __asm _emit 0x11
        push 1
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 8B 2A FF FF: call 0x586b8640
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 98h
        mov dword ptr [ebp - 120h], ecx
        lea edx, [ebp - 150h]
        push edx
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 B4 25 DC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x25
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 110h]
        ; Exact mapped bytes E8 E8 1D DC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x586c5c19
        __asm _emit 0x74
        __asm _emit 0x2a
        lea ecx, [ebp - 110h]
        ; Exact mapped bytes E8 36 1E DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x1e
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 2]
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 2]
        cmp ecx, eax
        ; Exact mapped bytes 75 0E: jne 0x586c5c17
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, 1
        ; Exact mapped bytes 66 89 8D F4 FE FF FF: mov word ptr [ebp - 0x10c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x586c5c19
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 8E: jmp 0x586c5ba7
        __asm _emit 0xeb
        __asm _emit 0x8e
        ; Exact mapped bytes 0F BF 95 F4 FE FF FF: movsx edx, word ptr [ebp - 0x10c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], edx
        cmp dword ptr [ebp - 118h], 0
        ; Exact mapped bytes 74 0E: je 0x586c5c3d
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 118h], 1
        ; Exact mapped bytes 74 5C: je 0x586c5c94
        __asm _emit 0x74
        __asm _emit 0x5c
        ; Exact mapped bytes E9 2A 02 00 00: jmp 0x586c5e67
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 128h], eax
        push 588b0f1ch
        ; Exact mapped bytes E8 8E C3 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xc3
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 124h], eax
        mov ecx, dword ptr [ebp - 124h]
        push ecx
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 23 04 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x04
        __asm _emit 0xdc
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 E2 EF FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D3 01 00 00: jmp 0x586c5e67
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 8]
        cmp eax, 1
        ; Exact mapped bytes 75 20: jne 0x586c5cc0
        __asm _emit 0x75
        __asm _emit 0x20
        push 588b0f44h
        ; Exact mapped bytes E8 46 C3 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xc3
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
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
        add esp, 8
        ; Exact mapped bytes EB 4A: jmp 0x586c5d0a
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 8]
        cmp eax, 2
        ; Exact mapped bytes 75 20: jne 0x586c5cec
        __asm _emit 0x75
        __asm _emit 0x20
        push 588b0f58h
        ; Exact mapped bytes E8 1A C3 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc3
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
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
        add esp, 8
        ; Exact mapped bytes EB 1E: jmp 0x586c5d0a
        __asm _emit 0xeb
        __asm _emit 0x1e
        push 588b0f6ch
        ; Exact mapped bytes E8 FA C2 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xc2
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        push eax
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 8
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + 24ch]
        mov dword ptr [ebp - 130h], ecx
        lea ecx, [ebp - 110h]
        ; Exact mapped bytes E8 09 1D DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx edx, word ptr [eax + 8]
        mov dword ptr [ebp - 12ch], edx
        mov eax, dword ptr [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 4D 54 0F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x54
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 24ch]
        mov dword ptr [ebp - 134h], edx
        push 1
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 7E 01 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 114h], 0
        ; Exact mapped bytes EB 0F: jmp 0x586c5d7e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 114h]
        add eax, 1
        mov dword ptr [ebp - 114h], eax
        cmp dword ptr [ebp - 114h], 3
        ; Exact mapped bytes 7D 29: jge 0x586c5db0
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 114h]
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx*4 + 1dch]
        mov dword ptr [ebp - 138h], eax
        push 1
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 33 01 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BF: jmp 0x586c5d6f
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 1b0h]
        mov dword ptr [ebp - 13ch], ecx
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 C3 02 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 144h], edx
        push 588b0f7ch
        ; Exact mapped bytes E8 EF C1 E5 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xc1
        __asm _emit 0xe5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 140h], eax
        mov eax, dword ptr [ebp - 140h]
        push eax
        mov ecx, dword ptr [ebp - 144h]
        ; Exact mapped bytes E8 84 02 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 24ch]
        mov dword ptr [ebp - 14ch], edx
        lea ecx, [ebp - 110h]
        ; Exact mapped bytes E8 F7 1B DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x1b
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx eax, word ptr [eax + 8]
        mov dword ptr [ebp - 148h], eax
        mov ecx, dword ptr [ebp - 148h]
        push ecx
        mov ecx, dword ptr [ebp - 14ch]
        ; Exact mapped bytes E8 3B 53 0F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x53
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0
        push 1
        push 0
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 0A EE FF FF: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 DF B1 16 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xb1
        __asm _emit 0x16
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
