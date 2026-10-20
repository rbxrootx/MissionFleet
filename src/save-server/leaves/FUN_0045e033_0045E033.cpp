// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045E033 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_0045e033_0045E033() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes DD 00: fld qword ptr [eax]
        __asm _emit 0xdd
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D 20 A5 63 00: fcomp qword ptr [0x63a520]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x20
        __asm _emit 0xa5
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 75 12: jne 0x45e05e
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes DD 01: fld qword ptr [ecx]
        __asm _emit 0xdd
        __asm _emit 0x01
        ; Exact mapped bytes DC 1D 18 A5 63 00: fcomp qword ptr [0x63a518]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0xa5
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 0A: jne 0x45e068
        __asm _emit 0x75
        __asm _emit 0x0a
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C D7 0E 00: call 0x54b7b4
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xd7
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
