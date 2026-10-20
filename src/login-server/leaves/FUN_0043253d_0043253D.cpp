// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043253D .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_0043253d_0043253D() {
    __asm {
        push esi
        mov esi, ecx
        xor eax, eax
        push edi
        push eax
        lea edi, [esi + 30h]
        push eax
        push eax
        push edi
        ; Exact mapped bytes FF 15 D0 C3 43 00: call dword ptr [0x43c3d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x43257a
        __asm _emit 0x74
        __asm _emit 0x26
        cmp dword ptr [esi + 34h], 36ah
        ; Exact mapped bytes 74 1A: je 0x432577
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [esi]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x432577
        __asm _emit 0x75
        __asm _emit 0x0e
        push edi
        ; Exact mapped bytes FF 15 D4 C3 43 00: call dword ptr [0x43c3d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes FF 15 08 C4 43 00: call dword ptr [0x43c408]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        push 1
        pop eax
        pop edi
        pop esi
        ret
    }
}
