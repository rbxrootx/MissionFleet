// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430840 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_00430840_00430840() {
    __asm {
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x43084b
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx + 1ch]
        test eax, eax
        ; Exact mapped bytes 75 03: jne 0x43084e
        __asm _emit 0x75
        __asm _emit 0x03
        xor eax, eax
        ret
        push esi
        mov esi, eax
        push esi
        ; Exact mapped bytes E8 A4 FF FF FF: call 0x4307fb
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x430860
        __asm _emit 0x74
        __asm _emit 0x05
        mov esi, eax
        push eax
        ; Exact mapped bytes EB F2: jmp 0x430852
        __asm _emit 0xeb
        __asm _emit 0xf2
        push esi
        ; Exact mapped bytes E8 72 EA FF FF: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ret
    }
}
