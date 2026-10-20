// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874D5D0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5874d5d0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5898d20ch
        ; Exact mapped bytes E8 F2 CF FF FF: call 0x5874a5d0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5874d5ee
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 57 F6 22 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf6
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
