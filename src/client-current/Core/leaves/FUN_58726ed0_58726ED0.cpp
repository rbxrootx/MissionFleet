// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58726ED0 .. +0x2D0 bytes.
extern "C" __declspec(naked) void FUN_58726ed0_58726ED0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 134h
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
        mov byte ptr [eax + 0ach], 0
        mov ecx, dword ptr [ebp - 108h]
        mov byte ptr [ecx + 0adh], 0
        mov edx, dword ptr [ebp - 108h]
        mov byte ptr [edx + 0aeh], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 FA D5 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfa
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 64 05 00 00: call 0x58727490
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        mov dword ptr [ecx + 3dch], eax
        mov dword ptr [ebp - 114h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58726f53
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 114h]
        add edx, 1
        mov dword ptr [ebp - 114h], edx
        cmp dword ptr [ebp - 114h], 2
        ; Exact mapped bytes 7D 1B: jge 0x58726f77
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 114h]
        mov ecx, dword ptr [ebp - 108h]
        mov ecx, dword ptr [ecx + eax*4 + 3d4h]
        ; Exact mapped bytes E8 4C 99 09 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x99
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CD: jmp 0x58726f44
        __asm _emit 0xeb
        __asm _emit 0xcd
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 0F 84 70 01 00 00: je 0x587270f4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 84 63 01 00 00: je 0x587270f4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 C4 DA D5 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xda
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [eax + 24h]
        mov dword ptr [ebp - 120h], eax
        mov ecx, dword ptr [ebp - 120h]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 FC DC FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xfc
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        mov edx, dword ptr [ebp - 11ch]
        add edx, 33ch
        push edx
        mov eax, dword ptr [ebp - 11ch]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        push edx
        ; Exact mapped bytes E8 AF B1 DF FF: call 0x58522190
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xb1
        __asm _emit 0xdf
        __asm _emit 0xff
        add esp, 4
        push eax
        push 588b40f0h
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
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 108h]
        mov ecx, dword ptr [eax + edx + 3d4h]
        mov dword ptr [ebp - 124h], ecx
        push 0ffffffh
        mov edx, dword ptr [ebp - 10ch]
        push edx
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 ED 94 09 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x94
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 108h]
        mov eax, dword ptr [edx + ecx + 3d4h]
        mov dword ptr [ebp - 130h], eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 07 DA D5 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xda
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        shr ecx, 0ah
        and ecx, 3fffffh
        mov dword ptr [ebp - 128h], ecx
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 EB D9 D5 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd9
        __asm _emit 0xd5
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 12ch], eax
        push 0ffffffh
        mov edx, dword ptr [ebp - 128h]
        push edx
        mov eax, dword ptr [ebp - 12ch]
        push eax
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 84 94 09 00: call 0x587c0520
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 108h]
        mov dl, byte ptr [ecx + 0ach]
        add dl, 1
        mov eax, dword ptr [ebp - 108h]
        mov byte ptr [eax + 0ach], dl
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE 4F D6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x4f
        __asm _emit 0xd6
        __asm _emit 0xff
        cmp dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes 74 12: je 0x587270dc
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 108h]
        movzx edx, byte ptr [ecx + 0ach]
        cmp edx, 64h
        ; Exact mapped bytes 75 02: jne 0x587270de
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 16: jmp 0x587270f4
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 C7 4F D6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x4f
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes E9 90 FE FF FF: jmp 0x58726f84
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5872710f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 110h]
        add eax, 1
        mov dword ptr [ebp - 110h], eax
        cmp dword ptr [ebp - 110h], 64h
        ; Exact mapped bytes 7D 30: jge 0x58727148
        __asm _emit 0x7d
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ebp - 108h]
        mov dword ptr [edx + ecx*4 + 240h], 0
        mov eax, dword ptr [ebp - 110h]
        mov ecx, dword ptr [ebp - 108h]
        mov dword ptr [ecx + eax*4 + 0b0h], 0
        ; Exact mapped bytes EB B8: jmp 0x58727100
        __asm _emit 0xeb
        __asm _emit 0xb8
        mov dword ptr [ebp - 118h], 0
        ; Exact mapped bytes EB 0F: jmp 0x58727163
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 118h]
        add edx, 1
        mov dword ptr [ebp - 118h], edx
        cmp dword ptr [ebp - 118h], 7
        ; Exact mapped bytes 7D 26: jge 0x58727192
        __asm _emit 0x7d
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 118h]
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + eax*4 + 78h]
        mov dword ptr [ebp - 134h], edx
        push 0
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 51 ED D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xed
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C2: jmp 0x58727154
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 B4 9E 10 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x9e
        __asm _emit 0x10
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
