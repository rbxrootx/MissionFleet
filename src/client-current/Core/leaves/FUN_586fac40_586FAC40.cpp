// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586FAC40 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_586fac40_586FAC40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 17: jne 0x586fac64
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes 75 0C: jne 0x586fac64
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 17 13 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x17
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
