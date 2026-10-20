// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58907CB0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58907cb0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589a2988h
        ; Exact mapped bytes E8 E2 BB FF FF: call 0x589038a0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x58907cce
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 77 4F 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x4f
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
