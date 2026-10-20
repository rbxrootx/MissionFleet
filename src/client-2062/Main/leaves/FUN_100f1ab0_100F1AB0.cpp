// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F1AB0 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_100f1ab0_100F1AB0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 0ch]
        mov eax, ecx
        and eax, 0fh
        sub eax, 0bh
        ; Exact mapped bytes 74 3B: je 0x100f1afc
        __asm _emit 0x74
        __asm _emit 0x3b
        dec eax
        ; Exact mapped bytes 74 18: je 0x100f1adc
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 8]
        lea edx, [eax + ecx*2]
        mov dword ptr [esi + edx*4 + 0a4ch], 0
        ; Exact mapped bytes EB 3E: jmp 0x100f1b1a
        __asm _emit 0xeb
        __asm _emit 0x3e
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 78 36 F3 FF: call 0x10025160
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x36
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 8]
        lea ecx, [ecx + edx*2]
        mov dword ptr [esi + ecx*4 + 0a4ch], eax
        ; Exact mapped bytes EB 1E: jmp 0x100f1b1a
        __asm _emit 0xeb
        __asm _emit 0x1e
        push ecx
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 F8 35 F3 FF: call 0x10025100
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x35
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [esp + 10h]
        mov ecx, dword ptr [esp + 8]
        lea edx, [edx + ecx*2]
        mov dword ptr [esi + edx*4 + 0a4ch], eax
        mov eax, dword ptr [esp + 14h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x100f1b29
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 47 09 00 00: call 0x100f2470
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
