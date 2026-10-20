// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58507C80 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_58507c80_58507C80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A1 FC F7 FF: call 0x58487930
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xf7
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 0E: je 0x58507ca5
        __asm _emit 0x74
        __asm _emit 0x0e
        push 14h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 92 93 32 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x93
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
