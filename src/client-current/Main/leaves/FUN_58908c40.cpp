// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58908C40 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58908c40() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589a2a14h
        ; Exact mapped bytes E8 52 AC FF FF: call 0x589038a0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x58908c5e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 E7 3F 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x3f
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
