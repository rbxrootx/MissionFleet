// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F20A .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_0042f20a_0042F20A() {
    __asm {
        push esi
        push 435d3bh
        mov ecx, 44dcc0h
        ; Exact mapped bytes E8 99 7B 00 00: call 0x436db3
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes FF 15 68 C4 43 00: call dword ptr [0x43c468]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [esi + 44h], eax
        ; Exact mapped bytes FF 15 6C C4 43 00: call dword ptr [0x43c46c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF C8: movsx ecx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc8
        shr eax, 10h
        ; Exact mapped bytes 0F BF C0: movsx eax, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xc0
        mov dword ptr [esi + 48h], ecx
        mov dword ptr [esi + 4ch], eax
        lea eax, [esi + 34h]
        pop esi
        ret
    }
}
