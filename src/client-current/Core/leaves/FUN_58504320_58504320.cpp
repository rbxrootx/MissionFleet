// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58504320 .. +0x208 bytes.
extern "C" __declspec(naked) void FUN_58504320_58504320() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 CF 01 00 00: je 0x58504518
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x5850436a
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5850436a
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 51: je 0x585043ca
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x5850438d
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB E6: jmp 0x58504373
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 7B 13 F9 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x13
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 7C 02: jl 0x5850439e
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 2C: jmp 0x585043ca
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AD 14 F9 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x14
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB A9: jmp 0x58504373
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ebp - 18h]
        add ecx, dword ptr [edx + 4]
        mov eax, dword ptr [ebp - 18h]
        add ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp + 10h]
        add ecx, dword ptr [edx]
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [ebp - 18h]
        add ecx, dword ptr [edx + 8]
        mov eax, dword ptr [ebp - 18h]
        add ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp + 10h]
        add ecx, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 1ch]
        mov edx, dword ptr [ebp - 18h]
        add ecx, dword ptr [edx + 4]
        mov eax, dword ptr [ebp - 18h]
        add ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        lea ecx, [ecx + eax + 0ah]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp - 18h]
        add eax, dword ptr [ecx + 8]
        mov edx, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp + 10h]
        add eax, dword ptr [ecx + 4]
        mov edx, dword ptr [ebp - 18h]
        sub eax, dword ptr [edx + 54h]
        sub eax, 0ch
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 18h]
        add ecx, dword ptr [edx + 0ch]
        mov eax, dword ptr [ebp + 10h]
        add ecx, dword ptr [eax]
        mov dword ptr [ebp - 30h], ecx
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 18h]
        add edx, dword ptr [eax + 10h]
        mov ecx, dword ptr [ebp + 10h]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 2ch], edx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 2ch]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 28h]
        push ecx
        sub esp, 10h
        mov edx, esp
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 7F 63 2B 00: call 0x587ba830
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x63
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 12: je 0x585044ca
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 07: ja 0x585044ca
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 48: je 0x58504518
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 40: je 0x58504516
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x585044ea
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB E6: jmp 0x585044d0
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 61 13 F9 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x13
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB BA: jmp 0x585044d0
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes EB B2: jmp 0x585044ca
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 2E CB 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xcb
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
