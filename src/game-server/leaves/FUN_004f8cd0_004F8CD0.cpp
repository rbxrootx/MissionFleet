// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F8CD0 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_004f8cd0_004F8CD0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 22: jne 0x4f8d02
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes E8 4E 56 03 00: call 0x52e333
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x4f8d02
        __asm _emit 0x74
        __asm _emit 0x19
        push 5c5e08h
        push 5c5e50h
        ; Exact mapped bytes E8 1D 6F FD FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x6f
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        push 0
        ; Exact mapped bytes E8 13 06 08 00: call 0x579315
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x06
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 90 11 00 00: call 0x4f9e9a
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
