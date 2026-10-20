// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5866DEC0 .. +0x1CC bytes.
extern "C" __declspec(naked) void FUN_5866dec0_5866DEC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 82 62 E9 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x62
        __asm _emit 0xe9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6D 62 E9 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x62
        __asm _emit 0xe9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes 7E 56: jle 0x5866df55
        __asm _emit 0x7e
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov dword ptr [ebp - 14h], eax
        push 207h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 6C E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x6c
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 09 80 E1 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 1ch], eax
        push 9aah
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 6B E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x6b
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E1 7F E1 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x7f
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 31 01 00 00: jmp 0x5866e086
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 60h]
        ; Exact mapped bytes 7F 61: jg 0x5866dfc1
        __asm _emit 0x7f
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 64h]
        ; Exact mapped bytes 7E 56: jle 0x5866dfc1
        __asm _emit 0x7e
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 24h], ecx
        push 9abh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 6B E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x6b
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 9D 7F E1 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x7f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 2ch], ecx
        push 9ach
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 6B E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x6b
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 75 7F E1 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x7f
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x5866e086
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 64h]
        ; Exact mapped bytes 7F 5E: jg 0x5866e02a
        __asm _emit 0x7f
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 68h]
        ; Exact mapped bytes 7E 53: jle 0x5866e02a
        __asm _emit 0x7e
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 34h], edx
        push 9adh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 6B E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x6b
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 31 7F E1 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x7f
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 3ch], edx
        push 9aeh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 6B E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x6b
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 09 7F E1 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x7f
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5C: jmp 0x5866e086
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 68h]
        ; Exact mapped bytes 7F 51: jg 0x5866e086
        __asm _emit 0x7f
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 44h], ecx
        push 9afh
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 6A E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x6a
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 D3 7E E1 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x7e
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 4ch], ecx
        push 9b0h
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA 6A E1 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x6a
        __asm _emit 0xe1
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 AB 7E E1 FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x7e
        __asm _emit 0xe1
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
