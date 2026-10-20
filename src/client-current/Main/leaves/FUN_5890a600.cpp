// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890A600 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5890a600() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589a2ac4h
        ; Exact mapped bytes E8 42 02 00 00: call 0x5890a850
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x5890a61e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 27 26 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x26
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
