// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00476DC0 .. +0x2D bytes.
extern "C" __declspec(naked) void __positive_00476DC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes DD 00: fld qword ptr [eax]
        __asm _emit 0xdd
        __asm _emit 0x00
        ; Exact mapped bytes DC 1D E0 A4 63 00: fcomp qword ptr [0x63a4e0]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0xe0
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 1
        ; Exact mapped bytes 75 09: jne 0x476ddf
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x476de6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
