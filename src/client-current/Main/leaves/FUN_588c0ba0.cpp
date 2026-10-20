// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C0BA0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_588c0ba0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589a0aa0h
        ; Exact mapped bytes E8 B2 21 04 00: call 0x58902d60
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x21
        __asm _emit 0x04
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x588c0bbe
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 87 C0 0B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc0
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
