// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A8660 .. +0x12C bytes.
extern "C" __declspec(naked) void FUN_584a8660_584A8660() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887df3dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 18h
        push esi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 3B EE FD FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xee
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 38 FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 0B: jmp 0x584a86b7
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7C 3A FE FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x584a8755
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 02: jne 0x584a86cb
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB E1: jmp 0x584a86ac
        __asm _emit 0xeb
        __asm _emit 0xe1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6D 99 2B 00: call 0x58762040
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x99
        __asm _emit 0x2b
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 76: jne 0x584a8750
        __asm _emit 0x75
        __asm _emit 0x76
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4C A3 2B 00: call 0x58762a30
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xa3
        __asm _emit 0x2b
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x584a8700
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 C0 48 FE FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B6 48 FE FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 02: je 0x584a8700
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB AC: jmp 0x584a86ac
        __asm _emit 0xeb
        __asm _emit 0xac
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 48 8F 02 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x8f
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 41: jne 0x584a8750
        __asm _emit 0x75
        __asm _emit 0x41
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 32 07 00 00: call 0x584a8e50
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x584a8729
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 1
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 CA 00 00 00: call 0x584a8800
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 7F 06: jg 0x584a8743
        __asm _emit 0x7f
        __asm _emit 0x06
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0D: je 0x584a8750
        __asm _emit 0x74
        __asm _emit 0x0d
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 D1 FA FD FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x584a86ac
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8F F6 FF FF: call 0x584a7df0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        or edx, 1
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 67 F0 FD FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
