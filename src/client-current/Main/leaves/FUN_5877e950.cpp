// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877E950 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5877e950() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589969ech
        ; Exact mapped bytes E8 52 4F 18 00: call 0x589038b0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x4f
        __asm _emit 0x18
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5877e96e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 D7 E2 1F 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xe2
        __asm _emit 0x1f
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
