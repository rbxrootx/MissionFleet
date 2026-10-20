// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585AFB70 .. +0x397 bytes.
extern "C" __declspec(naked) void FUN_585afb70_585AFB70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 88h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 4], 1ch
        ; Exact mapped bytes EB 09: jmp 0x585afb9c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 1fh
        ; Exact mapped bytes 0F 8F 5D 03 00 00: jg 0x585aff03
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x5d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 2F 4E ED FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x4e
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 270h]
        shr edx, cl
        and edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 0F 84 F0 02 00 00: je 0x585afebd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 508h]
        mov dword ptr [ebp - 14h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A9 63 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x63
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 0c4h]
        mov dword ptr [ebp - 18h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8F 63 ED FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x63
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 508h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 F4 7F ED FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x7f
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 54 48 4E: movsx edx, word ptr [eax + ecx*2 + 0x4e]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x4e
        add edx, 1bch
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 D8 7F ED FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x7f
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 54 48 0E: movsx edx, word ptr [eax + ecx*2 + 0xe]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x54
        __asm _emit 0x48
        __asm _emit 0x0e
        add edx, 200h
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 C7 59 20 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x59
        __asm _emit 0x20
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 2c4h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 508h]
        ; Exact mapped bytes E8 85 4D ED FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x4d
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A6 F7 EE FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf7
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 244h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 508h]
        ; Exact mapped bytes E8 54 4D ED FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x4d
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 75 F7 EE FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf7
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0c4h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 508h]
        ; Exact mapped bytes E8 23 4D ED FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x4d
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 44 F7 EE FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf7
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 578h]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 508h]
        ; Exact mapped bytes E8 F2 4C ED FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x4c
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 13 F7 EE FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf7
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 578h]
        mov dword ptr [ebp - 48h], ecx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 A9 61 ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x61
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 568h]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 508h]
        ; Exact mapped bytes E8 A7 4C ED FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x4c
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 C8 F6 EE FF: call 0x5849f430
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf6
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 568h]
        mov dword ptr [ebp - 54h], ecx
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 5E 61 ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x61
        __asm _emit 0xed
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 568h]
        mov dword ptr [ebp - 58h], ecx
        push 23h
        push 1eh
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 32 54 20 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x54
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 AC D2 ED FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd2
        __asm _emit 0xed
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 0dh
        ; Exact mapped bytes 0F 85 C6 00 00 00: jne 0x585afe86
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 60h], ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 39 D2 ED FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xd2
        __asm _emit 0xed
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 55h
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x585afe86
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 64h], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 48 D2 ED FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xd2
        __asm _emit 0xed
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 32 48 F3 FF: call 0x584e4630
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x48
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 7F: je 0x585afe84
        __asm _emit 0x74
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 68h], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 26 D2 ED FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xd2
        __asm _emit 0xed
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 244h]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 3
        push edx
        ; Exact mapped bytes 8B 0D 30 07 96 58: mov ecx, dword ptr [0x58960730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D 4C ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        mov eax, dword ptr [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 0E 6E ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x6e
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 2c4h]
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 4
        push ecx
        ; Exact mapped bytes 8B 0D 30 07 96 58: mov ecx, dword ptr [0x58960730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C 4C ED FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x4c
        __asm _emit 0xed
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        mov edx, dword ptr [ebp - 74h]
        push edx
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 DD 6D ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x6d
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 35: jmp 0x585afebb
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 244h]
        mov dword ptr [ebp - 7ch], edx
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 C0 6D ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 2c4h]
        mov dword ptr [ebp - 80h], edx
        push 0
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 A6 6D ED FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x6d
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 41: jmp 0x585afefe
        __asm _emit 0xeb
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 578h]
        mov dword ptr [ebp - 84h], edx
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 03 60 ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x60
        __asm _emit 0xed
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 568h]
        mov dword ptr [ebp - 88h], edx
        push 0
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 E3 5F ED FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x5f
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 90 FC FF FF: jmp 0x585afb93
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
