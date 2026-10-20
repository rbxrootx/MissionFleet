// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F3E40 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_588f3e40() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589a1980h
        ; Exact mapped bytes E8 92 FC 00 00: call 0x58903ae0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x588f3e5e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 E7 8D 08 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
