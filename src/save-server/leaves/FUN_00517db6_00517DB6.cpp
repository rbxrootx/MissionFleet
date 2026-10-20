// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00517DB6 .. +0x2D7 bytes.
extern "C" __declspec(naked) void FUN_00517db6_00517DB6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 64h], ecx
        mov eax, dword ptr [ebp - 64h]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 75 2D: jne 0x517dfb
        __asm _emit 0x75
        __asm _emit 0x2d
        push 3020h
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 88 BF 68 00: call dword ptr [0x68bf88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x517dfb
        __asm _emit 0x74
        __asm _emit 0x12
        push 0
        push 0
        push 200h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 7E 75 FB FF: call 0x4cf379
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x75
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 63 FF 00 00: call 0x527d66
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 59 01 00 00: jne 0x517f64
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 3020h
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 88 BF 68 00: call dword ptr [0x68bf88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x517e3a
        __asm _emit 0x75
        __asm _emit 0x14
        push 468h
        push 674cach
        ; Exact mapped bytes E8 0B 0F 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x517e3a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x517e20
        __asm _emit 0x75
        __asm _emit 0xe0
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 7F A3 01 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 70 BF 68 00: call dword ptr [0x68bf70]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 64 A5 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 E6 FA FC FF: call 0x4e794d
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xfa
        __asm _emit 0xfc
        __asm _emit 0xff
        push 20h
        push 0
        push 0
        push 0
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 5E A3 01 00: call 0x5321d5
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 4C BD 68 00: call dword ptr [0x68bd4c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 0F 8D D0 00 00 00: jge 0x517f64
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 2A A4 01 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 30h], eax
        push 16h
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 00 A4 01 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 54 BF 68 00: call dword ptr [0x68bf54]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 09: jmp 0x517ed3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 34h]
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 4
        ; Exact mapped bytes 73 5A: jae 0x517f33
        __asm _emit 0x73
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx*4 + 674f58h]
        push edx
        mov eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 88 BF 68 00: call dword ptr [0x68bf88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 37: je 0x517f31
        __asm _emit 0x74
        __asm _emit 0x37
        lea edx, [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 70 BF 68 00: call dword ptr [0x68bf70]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 39 FA FC FF: call 0x4e794d
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xfa
        __asm _emit 0xfc
        __asm _emit 0xff
        push 15h
        push 0
        push 0
        mov edx, dword ptr [ebp - 18h]
        sub edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 54 BF 68 00: call dword ptr [0x68bf54]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 97: jmp 0x517eca
        __asm _emit 0xeb
        __asm _emit 0x97
        lea edx, [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 D0 3B 01 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        push 16h
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 7D A3 01 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        sub eax, dword ptr [ebp - 30h]
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 5B A3 01 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 BC E7 FB FF: call 0x4d6720
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe7
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 36 78 FB FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x78
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 64h]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 0F 84 E9 00 00 00: je 0x518068
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 DF FD 00 00: call 0x527d66
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 D9 00 00 00: jne 0x518068
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 30 A2 01 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 23 A4 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa4
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 67 3B 01 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 17 A2 01 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 88 BF 68 00: call dword ptr [0x68bf88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 14: jne 0x517fdc
        __asm _emit 0x75
        __asm _emit 0x14
        push 493h
        push 674cach
        ; Exact mapped bytes E8 69 0D 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x517fdc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x517fc2
        __asm _emit 0x75
        __asm _emit 0xe0
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 D8 A3 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        ; Exact mapped bytes FF 15 70 BF 68 00: call dword ptr [0x68bf70]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push 16h
        mov edx, dword ptr [ebp - 44h]
        sub edx, dword ptr [ebp - 54h]
        push edx
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 AA A2 01 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 0B E7 FB FF: call 0x4d6720
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe7
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes EB 09: jmp 0x518027
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 5ch]
        add eax, 1
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 5ch], 4
        ; Exact mapped bytes 73 3B: jae 0x518068
        __asm _emit 0x73
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 5ch]
        mov edx, dword ptr [ecx*4 + 674f58h]
        push edx
        mov eax, dword ptr [ebp - 64h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 88 BF 68 00: call dword ptr [0x68bf88]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], eax
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 18: je 0x518066
        __asm _emit 0x74
        __asm _emit 0x18
        push 0
        mov edx, dword ptr [ebp - 60h]
        push edx
        ; Exact mapped bytes FF 15 44 BE 68 00: call dword ptr [0x68be44]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 60h]
        push eax
        ; Exact mapped bytes FF 15 B8 BF 68 00: call dword ptr [0x68bfb8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB B6: jmp 0x51801e
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 1E E2 FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe2
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x518083
        __asm _emit 0x75
        __asm _emit 0x0a
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 95 C5 FB FF: call 0x4d4618
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc5
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
