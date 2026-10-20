// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051B3C6 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_0051b3c6_0051B3C6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B6 AE FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xae
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 50h
        cmp eax, 50h
        ; Exact mapped bytes 74 14: je 0x51b3f4
        __asm _emit 0x74
        __asm _emit 0x14
        push 0fbh
        push 6769f8h
        ; Exact mapped bytes E8 51 D9 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51b3f4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x51b3d0
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
