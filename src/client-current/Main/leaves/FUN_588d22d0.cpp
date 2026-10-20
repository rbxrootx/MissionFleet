// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D22D0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_588d22d0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589a0f10h
        ; Exact mapped bytes E8 92 D8 FF FF: call 0x588cfb70
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x588d22ee
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 57 A9 0A 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa9
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
