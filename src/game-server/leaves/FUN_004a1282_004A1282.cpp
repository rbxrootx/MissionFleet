// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A1282 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_004a1282_004A1282() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes DD 00: fld qword ptr [eax]
        __asm _emit 0xdd
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D C8 7E 58 00: fcomp qword ptr [0x587ec8]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xc8
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 74 12: je 0x4a12ad
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes DD 01: fld qword ptr [ecx]
        __asm _emit 0xdd
        __asm _emit 0x01
        ; Exact mapped bytes DC 1D C0 7E 58 00: fcomp qword ptr [0x587ec0]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xc0
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 74 0A: je 0x4a12b7
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 89 B8 0A 00: call 0x54cb40
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xb8
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
