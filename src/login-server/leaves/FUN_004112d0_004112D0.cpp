// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004112D0 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_004112d0_004112D0() {
    __asm {
        mov eax, dword ptr [ecx + 0c7ch]
        mov dword ptr [ecx], 43d444h
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x4112f5
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [eax + 40h]
        push ecx
        push 0
        push 469h
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 4C C5 43 00: call dword ptr [0x43c54c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ret
    }
}
