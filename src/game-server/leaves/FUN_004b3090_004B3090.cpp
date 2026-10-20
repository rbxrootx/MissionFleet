// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B3090 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_004b3090_004B3090() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], 80000000h
        mov dword ptr [ebp - 14h], 4147ffffh
        mov dword ptr [ebp - 8], 0c0000000h
        mov dword ptr [ebp - 4], 4150017eh
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes DC 75 E8: fdiv qword ptr [ebp - 0x18]
        __asm _emit 0xdc
        __asm _emit 0x75
        __asm _emit 0xe8
        ; Exact mapped bytes DC 4D E8: fmul qword ptr [ebp - 0x18]
        __asm _emit 0xdc
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes DC 6D F8: fsubr qword ptr [ebp - 8]
        __asm _emit 0xdc
        __asm _emit 0x6d
        __asm _emit 0xf8
        ; Exact mapped bytes DD 5D F0: fstp qword ptr [ebp - 0x10]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf0
        ; Exact mapped bytes DD 45 F0: fld qword ptr [ebp - 0x10]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes DC 1D 88 C6 58 00: fcomp qword ptr [0x58c688]
        __asm _emit 0xdc
        __asm _emit 0x1d
        __asm _emit 0x88
        __asm _emit 0xc6
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 41h
        ; Exact mapped bytes 75 09: jne 0x4b30dd
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 07: jmp 0x4b30e4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
