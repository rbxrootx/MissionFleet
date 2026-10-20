// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58561220 .. +0x295 bytes.
extern "C" __declspec(naked) void FUN_58561220_58561220() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        add eax, 4
        mov dword ptr [ebp - 28h], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 42 6E F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x6e
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58561250
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 44h]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 31 68 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x68
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 24h]
        add eax, 4
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 2B 6F F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x6f
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 62 67 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x67
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 33 02 00 00: je 0x585614ac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 BF 67 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x67
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 B8 37 F2 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x37
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax + 20h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 13 02 00 00: jne 0x585614a7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585612ad
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 49: jge 0x585612fc
        __asm _emit 0x7d
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D2 E9 F4 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 43 E8 F4 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 24: je 0x585612fa
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 92 E9 F4 FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx eax, al
        xor eax, 55h
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7E 11: jle 0x585612fa
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 7F E9 F4 FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0xff
        movzx ecx, al
        xor ecx, 55h
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB A8: jmp 0x585612a4
        __asm _emit 0xeb
        __asm _emit 0xa8
        cmp dword ptr [ebp - 1ch], 7dh
        ; Exact mapped bytes 7E 0A: jle 0x5856130c
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov eax, 4
        ; Exact mapped bytes E9 A3 01 00 00: jmp 0x585614af
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 2C 67 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x67
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 25 37 F2 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x37
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, 4
        imul ecx, edx, 0
        mov edx, dword ptr [eax + ecx + 40h]
        and edx, 2
        ; Exact mapped bytes 74 46: je 0x58561372
        __asm _emit 0x74
        __asm _emit 0x46
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5856133e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 7D 2E: jge 0x58561372
        __asm _emit 0x7d
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 E9 F4 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 02 BD F2 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xbd
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 5
        ; Exact mapped bytes 75 0A: jne 0x58561370
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 3F 01 00 00: jmp 0x585614af
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB C3: jmp 0x58561335
        __asm _emit 0xeb
        __asm _emit 0xc3
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 C6 66 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x66
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 BF 36 F2 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x36
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx + 40h]
        and eax, 1
        ; Exact mapped bytes 74 46: je 0x585613d8
        __asm _emit 0x74
        __asm _emit 0x46
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x585613a4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 20h
        ; Exact mapped bytes 7D 2E: jge 0x585613d8
        __asm _emit 0x7d
        __asm _emit 0x2e
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB E8 F4 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 9C BC F2 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xbc
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 6
        ; Exact mapped bytes 75 0A: jne 0x585613d6
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 2
        ; Exact mapped bytes E9 D9 00 00 00: jmp 0x585614af
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB C3: jmp 0x5856139b
        __asm _emit 0xeb
        __asm _emit 0xc3
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 60 66 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x66
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 59 36 F2 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x36
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx + 40h]
        and eax, 4
        ; Exact mapped bytes 74 43: je 0x5856143b
        __asm _emit 0x74
        __asm _emit 0x43
        mov dword ptr [ebp - 14h], 1ch
        ; Exact mapped bytes EB 09: jmp 0x5856140a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 7D 2B: jge 0x5856143b
        __asm _emit 0x7d
        __asm _emit 0x2b
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 75 E8 F4 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 36 BC F2 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xbc
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 0dh
        ; Exact mapped bytes 75 07: jne 0x58561439
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 3
        ; Exact mapped bytes EB 76: jmp 0x585614af
        __asm _emit 0xeb
        __asm _emit 0x76
        ; Exact mapped bytes EB C6: jmp 0x58561401
        __asm _emit 0xeb
        __asm _emit 0xc6
        mov dword ptr [ebp - 20h], 1
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 E8 F4 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0C 36 F2 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x36
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 24h]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 87 57 F9 FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x57
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        mov edx, dword ptr [ebp - 20h]
        shl edx, cl
        mov dword ptr [ebp - 20h], edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 BC 65 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x65
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 B5 35 F2 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x35
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 20h]
        and edx, dword ptr [eax + ecx + 40h]
        ; Exact mapped bytes 75 07: jne 0x585614a3
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 5
        ; Exact mapped bytes EB 0C: jmp 0x585614af
        __asm _emit 0xeb
        __asm _emit 0x0c
        xor eax, eax
        ; Exact mapped bytes EB 08: jmp 0x585614af
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes E9 95 FD FF FF: jmp 0x58561241
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
