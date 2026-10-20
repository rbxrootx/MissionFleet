// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58762630 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_58762630() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 74 54: je 0x5876268f
        __asm _emit 0x74
        __asm _emit 0x54
        push edi
        mov edi, dword ptr [esi + 60h]
        test edi, edi
        ; Exact mapped bytes 74 4B: je 0x5876268e
        __asm _emit 0x74
        __asm _emit 0x4b
        inc dword ptr [esi + 68h]
        mov eax, dword ptr [esi + 68h]
        cmp eax, 0fh
        ; Exact mapped bytes 75 04: jne 0x58762652
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add ecx, 4
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 DD EE FC FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x5876267e
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 66 8B 57 24: mov dx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 0E: je 0x5876267e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [esi + 60h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        shr cl, 1
        test cl, 1
        ; Exact mapped bytes 75 10: jne 0x5876268e
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        mov dword ptr [esi + 60h], 0
        pop edi
        pop esi
        ret
    }
}
