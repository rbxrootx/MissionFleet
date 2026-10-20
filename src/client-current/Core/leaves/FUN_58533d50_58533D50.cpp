// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58533D50 .. +0x33A bytes.
extern "C" __declspec(naked) void FUN_58533d50_58533D50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 144h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 130h], 20h
        mov dword ptr [ebp - 124h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58533d88
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 124h]
        add eax, 1
        mov dword ptr [ebp - 124h], eax
        mov ecx, dword ptr [ebp - 130h]
        sub ecx, 2
        cmp dword ptr [ebp - 124h], ecx
        ; Exact mapped bytes 0F 83 E6 00 00 00: jae 0x58533e83
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 124h], 0c0h
        mov eax, 40h
        imul ecx, eax, 0
        lea edx, [edx + ecx + 588a4b88h]
        push edx
        push 40h
        lea eax, [ebp - 120h]
        push eax
        ; Exact mapped bytes E8 BB 03 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        imul ecx, dword ptr [ebp - 124h], 0c0h
        mov edx, 40h
        shl edx, 0
        lea eax, [ecx + edx + 588a4b88h]
        push eax
        push 40h
        lea ecx, [ebp - 0e0h]
        push ecx
        ; Exact mapped bytes E8 90 03 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x03
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        imul edx, dword ptr [ebp - 124h], 0c0h
        mov eax, 40h
        shl eax, 1
        lea ecx, [edx + eax + 588a4b88h]
        push ecx
        push 40h
        lea edx, [ebp - 0a0h]
        push edx
        ; Exact mapped bytes E8 66 03 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 120h]
        push eax
        ; Exact mapped bytes E8 07 58 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 40h
        lea ecx, [ebp - 60h]
        push ecx
        ; Exact mapped bytes E8 48 03 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20h], 0ffffffffh
        mov dword ptr [ebp - 1ch], 0ffffffffh
        mov byte ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0ffffffffh
        mov dword ptr [ebp - 10h], 0ffffffffh
        mov byte ptr [ebp - 0ch], 0
        mov byte ptr [ebp - 0bh], 1
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 120h]
        push eax
        mov ecx, 58947340h
        ; Exact mapped bytes E8 13 0A 00 00: call 0x58534890
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F6 FE FF FF: jmp 0x58533d79
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], 4
        mov ecx, 58947340h
        ; Exact mapped bytes E8 19 0A 00 00: call 0x585348b0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 12ch], eax
        push 58947340h
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        push 3e8h
        push 0ch
        push 522h
        ; Exact mapped bytes E8 46 FC FF FF: call 0x58533b00
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        lea edx, [ebp - 140h]
        push edx
        mov ecx, 58947340h
        ; Exact mapped bytes E8 C2 42 F5 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x42
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 134h], eax
        lea ecx, [ebp - 144h]
        push ecx
        mov ecx, 58947340h
        ; Exact mapped bytes E8 99 41 F5 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x41
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 138h], edx
        push 58533ce0h
        mov eax, dword ptr [ebp - 134h]
        push eax
        mov ecx, dword ptr [ebp - 138h]
        push ecx
        ; Exact mapped bytes E8 19 1B FF FF: call 0x58525a20
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 0F: jmp 0x58533f1b
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 124h]
        add edx, 1
        mov dword ptr [ebp - 124h], edx
        mov eax, dword ptr [ebp - 124h]
        cmp eax, dword ptr [ebp - 130h]
        ; Exact mapped bytes 0F 83 E6 00 00 00: jae 0x58534013
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 124h], 0c0h
        mov edx, 40h
        imul eax, edx, 0
        lea ecx, [ecx + eax + 588a4b88h]
        push ecx
        push 40h
        lea edx, [ebp - 120h]
        push edx
        ; Exact mapped bytes E8 2B 02 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x02
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        imul eax, dword ptr [ebp - 124h], 0c0h
        mov ecx, 40h
        shl ecx, 0
        lea edx, [eax + ecx + 588a4b88h]
        push edx
        push 40h
        lea eax, [ebp - 0e0h]
        push eax
        ; Exact mapped bytes E8 00 02 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        imul ecx, dword ptr [ebp - 124h], 0c0h
        mov edx, 40h
        shl edx, 1
        lea eax, [ecx + edx + 588a4b88h]
        push eax
        push 40h
        lea ecx, [ebp - 0a0h]
        push ecx
        ; Exact mapped bytes E8 D6 01 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 120h]
        push edx
        ; Exact mapped bytes E8 77 56 FF FF: call 0x58529630
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        push 40h
        lea eax, [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 B8 01 28 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x28
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20h], 0ffffffffh
        mov dword ptr [ebp - 1ch], 0ffffffffh
        mov byte ptr [ebp - 18h], 0
        mov dword ptr [ebp - 14h], 0ffffffffh
        mov dword ptr [ebp - 10h], 0ffffffffh
        mov byte ptr [ebp - 0ch], 0
        mov byte ptr [ebp - 0bh], 0
        mov ecx, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 8], ecx
        lea edx, [ebp - 120h]
        push edx
        mov ecx, 58947340h
        ; Exact mapped bytes E8 83 08 00 00: call 0x58534890
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F9 FE FF FF: jmp 0x58533f0c
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5853402e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 128h]
        add eax, 1
        mov dword ptr [ebp - 128h], eax
        mov ecx, 58947340h
        ; Exact mapped bytes E8 78 08 00 00: call 0x585348b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 128h], eax
        ; Exact mapped bytes 73 38: jae 0x58534078
        __asm _emit 0x73
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 128h]
        push ecx
        mov ecx, 58947340h
        ; Exact mapped bytes E8 2F 3E FF FF: call 0x58527e80
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        mov edx, dword ptr [ebp - 13ch]
        movzx eax, byte ptr [edx + 108h]
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x58534076
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes C6 05 3C 73 94 58 01: mov byte ptr [0x5894733c], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes C6 05 3D 73 94 58 01: mov byte ptr [0x5894733d], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x3d
        __asm _emit 0x73
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes EB A7: jmp 0x5853401f
        __asm _emit 0xeb
        __asm _emit 0xa7
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 CC CF 2F 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xcf
        __asm _emit 0x2f
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
