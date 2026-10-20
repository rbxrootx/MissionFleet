// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878FA30 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_5878fa30_5878FA30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 7F 02: jg 0x5878fa41
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes EB 19: jmp 0x5878fa5a
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 68h]
        ; Exact mapped bytes E8 14 EC FF FF: call 0x5878e660
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B7 0C 00 00: call 0x58790710
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
