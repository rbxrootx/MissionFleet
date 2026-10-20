// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C9460 .. +0xF1 bytes.
extern "C" __declspec(naked) void FUN_100c9460_100C9460() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        cmp eax, 1
        push edi
        mov esi, ecx
        ; Exact mapped bytes 74 39: je 0x100c94a6
        __asm _emit 0x74
        __asm _emit 0x39
        cmp eax, 2
        ; Exact mapped bytes 0F 85 D6 00 00 00: jne 0x100c954c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 84h]
        test eax, eax
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x100c951b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 B3 A9 03 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E B0 00 00 00: jle 0x100c9545
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes E8 A0 A9 03 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes E9 93 00 00 00: jmp 0x100c9539
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 80h]
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x100c94e5
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes E8 87 A9 03 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E 84 00 00 00: jle 0x100c9545
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes E8 74 A9 03 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        dec eax
        push eax
        ; Exact mapped bytes E8 87 A9 03 00: call 0x10103e60
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 70 FE FF FF: call 0x100c9350
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 50 A9 03 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        sub edi, eax
        cmp edi, 2
        ; Exact mapped bytes 7E 4E: jle 0x100c9545
        __asm _emit 0x7e
        __asm _emit 0x4e
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes E8 3E A9 03 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        inc eax
        push eax
        ; Exact mapped bytes E8 51 A9 03 00: call 0x10103e60
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 3A FE FF FF: call 0x100c9350
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 1A A9 03 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        sub edi, eax
        cmp edi, 2
        ; Exact mapped bytes 7E 18: jle 0x100c9545
        __asm _emit 0x7e
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes E8 08 A9 03 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        inc eax
        mov ecx, dword ptr [esi + 84h]
        push eax
        ; Exact mapped bytes E8 1B A9 03 00: call 0x10103e60
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 04 FE FF FF: call 0x100c9350
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
