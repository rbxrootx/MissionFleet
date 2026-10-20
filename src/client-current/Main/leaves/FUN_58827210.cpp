// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58827210 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_58827210() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        mov eax, dword ptr [ecx + 4]
        cmp eax, 200h
        ; Exact mapped bytes 75 51: jne 0x58827272
        __asm _emit 0x75
        __asm _emit 0x51
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        mov edi, dword ptr [esi + 258h]
        add eax, 4
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 08 A3 F0 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xa3
        __asm _emit 0xf0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x58827255
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 66 8B 4F 24: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 75 0B: jne 0x58827250
        __asm _emit 0x75
        __asm _emit 0x0b
        mov esi, dword ptr [esi + 258h]
        ; Exact mapped bytes 66 83 4E 24 01: or word ptr [esi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x01
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 57 24: mov dx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 F2: je 0x58827250
        __asm _emit 0x74
        __asm _emit 0xf2
        mov esi, dword ptr [esi + 258h]
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 20ah
        ; Exact mapped bytes 75 D8: jne 0x58827251
        __asm _emit 0x75
        __asm _emit 0xd8
        xor eax, eax
        ; Exact mapped bytes 66 39 41 0A: cmp word ptr [ecx + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x0a
        ; Exact mapped bytes 7E 05: jle 0x58827286
        __asm _emit 0x7e
        __asm _emit 0x05
        mov eax, 1
        mov ecx, dword ptr [esi + 258h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 BC: je 0x58827251
        __asm _emit 0x74
        __asm _emit 0xbc
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x588272b6
        __asm _emit 0x74
        __asm _emit 0x1d
        mov al, byte ptr [esi + 26ch]
        test al, al
        ; Exact mapped bytes 76 08: jbe 0x588272ab
        __asm _emit 0x76
        __asm _emit 0x08
        dec al
        mov byte ptr [esi + 26ch], al
        mov ecx, esi
        ; Exact mapped bytes E8 AE FC FF FF: call 0x58826f60
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 83 FD FF FF: call 0x58827040
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
