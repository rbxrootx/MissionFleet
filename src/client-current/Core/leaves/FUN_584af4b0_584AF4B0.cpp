// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AF4B0 .. +0x1B5 bytes.
extern "C" __declspec(naked) void FUN_584af4b0_584AF4B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 8], ecx
        mov byte ptr [ebp - 1], 0
        mov byte ptr [ebp - 2], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 30h
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        sub eax, 30h
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 170h]
        and edx, 1
        ; Exact mapped bytes 74 04: je 0x584af4eb
        __asm _emit 0x74
        __asm _emit 0x04
        mov byte ptr [ebp - 1], 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 170h]
        shr ecx, 1
        and ecx, 1
        ; Exact mapped bytes 74 04: je 0x584af4ff
        __asm _emit 0x74
        __asm _emit 0x04
        mov byte ptr [ebp - 2], 1
        movzx edx, byte ptr [ebp - 1]
        cmp edx, 1
        ; Exact mapped bytes 75 21: jne 0x584af529
        __asm _emit 0x75
        __asm _emit 0x21
        movzx eax, byte ptr [ebp - 2]
        cmp eax, 1
        ; Exact mapped bytes 75 18: jne 0x584af529
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        sub edx, 34h
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 27h
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x584af53b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 78: jge 0x584af5b9
        __asm _emit 0x7d
        __asm _emit 0x78
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 1c8h]
        mov dword ptr [ebp - 1ch], edx
        movzx eax, byte ptr [ebp - 1]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 82 69 FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x69
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 1c8h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B6 61 30 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x61
        __asm _emit 0x30
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 1d0h]
        mov dword ptr [ebp - 24h], ecx
        movzx edx, byte ptr [ebp - 2]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 49 69 FD FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x69
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 1d0h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 7D 61 30 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x61
        __asm _emit 0x30
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 79 FF FF FF: jmp 0x584af532
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 88 94 01 00 00: mov cx, word ptr [eax + 0x194]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 03: and cx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x03
        movzx edx, cx
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 61 02 FF FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 88 94 01 00 00: mov cx, word ptr [eax + 0x194]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 03: and cx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x03
        movzx edx, cx
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 35: je 0x584af62f
        __asm _emit 0x74
        __asm _emit 0x35
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 74 20: je 0x584af620
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 74 02: je 0x584af608
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 59: jmp 0x584af661
        __asm _emit 0xeb
        __asm _emit 0x59
        push 25h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B 54 FD FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 1b8h], eax
        ; Exact mapped bytes EB 41: jmp 0x584af661
        __asm _emit 0xeb
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 1b8h], 0
        ; Exact mapped bytes EB 32: jmp 0x584af661
        __asm _emit 0xeb
        __asm _emit 0x32
        push 26h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 54 FD FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 1b8h], eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 06 00 00: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x584af661
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 98h], 40000000h
        mov esp, ebp
        pop ebp
        ret
    }
}
