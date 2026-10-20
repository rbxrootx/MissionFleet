// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587857E0 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_587857e0_587857E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x587857fb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 14h
        ; Exact mapped bytes 7D 12: jge 0x58785813
        __asm _emit 0x7d
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 60h]
        ; Exact mapped bytes E8 60 00 00 00: call 0x58785870
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DF: jmp 0x587857f2
        __asm _emit 0xeb
        __asm _emit 0xdf
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0c8h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
