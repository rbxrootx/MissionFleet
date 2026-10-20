// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890E5D0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5890e5d0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589a2d3ch
        ; Exact mapped bytes E8 C2 52 FF FF: call 0x589038a0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5890e5ee
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 57 E6 06 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xe6
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
