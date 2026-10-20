// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874E8E0 .. +0x23E bytes.
extern "C" __declspec(naked) void FUN_5874e8e0() {
    __asm {
        push ecx
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 30h]
        mov eax, dword ptr [edx + 0cc0h]
        push esi
        mov esi, ecx
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x5874e94e
        __asm _emit 0x74
        __asm _emit 0x58
        movzx ecx, word ptr [esi + 16ch]
        cmp ecx, 5
        ; Exact mapped bytes 0F 87 09 02 00 00: ja 0x5874eb0f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 8D 20 EB 74 58: jmp dword ptr [ecx*4 + 0x5874eb20]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x20
        __asm _emit 0xeb
        __asm _emit 0x74
        __asm _emit 0x58
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
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 38: je 0x5874e953
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 66 83 F8 07: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x07
        ; Exact mapped bytes 74 32: je 0x5874e953
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 2C: je 0x5874e953
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 74 26: je 0x5874e953
        __asm _emit 0x74
        __asm _emit 0x26
        push 0
        push 0
        push 5898d4e4h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        push 28h
        ; Exact mapped bytes E8 A9 D1 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E2 63 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        pop ecx
        ret
        mov ecx, dword ptr [edx + 9a4h]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 EA 04: shr dx, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x04
        xor dl, 0aah
        cmp dl, 50h
        ; Exact mapped bytes 0F 82 A2 01 00 00: jb 0x5874eb0f
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 7e0h
        ; Exact mapped bytes E8 73 D1 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AC 63 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        pop ecx
        ret
        mov al, byte ptr [eax + 4]
        and al, 1fh
        cmp al, 8
        ; Exact mapped bytes 74 0B: je 0x5874e99d
        __asm _emit 0x74
        __asm _emit 0x0b
        push 0
        push 0
        push 5898d4c0h
        ; Exact mapped bytes EB 99: jmp 0x5874e936
        __asm _emit 0xeb
        __asm _emit 0x99
        push 1100h
        mov ecx, esi
        ; Exact mapped bytes E8 57 18 18 00: call 0x588d0200
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x18
        __asm _emit 0x18
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 7C 12: jl 0x5874e9c0
        __asm _emit 0x7c
        __asm _emit 0x12
        push 10h
        mov ecx, esi
        ; Exact mapped bytes E8 49 18 18 00: call 0x588d0200
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x18
        __asm _emit 0x18
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 8D 4F 01 00 00: jge 0x5874eb0f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 7e4h
        ; Exact mapped bytes E8 20 D1 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 59 63 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        pop ecx
        ret
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
        ; Exact mapped bytes 66 83 F8 02: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x02
        ; Exact mapped bytes 74 14: je 0x5874e9fe
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 74 0E: je 0x5874e9fe
        __asm _emit 0x74
        __asm _emit 0x0e
        push 0
        push 0
        push 5898d49ch
        ; Exact mapped bytes E9 38 FF FF FF: jmp 0x5874e936
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [esp + 7]
        push ecx
        lea edx, [esp + 0ah]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 A1 BF FF FF: call 0x5874a9b0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [esp + 6], 1eh
        ; Exact mapped bytes 0F 86 F5 00 00 00: jbe 0x5874eb0f
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 7d7h
        ; Exact mapped bytes E8 C6 D0 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 FF 62 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        pop ecx
        ret
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
        ; Exact mapped bytes 66 83 F8 04: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x04
        ; Exact mapped bytes 74 1A: je 0x5874ea5e
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 74 14: je 0x5874ea5e
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 74 0E: je 0x5874ea5e
        __asm _emit 0x74
        __asm _emit 0x0e
        push 0
        push 0
        push 5898d478h
        ; Exact mapped bytes E9 D8 FE FF FF: jmp 0x5874e936
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esp + 7]
        push eax
        lea ecx, [esp + 0ah]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 41 BF FF FF: call 0x5874a9b0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [esp + 6], 55h
        ; Exact mapped bytes 0F 86 95 00 00 00: jbe 0x5874eb0f
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 7d9h
        ; Exact mapped bytes E8 66 D0 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 9F 62 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        pop ecx
        ret
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
        ; Exact mapped bytes 66 83 F8 07: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x07
        ; Exact mapped bytes 74 14: je 0x5874eab8
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 66 83 F8 06: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x06
        ; Exact mapped bytes 74 0E: je 0x5874eab8
        __asm _emit 0x74
        __asm _emit 0x0e
        push 0
        push 0
        push 5898d454h
        ; Exact mapped bytes E9 7E FE FF FF: jmp 0x5874e936
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [edx + 9a4h]
        ; Exact mapped bytes 66 8B 42 5E: mov ax, word ptr [edx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x5e
        ; Exact mapped bytes 66 C1 E8 04: shr ax, 4
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x04
        xor al, 0aah
        cmp al, 50h
        ; Exact mapped bytes 73 43: jae 0x5874eb0f
        __asm _emit 0x73
        __asm _emit 0x43
        push 0
        push 0
        push 0
        push 7dfh
        ; Exact mapped bytes E8 14 D0 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 4D 62 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        pop ecx
        ret
        mov cl, byte ptr [eax + 4]
        and cl, 1fh
        cmp cl, 9
        ; Exact mapped bytes 74 1C: je 0x5874eb0f
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 7e7h
        ; Exact mapped bytes E8 ED CF 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 26 62 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        pop ecx
        ret
        mov ecx, esi
        ; Exact mapped bytes E8 FA CC FF FF: call 0x5874b810
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        setne al
        pop esi
        pop ecx
        ret
    }
}
