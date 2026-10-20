// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005DE00 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_1005de00_1005DE00() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 0d0ch]
        test eax, eax
        ; Exact mapped bytes 74 5B: je 0x1005de68
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, dword ptr [eax + 83ch]
        test ecx, ecx
        ; Exact mapped bytes 74 51: je 0x1005de68
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [eax + 0b4ch]
        mov eax, dword ptr [eax + 904h]
        xor eax, 0aaaaaaaah
        mov ecx, dword ptr [ecx + 64h]
        lea ecx, [ecx + ecx*4]
        lea ecx, [ecx + ecx*4]
        lea edx, [ecx + ecx*4]
        shl edx, 3
        cmp eax, edx
        ; Exact mapped bytes 77 2D: ja 0x1005de68
        __asm _emit 0x77
        __asm _emit 0x2d
        mov ecx, esi
        ; Exact mapped bytes E8 AE 2E 00 00: call 0x10060cf0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 89 0D E0 56 1C 10: mov dword ptr [0x101c56e0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 0d0ch]
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 48h]
        shr eax, 0ah
        push eax
        ; Exact mapped bytes E8 1A F7 FE FF: call 0x1004d580
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        ret
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 7
        ; Exact mapped bytes E8 35 FC FB FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 80h]
        push 0
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop esi
        ret
    }
}
