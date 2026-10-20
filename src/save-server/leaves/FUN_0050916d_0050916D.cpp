// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050916D .. +0x215 bytes.
extern "C" __declspec(naked) void FUN_0050916d_0050916D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 74 20: je 0x50919f
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1A: je 0x50919f
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 10h], -1
        ; Exact mapped bytes 74 14: je 0x50919f
        __asm _emit 0x74
        __asm _emit 0x14
        push 138h
        push 6791a4h
        ; Exact mapped bytes E8 A6 FB 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50919f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x509179
        __asm _emit 0x75
        __asm _emit 0xd4
        push 139h
        push 6791a4h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 A8 10 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x10
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x5091d2
        __asm _emit 0x75
        __asm _emit 0x14
        push 13ah
        push 6791a4h
        ; Exact mapped bytes E8 73 FB 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5091d2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5091b8
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D5 0B 00 00: call 0x509dbd
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7F 14: jg 0x509205
        __asm _emit 0x7f
        __asm _emit 0x14
        push 13ch
        push 6791a4h
        ; Exact mapped bytes E8 40 FB 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xfb
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x509205
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5091eb
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x5092b1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 08 BF 68 00: call dword ptr [0x68bf08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov esi, eax
        and esi, 0ffffh
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 F4 D2 01 00: call 0x52652d
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [eax], esi
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 DF D2 01 00: call 0x52652d
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 64 0B 00 00: call 0x509dbd
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 4D: jle 0x5092af
        __asm _emit 0x7e
        __asm _emit 0x4d
        push 1
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 52 62 FB FF: call 0x4bf4c5
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x62
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 A8 D2 01 00: call 0x52652d
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 25: jne 0x5092af
        __asm _emit 0x75
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 94 D2 01 00: call 0x52652d
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 11: jne 0x5092af
        __asm _emit 0x75
        __asm _emit 0x11
        push 1
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 16 62 FB FF: call 0x4bf4c5
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x62
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 5F: jmp 0x509310
        __asm _emit 0xeb
        __asm _emit 0x5f
        push 1
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 03 62 FB FF: call 0x4bf4c5
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x62
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        sub edx, 1
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 59 D2 01 00: call 0x52652d
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 25: jne 0x5092fe
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 45 D2 01 00: call 0x52652d
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xd2
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 11: jne 0x5092fe
        __asm _emit 0x75
        __asm _emit 0x11
        push 1
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 7ch
        ; Exact mapped bytes E8 C7 61 FB FF: call 0x4bf4c5
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x61
        __asm _emit 0xfb
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], -1
        ; Exact mapped bytes 74 0C: je 0x509310
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C1 FD FF FF: call 0x5090d1
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 75 04: jne 0x50931d
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5C: jmp 0x509379
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DA C4 00 00: call 0x5157ff
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 78h], 0
        ; Exact mapped bytes 74 3C: je 0x50936d
        __asm _emit 0x74
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 90 E8 00 00 00: call dword ptr [eax + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x50936d
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 07 F5 FF FF: call 0x508852
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x509361
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        mov eax, 1
        ; Exact mapped bytes EB 18: jmp 0x509379
        __asm _emit 0xeb
        __asm _emit 0x18
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 54 D4 FC FF: call 0x4d67bf
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xd4
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 0A: jmp 0x509377
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F2 45 02 00: call 0x52d969
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
