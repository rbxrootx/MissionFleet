// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58690D70 .. +0x313 bytes.
extern "C" __declspec(naked) void FUN_58690d70_58690D70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 78h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 258h
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 74ch]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 41 51 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x51
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 74ch]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 22 51 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x51
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 11ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 148h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 87 6A 02 00 00: ja 0x58691049
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, byte ptr [edx + 586910a4h]
        ; Exact mapped bytes FF 24 85 84 10 69 58: jmp dword ptr [eax*4 + 0x58691084]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x69
        __asm _emit 0x58
        mov dword ptr [ebp - 8], 258h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 764h]
        mov dword ptr [ebp - 1ch], edx
        push 3ch
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 01 32 E7 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x32
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 75ch]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 6B A3 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xa3
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 760h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 55 A3 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xa3
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 72ch]
        mov dword ptr [ebp - 2ch], edx
        push 17h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C 3C DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x3c
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 FD 5D DF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x5d
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 72ch]
        mov dword ptr [ebp - 30h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 67 4F DF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x4f
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 CA 01 00 00: jmp 0x58691049
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 259h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 764h]
        mov dword ptr [ebp - 34h], ecx
        push 3ch
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 74 32 E7 FF: call 0x58504110
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x32
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 72ch]
        mov dword ptr [ebp - 3ch], eax
        push 18h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 3C DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x3c
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 9C 5D DF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x5d
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 7F 01 00 00: jmp 0x58691049
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 25ah
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 764h]
        mov dword ptr [ebp - 40h], eax
        push 3ch
        push 3ch
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 27 31 E7 FF: call 0x58504010
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x31
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5A 01 00 00: jmp 0x58691049
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 64h
        ; Exact mapped bytes 0F 87 2F 01 00 00: ja 0x5869102e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx + 586910e4h]
        ; Exact mapped bytes FF 24 85 C8 10 69 58: jmp dword ptr [eax*4 + 0x586910c8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x10
        __asm _emit 0x69
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 5A DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x5a
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 11ch]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 CA AD DF FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xad
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 83 5A DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x5a
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9C AF DF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xaf
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        lea ecx, [ebp - 78h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 ED E0 FF FF: call 0x5868f040
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 70h], edx
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 70h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 70h], eax
        mov eax, dword ptr [ebp - 6ch]
        cdq
        mov ecx, 56h
        idiv ecx
        mov dword ptr [ebp - 6ch], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 74ch]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 F5 A1 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xa1
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 74ch]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 D4 A1 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xa1
        __asm _emit 0x12
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 74ch]
        mov dword ptr [ebp - 58h], edx
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 05 4F DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x4f
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 74ch]
        mov dword ptr [ebp - 5ch], edx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 E6 4E DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x4e
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 25ch
        ; Exact mapped bytes EB 2B: jmp 0x5869102e
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov dword ptr [ebp - 8], 25dh
        ; Exact mapped bytes EB 22: jmp 0x5869102e
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 8], 25fh
        ; Exact mapped bytes EB 19: jmp 0x5869102e
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 8], 25eh
        ; Exact mapped bytes EB 10: jmp 0x5869102e
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 8], 25bh
        ; Exact mapped bytes EB 07: jmp 0x5869102e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 260h
        ; Exact mapped bytes EB 19: jmp 0x58691049
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [ebp - 8], 258h
        ; Exact mapped bytes EB 10: jmp 0x58691049
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 8], 258h
        ; Exact mapped bytes EB 07: jmp 0x58691049
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 258h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 740h]
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 73ch]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 B3 3A DF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x3a
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov edx, dword ptr [ebp - 64h]
        push edx
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 B4 4E DF FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x4e
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
