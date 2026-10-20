// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874C700 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5874c700() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5898d0dch
        ; Exact mapped bytes E8 C2 DE FF FF: call 0x5874a5d0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5874c71e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 27 05 23 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x05
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
