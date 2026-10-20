// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1016BEB0 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_1016beb0_1016BEB0() {
    __asm {
        push ebp
        ; Exact mapped bytes 8B 2D A4 51 17 10: mov ebp, dword ptr [0x101751a4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa4
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 30h]
        mov dword ptr [esi], 10176bf0h
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x1016beff
        __asm _emit 0x74
        __asm _emit 0x38
        cmp dword ptr [esi + 4], -1
        ; Exact mapped bytes 74 32: je 0x1016beff
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes FF 15 00 6C 17 10: call dword ptr [0x10176c00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x6c
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 4]
        push 1
        push eax
        ; Exact mapped bytes FF 15 AC 51 17 10: call dword ptr [0x101751ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 4]
        push ecx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 2ch]
        push edx
        ; Exact mapped bytes E8 EF 07 00 00: call 0x1016c6e0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 4], 0ffffffffh
        mov dword ptr [esi + 30h], 0
        mov eax, dword ptr [esi + 4]
        cmp eax, -1
        ; Exact mapped bytes 74 0D: je 0x1016bf14
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 2ch]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1016bf14
        __asm _emit 0x74
        __asm _emit 0x06
        push eax
        ; Exact mapped bytes E8 CC 07 00 00: call 0x1016c6e0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 1ch]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x1016bf2b
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 63 08 00 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 1ch], 0
        mov eax, dword ptr [esi + 4]
        cmp eax, -1
        ; Exact mapped bytes 74 1A: je 0x1016bf4d
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [esi + 2ch]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1016bf40
        __asm _emit 0x74
        __asm _emit 0x06
        push eax
        ; Exact mapped bytes E8 A0 07 00 00: call 0x1016c6e0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov dword ptr [esi + 4], 0ffffffffh
        pop esi
        pop ebp
        ret
    }
}
