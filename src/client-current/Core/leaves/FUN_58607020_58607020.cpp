// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58607020 .. +0x22C bytes.
extern "C" __declspec(naked) void FUN_58607020_58607020() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C F9 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf9
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 05 4F E8 FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x4f
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0E E8 FF FF: call 0x58605850
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 8C 04 01 00 00: jl 0x5860714e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B F9 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf9
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E4 4E E8 FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x4e
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 ED E7 FF FF: call 0x58605850
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 64h
        ; Exact mapped bytes 7E 53: jle 0x586070bb
        __asm _emit 0x7e
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 0ch], ecx
        push 51h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F DA E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xda
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A0 EE E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xee
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 14h], ecx
        push 1
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 DA E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xda
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 08 87 E9 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x87
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 51: jmp 0x5860710c
        __asm _emit 0xeb
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 1ch], ecx
        push 50h
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C DA E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xda
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 4D EE E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xee
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 24h], ecx
        push 0
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 D9 E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xd9
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B5 86 E9 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x86
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9D F8 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 16 4E E8 FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x4e
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8F 4D E8 FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x4d
        __asm _emit 0xe8
        __asm _emit 0xff
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 48 40 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x40
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x58607208
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 F8 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E0 4D E8 FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x4d
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E9 E6 FF FF: call 0x58605850
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 8D 99 00 00 00: jge 0x58607208
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 34h], ecx
        push 1beh
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 D9 E7 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xd9
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 96 ED E7 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xed
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 3ch], ecx
        push 0dh
        ; Exact mapped bytes 8B 0D 20 07 96 58: mov ecx, dword ptr [0x58960720]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1D D9 E7 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xd9
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 FE 85 E9 FF: call 0x5849f7c0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 44h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 F7 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 60 4D E8 FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x4d
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D9 4C E8 FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x4c
        __asm _emit 0xe8
        __asm _emit 0xff
        cdq
        mov ecx, 64h
        idiv ecx
        push eax
        ; Exact mapped bytes E8 18 9E 24 00: call 0x5885100d
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x9e
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 89 3F 1B 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x3f
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 4ch], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 F7 E7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1A 4D E8 FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x4d
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 13 E3 FF FF: call 0x58605540
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        imul eax, eax, 34h
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 F9 85 E9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
