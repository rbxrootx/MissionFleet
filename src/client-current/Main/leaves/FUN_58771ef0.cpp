// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58771EF0 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_58771ef0() {
    __asm {
        push esi
        push edi
        ; Exact mapped bytes E8 D9 19 00 00: call 0x587738d0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        mov ecx, eax
        ; Exact mapped bytes E8 70 04 00 00: call 0x58772370
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 0ch]
        mov edx, eax
        mov esi, 100h
        mov ecx, edi
        sub edx, edi
        nop
        lea eax, [esi + 7ffffefeh]
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x58771f37
        __asm _emit 0x74
        __asm _emit 0x1d
        mov al, byte ptr [edx + ecx]
        test al, al
        ; Exact mapped bytes 74 16: je 0x58771f37
        __asm _emit 0x74
        __asm _emit 0x16
        mov byte ptr [ecx], al
        inc ecx
        sub esi, 1
        ; Exact mapped bytes 75 E7: jne 0x58771f10
        __asm _emit 0x75
        __asm _emit 0xe7
        dec ecx
        push edi
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        pop edi
        pop esi
        ret
        test esi, esi
        ; Exact mapped bytes 75 01: jne 0x58771f3c
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        push edi
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        pop edi
        pop esi
        ret
    }
}
