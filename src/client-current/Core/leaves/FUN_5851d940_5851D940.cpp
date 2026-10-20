// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851D940 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_5851d940_5851D940() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax - 50h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx - 50h], 588a40d0h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx - 50h]
        mov eax, dword ptr [edx + 4]
        sub eax, 50h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx - 50h]
        mov ecx, dword ptr [edx + 4]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx - 54h], eax
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 4ch
        ; Exact mapped bytes E8 0E 96 FE FF: call 0x58506f90
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x96
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 48h
        ; Exact mapped bytes E8 83 95 FE FF: call 0x58506f10
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
