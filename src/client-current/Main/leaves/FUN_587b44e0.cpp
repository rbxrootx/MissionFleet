// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B44E0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_587b44e0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 58999f74h
        ; Exact mapped bytes E8 A2 C0 FF FF: call 0x587b0590
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x587b44fe
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 47 87 1C 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x87
        __asm _emit 0x1c
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
