// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874CE80 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5874ce80() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 5898d194h
        ; Exact mapped bytes E8 42 D7 FF FF: call 0x5874a5d0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5874ce9e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 A7 FD 22 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
