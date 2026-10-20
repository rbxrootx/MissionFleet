// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F7B20 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_588f7b20() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589a2094h
        ; Exact mapped bytes E8 C2 5D 00 00: call 0x588fd8f0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x588f7b3e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 07 51 08 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x51
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
