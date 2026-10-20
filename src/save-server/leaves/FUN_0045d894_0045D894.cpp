// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D894 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_0045d894_0045D894() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes DD 00: fld qword ptr [eax]
        __asm _emit 0xdd
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D F0 A4 63 00: fcomp qword ptr [0x63a4f0]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 74 12: je 0x45d8bf
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes DD 01: fld qword ptr [ecx]
        __asm _emit 0xdd
        __asm _emit 0x01
        ; Exact mapped bytes DC 1D E8 A4 63 00: fcomp qword ptr [0x63a4e8]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 0A: je 0x45d8c9
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E7 DC 0E 00: call 0x54b5b0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xdc
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
