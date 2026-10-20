// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588EB2E0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_588eb2e0() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589a14d0h
        ; Exact mapped bytes E8 72 7A 01 00: call 0x58902d60
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x588eb2fe
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 47 19 09 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x19
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
