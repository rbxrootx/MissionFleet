// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040FCA0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_0040fca0_0040FCA0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 14h]
        mov dword ptr [esi], 43d41ch
        push eax
        ; Exact mapped bytes E8 63 DC 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        mov al, byte ptr [esp + 0ch]
        add esp, 4
        test al, 1
        ; Exact mapped bytes 74 09: je 0x40fcc6
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 52 DC 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
