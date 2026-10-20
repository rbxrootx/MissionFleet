// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D4618 .. +0x2E8 bytes.
extern "C" __declspec(naked) void FUN_004d4618_004D4618() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 7ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 7ch], ecx
        mov eax, dword ptr [ebp - 7ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d4649
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c47h
        push 671a64h
        ; Exact mapped bytes E8 FC 46 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x46
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d4649
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d4624
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 37 1C 00 00: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4A 6F 05 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 58: jne 0x4d46c3
        __asm _emit 0x75
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 34h]
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x4d4689
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 A4 BF 68 00: call dword ptr [0x68bfa4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 12: jmp 0x4d469b
        __asm _emit 0xeb
        __asm _emit 0x12
        push 4
        mov eax, dword ptr [ebp - 7ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 D8 BE 68 00: call dword ptr [0x68bed8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 22: je 0x4d46c3
        __asm _emit 0x74
        __asm _emit 0x22
        push 0
        push 0
        push 36bh
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 06: je 0x4d46c3
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 30h], eax
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 FC DA 05 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xda
        __asm _emit 0x05
        __asm _emit 0x00
        lea ecx, [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 38 74 05 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 E8 DA 05 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x05
        __asm _emit 0x00
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 E0 DA 05 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xda
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        and edx, 40000000h
        test edx, edx
        ; Exact mapped bytes 0F 85 B5 00 00 00: jne 0x4d47ad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 30: je 0x4d472e
        __asm _emit 0x74
        __asm _emit 0x30
        push -10h
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        mov ecx, dword ptr [ebp - 74h]
        and ecx, 10000000h
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x4d4727
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 74h]
        and edx, 20000000h
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x4d472e
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 70h], 28h
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 3E: jne 0x4d4779
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes E8 30 D4 05 00: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xd4
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 65 6E 05 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 78h], eax
        lea eax, [ebp - 70h]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 78h]
        push ecx
        ; Exact mapped bytes E8 2C 53 F7 FF: call 0x449a85
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x53
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 A5 53 F7 FF: call 0x449b04
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x53
        __asm _emit 0xf7
        __asm _emit 0xff
        lea edx, [ebp - 5ch]
        push edx
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 A2 DE 05 00: call 0x53260d
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xde
        __asm _emit 0x05
        __asm _emit 0x00
        lea eax, [ebp - 5ch]
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 96 DE 05 00: call 0x53260d
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xde
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 2F: jmp 0x4d47a8
        __asm _emit 0xeb
        __asm _emit 0x2f
        lea ecx, [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes FF 15 70 BF 68 00: call dword ptr [0x68bf70]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        lea eax, [ebp - 70h]
        push eax
        push 2
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes E8 EF 52 F7 FF: call 0x449a85
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x52
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 68 53 F7 FF: call 0x449b04
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x53
        __asm _emit 0xf7
        __asm _emit 0xff
        lea edx, [ebp - 5ch]
        push edx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 65 DE 05 00: call 0x53260d
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xde
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x4d483d
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 7ch]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 A4 BF 68 00: call dword ptr [0x68bfa4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d47df
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c85h
        push 671a64h
        ; Exact mapped bytes E8 66 45 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x45
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d47df
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4d47bd
        __asm _emit 0x75
        __asm _emit 0xd8
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 7C BE 68 00: call dword ptr [0x68be7c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d4815
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c88h
        push 671a64h
        ; Exact mapped bytes E8 30 45 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x45
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d4815
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x4d47f3
        __asm _emit 0x75
        __asm _emit 0xd8
        lea edx, [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 15 7C BE 68 00: call dword ptr [0x68be7c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push 2
        lea ecx, [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        ; Exact mapped bytes FF 15 80 BE 68 00: call dword ptr [0x68be80]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        add eax, dword ptr [ebp - 3ch]
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 5E DA 05 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xda
        __asm _emit 0x05
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        sub esi, eax
        mov dword ptr [ebp - 0ch], esi
        mov eax, dword ptr [ebp - 40h]
        add eax, dword ptr [ebp - 38h]
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 55 DA 05 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xda
        __asm _emit 0x05
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        sub esi, eax
        mov dword ptr [ebp - 4], esi
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 7D 08: jge 0x4d488b
        __asm _emit 0x7d
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 22: jmp 0x4d48ad
        __asm _emit 0xeb
        __asm _emit 0x22
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 1D DA 05 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xda
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, eax
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7E 10: jle 0x4d48ad
        __asm _emit 0x7e
        __asm _emit 0x10
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 0B DA 05 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xda
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        sub edx, eax
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 7D 08: jge 0x4d48bd
        __asm _emit 0x7d
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 22: jmp 0x4d48df
        __asm _emit 0xeb
        __asm _emit 0x22
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 01 DA 05 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xda
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, eax
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7E 10: jle 0x4d48df
        __asm _emit 0x7e
        __asm _emit 0x10
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 EF D9 05 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, eax
        mov dword ptr [ebp - 4], ecx
        push 15h
        push -1
        push -1
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 29 1E 00 00: call 0x4d6720
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
