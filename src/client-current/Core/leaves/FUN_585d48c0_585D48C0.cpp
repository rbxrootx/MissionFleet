// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D48C0 .. +0x105 bytes.
extern "C" __declspec(naked) void FUN_585d48c0_585D48C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 20 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x20
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6D CD EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xcd
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x585d49bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA 75 EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x75
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x585d4906
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2D 78 EB FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x78
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x585d49bd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 28 D7 18 00: call 0x58762040
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xd7
        __asm _emit 0x18
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x585d49b8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 25 CD EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xcd
        __asm _emit 0xef
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 82 00 00 00: jne 0x585d49b8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F 20 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x20
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 74 72: je 0x585d49b8
        __asm _emit 0x74
        __asm _emit 0x72
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 82 00 00 00: call 0x585d49d0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x585d4954
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 64: jmp 0x585d49b8
        __asm _emit 0xeb
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 64 20 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 20 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x20
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 50 20 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0xeb
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 8], esi
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 33 77 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x77
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 36 20 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x20
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1F 77 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x77
        __asm _emit 0xeb
        __asm _emit 0xff
        sub esi, eax
        shl esi, 1
        mov dword ptr [ebp - 0ch], esi
        mov eax, dword ptr [ebp - 8]
        imul eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, dword ptr [ebp - 0ch]
        add eax, ecx
        cmp eax, 9c400h
        ; Exact mapped bytes 7D 09: jge 0x585d49b8
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 05: jmp 0x585d49bd
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 3E FF FF FF: jmp 0x585d48fb
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
