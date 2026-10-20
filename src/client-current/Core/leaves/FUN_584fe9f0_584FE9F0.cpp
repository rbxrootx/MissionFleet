// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FE9F0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_584fe9f0_584FE9F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + eax*4 + 0b50h], edx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 09: je 0x584fea16
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6B 16 25 00: call 0x58750080
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x16
        __asm _emit 0x25
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
