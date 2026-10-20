// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005289D6 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_005289d6_005289D6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 16 64 FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x64
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 50h
        cmp eax, 50h
        ; Exact mapped bytes 74 14: je 0x528a04
        __asm _emit 0x74
        __asm _emit 0x14
        push 0fbh
        push 5c8f88h
        ; Exact mapped bytes E8 01 C0 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x528a04
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x5289e0
        __asm _emit 0x75
        __asm _emit 0xd6
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
