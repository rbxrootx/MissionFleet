// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586FFFA0 .. +0x761 bytes.
extern "C" __declspec(naked) void FUN_586fffa0_586FFFA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 7ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 5E 06 00 00: jne 0x58700611
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5e
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 1D EF FF: call 0x585f1cd0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x1d
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 19ch]
        ; Exact mapped bytes 0F 85 FC 01 00 00: jne 0x587001cd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 80 75 94 58: mov ecx, dword ptr [0x58947580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A4 6B 05 00: call 0x58756b80
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x6b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 E4 01 00 00: je 0x587001c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 0ch
        ; Exact mapped bytes 0F 85 A3 00 00 00: jne 0x5870009a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1E 1F EF FF: call 0x585f1f20
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x1f
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x58700095
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 19 E6 E7 FF: call 0x5857e630
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xe6
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 19ch]
        mov dword ptr [ebp - 30h], edx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 63 5F D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x5f
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 190h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 190h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 194h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 194h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x58700072
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 7D 1D: jge 0x58700095
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 1a8h]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 FE 5E D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x5e
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x58700069
        __asm _emit 0xeb
        __asm _emit 0xd4
        ; Exact mapped bytes E9 2E 01 00 00: jmp 0x587001c8
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 49 D8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x49
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 01 BD 0B 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xbd
        __asm _emit 0x0b
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 49 D8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x49
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 40h], edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 C0: call dword ptr [ebp - 0x40]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc0
        push 7
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 49 D8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x49
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes A1 94 20 96 58: mov eax, dword ptr [0x58962094]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 BA BC 0B 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xbc
        __asm _emit 0x0b
        __asm _emit 0x00
        push 7
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D 49 D8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x49
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 55 B4: call dword ptr [ebp - 0x4c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb4
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 9ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 9eh]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C6 E7 E7 FF: call 0x5857e910
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 19ch]
        mov dword ptr [ebp - 50h], ecx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 30 5E D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x5e
        __asm _emit 0xd8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 190h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 190h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 194h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 194h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x587001a5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 7D 1D: jge 0x587001c8
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1a8h]
        mov dword ptr [ebp - 54h], ecx
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 CB 5D D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x5870019c
        __asm _emit 0xeb
        __asm _emit 0xd4
        ; Exact mapped bytes E9 3F 04 00 00: jmp 0x5870060c
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 1a0h]
        ; Exact mapped bytes 0F 85 8F 00 00 00: jne 0x5870026e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 0ch
        ; Exact mapped bytes 75 10: jne 0x587001fe
        __asm _emit 0x75
        __asm _emit 0x10
        push 1
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 E4 E7 FF: call 0x5857e630
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xe4
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 22: jmp 0x58700220
        __asm _emit 0xeb
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 9ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 9eh]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 E7 E7 FF: call 0x5857e940
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xe7
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 190h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 190h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 194h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 194h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1a0h]
        mov dword ptr [ebp - 58h], edx
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 28 5D D8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5d
        __asm _emit 0xd8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 9E 03 00 00: jmp 0x5870060c
        __asm _emit 0xe9
        __asm _emit 0x9e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 1a4h]
        ; Exact mapped bytes 75 4D: jne 0x587002c9
        __asm _emit 0x75
        __asm _emit 0x4d
        push 40000h
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 9ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 9eh]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE E3 E7 FF: call 0x5857e660
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe3
        __asm _emit 0xe7
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 F5 E7 FF: call 0x5857f840
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xf5
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes C6 05 9D 75 94 58 00: mov byte ptr [0x5894759d], 0
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x9d
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes C6 05 9E 75 94 58 00: mov byte ptr [0x5894759e], 0
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x9e
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes C6 05 9F 75 94 58 00: mov byte ptr [0x5894759f], 0
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x9f
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E9 43 03 00 00: jmp 0x5870060c
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 128h]
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x58700375
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 09: jne 0x587002ea
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 1
        ; Exact mapped bytes EB 07: jmp 0x587002f1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 E3 E7 FF: call 0x5857e630
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xe3
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 75 56: jne 0x5870035d
        __asm _emit 0x75
        __asm _emit 0x56
        push 4
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C 47 D8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x47
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes A1 94 20 96 58: mov eax, dword ptr [0x58962094]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 95 BA 0B 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xba
        __asm _emit 0x0b
        __asm _emit 0x00
        push 4
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 48 47 D8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x47
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 64h], ecx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 55 9C: call dword ptr [ebp - 0x64]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x9c
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ach], 1
        ; Exact mapped bytes EB 13: jmp 0x58700370
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 0D: jne 0x58700370
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ach], 0
        ; Exact mapped bytes E9 97 02 00 00: jmp 0x5870060c
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 18ch]
        ; Exact mapped bytes 75 1F: jne 0x587003a2
        __asm _emit 0x75
        __asm _emit 0x1f
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 75 0B: jne 0x58700394
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DF 15 00 00: call 0x58701970
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 09: jmp 0x5870039d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 FB FF FF: call 0x586fff20
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 6A 02 00 00: jmp 0x5870060c
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 1b0h]
        ; Exact mapped bytes 75 67: jne 0x58700417
        __asm _emit 0x75
        __asm _emit 0x67
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 1B EF FF: call 0x585f1f20
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x1b
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x587003f7
        __asm _emit 0x74
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ach], 0
        ; Exact mapped bytes 74 0E: je 0x587003d9
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7A E8 E7 FF: call 0x5857ec50
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x587003f5
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes E8 12 6E DD FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x6e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        push 0
        push 0
        push 0
        push 1d8h
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 7C 89 DD FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x89
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x58700412
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E 11 E7 FF: call 0x58571560
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x11
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x58700412
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 46 EF FF: call 0x585f4a40
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x46
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F5 01 00 00: jmp 0x5870060c
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 1b4h]
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x587004ab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [eax + 58948c34h]
        ; Exact mapped bytes E8 54 6D DD FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x6d
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 22: jle 0x58700462
        __asm _emit 0x7e
        __asm _emit 0x22
        mov ecx, 4
        shl ecx, 0
        mov ecx, dword ptr [ecx + 58948c34h]
        ; Exact mapped bytes E8 3D 6D DD FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x6d
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 0B: jle 0x58700462
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 32 00 00: call 0x587036d0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 44: jmp 0x587004a6
        __asm _emit 0xeb
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 208h], 0
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E6 10 E7 FF: call 0x58571560
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x10
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x5870048a
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 45 EF FF: call 0x585f4a40
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x45
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E8 61 6D DD FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x6d
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        push 0
        push 0
        push 0
        push 1d4h
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 CB 88 DD FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x88
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 61 01 00 00: jmp 0x5870060c
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 19ch]
        ; Exact mapped bytes E8 A7 44 D8 FF: call 0x58484960
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x44
        __asm _emit 0xd8
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 22: jne 0x587004e2
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 8
        ; Exact mapped bytes 74 13: je 0x587004e2
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 9
        ; Exact mapped bytes 0F 85 BD 00 00 00: jne 0x5870059f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x587004f4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 0a0h]
        ; Exact mapped bytes 0F 8D 99 00 00 00: jge 0x5870059f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax*4 + 0bch]
        ; Exact mapped bytes 75 67: jne 0x5870057f
        __asm _emit 0x75
        __asm _emit 0x67
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 0bch]
        ; Exact mapped bytes E8 96 44 D8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x44
        __asm _emit 0xd8
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 74 33: je 0x58700562
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 74 28: je 0x58700560
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        push 64h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes FF 55 8C: call dword ptr [ebp - 0x74]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x8c
        nop
        ; Exact mapped bytes EB 1B: jmp 0x5870057d
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0bch]
        mov dword ptr [ebp - 78h], ecx
        push 5
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 C4 F2 D9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf2
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x5870059a
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0bch]
        mov dword ptr [ebp - 7ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 A7 F2 D9 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf2
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4C FF FF FF: jmp 0x587004eb
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0ah
        ; Exact mapped bytes 77 51: ja 0x5870060c
        __asm _emit 0x77
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 24 95 04 07 70 58: jmp dword ptr [edx*4 + 0x58700704]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0x07
        __asm _emit 0x70
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x587005d7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 2F: jge 0x5870060c
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx*4 + 13ch]
        ; Exact mapped bytes 75 1B: jne 0x5870060a
        __asm _emit 0x75
        __asm _emit 0x1b
        imul eax, dword ptr [ebp - 0ch], 2dh
        cdq
        mov ecx, 0ah
        idiv ecx
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 89 E4 E7 FF: call 0x5857ea90
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xe4
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 02: jmp 0x5870060c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C2: jmp 0x587005ce
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes E9 E5 00 00 00: jmp 0x587006f6
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 75 73: jne 0x5870068a
        __asm _emit 0x75
        __asm _emit 0x73
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58700629
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes 7D 51: jge 0x58700688
        __asm _emit 0x7d
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx*4 + 0bch]
        ; Exact mapped bytes 75 3D: jne 0x58700686
        __asm _emit 0x75
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a4h]
        cmp eax, 8
        ; Exact mapped bytes 74 2E: je 0x58700686
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a4h]
        cmp edx, 9
        ; Exact mapped bytes 74 1F: je 0x58700686
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a4h]
        cmp ecx, 6
        ; Exact mapped bytes 74 10: je 0x58700686
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 2A EF FF: call 0x585f30a0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x2a
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 98: jmp 0x58700620
        __asm _emit 0xeb
        __asm _emit 0x98
        ; Exact mapped bytes EB 6C: jmp 0x587006f6
        __asm _emit 0xeb
        __asm _emit 0x6c
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 75 12: jne 0x587006a2
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 50 20 96 58: mov ecx, dword ptr [0x58962050]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 39 DD FF: call 0x584d4000
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x39
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 54: jmp 0x587006f6
        __asm _emit 0xeb
        __asm _emit 0x54
        cmp dword ptr [ebp + 0ch], 0f233h
        ; Exact mapped bytes 75 4B: jne 0x587006f6
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 2
        ; Exact mapped bytes 75 34: jne 0x587006f6
        __asm _emit 0x75
        __asm _emit 0x34
        push 40000h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 9ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 9eh]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 DF E7 FF: call 0x5857e660
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xdf
        __asm _emit 0xe7
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B F1 E7 FF: call 0x5857f840
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf1
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
