// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10104030 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_10104030_10104030() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        mov esi, dword ptr [ecx + 78h]
        test eax, eax
        ; Exact mapped bytes 7E 0C: jle 0x10104048
        __asm _emit 0x7e
        __asm _emit 0x0c
        test esi, esi
        ; Exact mapped bytes 74 4C: je 0x1010408c
        __asm _emit 0x74
        __asm _emit 0x4c
        mov esi, dword ptr [esi + 14h]
        dec eax
        test eax, eax
        ; Exact mapped bytes 7F F4: jg 0x1010403c
        __asm _emit 0x7f
        __asm _emit 0xf4
        test esi, esi
        ; Exact mapped bytes 74 40: je 0x1010408c
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [esi + 4]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x1010405c
        __asm _emit 0x74
        __asm _emit 0x09
        push eax
        ; Exact mapped bytes E8 2B 87 06 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x87
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        push edi
        mov edi, dword ptr [esp + 0ch]
        push edi
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        inc eax
        push eax
        ; Exact mapped bytes E8 31 87 06 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x87
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        push edi
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [esi + 4], eax
        mov eax, dword ptr [esp + 14h]
        cmp eax, 0ff000000h
        pop edi
        ; Exact mapped bytes 74 03: je 0x1010408c
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [esi + 0ch], eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
