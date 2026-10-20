// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00509EB9 .. +0x240 bytes.
extern "C" __declspec(naked) void FUN_00509eb9_00509EB9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 60h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4ch], ecx
        push 28fh
        push 6791a4h
        mov eax, dword ptr [ebp - 4ch]
        push eax
        ; Exact mapped bytes E8 88 03 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x509ef2
        __asm _emit 0x75
        __asm _emit 0x14
        push 290h
        push 6791a4h
        ; Exact mapped bytes E8 53 EE 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x509ef2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x509ed8
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx + 64h]
        and eax, 0a000h
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x509f34
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 7ch
        ; Exact mapped bytes E8 6B C4 01 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 0F 8D 74 01 00 00: jge 0x50a0bc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 27 FF FF FF: call 0x509e7b
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x50a041
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x50a041
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 48 82 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 84 1B 02 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 B6 D9 FD FF: call 0x4e794d
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 14: je 0x509fb1
        __asm _emit 0x74
        __asm _emit 0x14
        lea edx, [ebp - 30h]
        push edx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 34 83 02 00: call 0x5322dd
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 50h], eax
        ; Exact mapped bytes EB 14: jmp 0x509fc5
        __asm _emit 0xeb
        __asm _emit 0x14
        lea ecx, [ebp - 38h]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 20 83 02 00: call 0x5322dd
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        sub edx, 1
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 50h]
        ; Exact mapped bytes 7E 08: jle 0x509fd5
        __asm _emit 0x7e
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 54h], ecx
        ; Exact mapped bytes EB 34: jmp 0x50a009
        __asm _emit 0xeb
        __asm _emit 0x34
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 14: je 0x509fef
        __asm _emit 0x74
        __asm _emit 0x14
        lea edx, [ebp - 40h]
        push edx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 F6 82 02 00: call 0x5322dd
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 58h], eax
        ; Exact mapped bytes EB 14: jmp 0x50a003
        __asm _emit 0xeb
        __asm _emit 0x14
        lea ecx, [ebp - 48h]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 E2 82 02 00: call 0x5322dd
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        sub edx, 1
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 10: je 0x50a025
        __asm _emit 0x74
        __asm _emit 0x10
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        cmp edx, dword ptr [ebp - 28h]
        setg al
        mov dword ptr [ebp - 5ch], eax
        ; Exact mapped bytes EB 0E: jmp 0x50a033
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 10h]
        xor edx, edx
        cmp ecx, dword ptr [ebp - 24h]
        setg dl
        mov dword ptr [ebp - 5ch], edx
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 06: je 0x50a03f
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 76: jmp 0x50a0b7
        __asm _emit 0xeb
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 2B 0D C4 6D 68 00: sub ecx, dword ptr [0x686dc4]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, ecx
        mov dword ptr [ebp - 4], edx
        mov dword ptr [ebp - 0ch], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 08: je 0x50a067
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes EB 06: jmp 0x50a06d
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 60h], ecx
        mov edx, dword ptr [ebp - 60h]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 7D 3C: jge 0x50a0b1
        __asm _emit 0x7d
        __asm _emit 0x3c
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 16: jne 0x50a091
        __asm _emit 0x75
        __asm _emit 0x16
        push 1
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 7ch
        ; Exact mapped bytes E8 F2 52 FB FF: call 0x4bf383
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x52
        __asm _emit 0xfb
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 7ch
        ; Exact mapped bytes E8 DA 52 FB FF: call 0x4bf383
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x52
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        ; Exact mapped bytes EB 3F: jmp 0x50a0f0
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 6F FE FF FF: jmp 0x509f2b
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        push 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 7ch
        ; Exact mapped bytes E8 B1 52 FB FF: call 0x4bf383
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x52
        __asm _emit 0xfb
        __asm _emit 0xff
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 7ch
        ; Exact mapped bytes E8 99 52 FB FF: call 0x4bf383
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x52
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
