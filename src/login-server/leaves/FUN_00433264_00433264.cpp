// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00433264 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_00433264_00433264() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov eax, dword ptr [esi + 4]
        cmp eax, -1
        ; Exact mapped bytes 74 0E: je 0x433280
        __asm _emit 0x74
        __asm _emit 0x0e
        push eax
        ; Exact mapped bytes FF 15 58 C2 43 00: call dword ptr [0x43c258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        neg edi
        sbb edi, edi
        inc edi
        or dword ptr [esi + 4], 0ffffffffh
        and dword ptr [esi + 8], 0
        lea ecx, [esi + 0ch]
        ; Exact mapped bytes E8 A6 A8 FF FF: call 0x42db36
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        test edi, edi
        pop edi
        pop esi
        ; Exact mapped bytes 74 0E: je 0x4332a4
        __asm _emit 0x74
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 C0 C1 43 00: call dword ptr [0x43c1c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 CA 04 00 00: call 0x43376e
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ret
    }
}
