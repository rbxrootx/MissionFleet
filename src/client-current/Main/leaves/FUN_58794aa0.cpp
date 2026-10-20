// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58794AA0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58794aa0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 58997cech
        ; Exact mapped bytes E8 02 EE 16 00: call 0x589038b0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xee
        __asm _emit 0x16
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x58794abe
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 87 81 1E 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x81
        __asm _emit 0x1e
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
