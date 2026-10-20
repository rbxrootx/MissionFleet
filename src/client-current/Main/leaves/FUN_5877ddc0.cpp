// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877DDC0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5877ddc0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 58996974h
        ; Exact mapped bytes E8 D2 5A 18 00: call 0x589038a0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x5a
        __asm _emit 0x18
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5877ddde
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 67 EE 1F 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xee
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
