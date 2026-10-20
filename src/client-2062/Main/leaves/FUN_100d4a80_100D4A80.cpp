// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D4A80 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_100d4a80_100D4A80() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push 0
        test eax, eax
        mov eax, dword ptr [ecx]
        push 2
        ; Exact mapped bytes 74 0D: je 0x100d4a9b
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ecx + 98h]
        push edx
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 9ch]
        push edx
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
