// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1003B2F0 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_1003b2f0_1003B2F0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 83 BE A4 02 00 00 01: cmp word ptr [esi + 0x2a4], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 16: jne 0x1003b313
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [esp + 8]
        push 0
        test eax, eax
        push 0
        push 0
        ; Exact mapped bytes 74 04: je 0x1003b30f
        __asm _emit 0x74
        __asm _emit 0x04
        push 1ch
        ; Exact mapped bytes EB 0C: jmp 0x1003b31b
        __asm _emit 0xeb
        __asm _emit 0x0c
        push 9
        ; Exact mapped bytes EB 08: jmp 0x1003b31b
        __asm _emit 0xeb
        __asm _emit 0x08
        push 0
        push 0
        push 0
        push 5
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 8A 27 FE FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x27
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 00 59 1C 10 00 00 00 00: mov dword ptr [0x101c5900], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x59
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 2f8h], 0
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov eax, 0ffffh
        ; Exact mapped bytes 66 89 86 EC 02 00 00: mov word ptr [esi + 0x2ec], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 EA 02 00 00: mov word ptr [esi + 0x2ea], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 E8 02 00 00: mov word ptr [esi + 0x2e8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 E6 02 00 00: mov word ptr [esi + 0x2e6], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 E4 02 00 00: mov word ptr [esi + 0x2e4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 86 E2 02 00 00: mov word ptr [esi + 0x2e2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
