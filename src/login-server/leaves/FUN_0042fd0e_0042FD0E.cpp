// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042FD0E .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_0042fd0e_0042FD0E() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, ecx
        mov ecx, dword ptr [ebp + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x42fd2d
        __asm _emit 0x74
        __asm _emit 0x12
        lea eax, [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 ED 0C 00 00: call 0x430a11
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x42fd2d
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes EB 07: jmp 0x42fd34
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 0B F5 FF FF: call 0x42f23f
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
