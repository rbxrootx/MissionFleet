// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CBC10 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_588cbc10() {
    __asm {
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589a0c98h
        ; Exact mapped bytes E8 52 3F 00 00: call 0x588cfb70
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x588cbc2e
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 17 10 0B 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x10
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
