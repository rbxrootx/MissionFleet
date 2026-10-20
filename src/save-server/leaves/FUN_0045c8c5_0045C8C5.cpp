// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045C8C5 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_0045c8c5_0045C8C5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
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
        ; Exact mapped bytes 75 05: jne 0x45c8e0
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes EB 19: jmp 0x45c8f9
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 E3 14 01 00: call 0x46ddd0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 55 F8: fst qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes DC 65 08: fsub qword ptr [ebp + 8]
        __asm _emit 0xdc
        __asm _emit 0x65
        __asm _emit 0x08
        ; Exact mapped bytes DC 45 F8: fadd qword ptr [ebp - 8]
        __asm _emit 0xdc
        __asm _emit 0x45
        __asm _emit 0xf8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
