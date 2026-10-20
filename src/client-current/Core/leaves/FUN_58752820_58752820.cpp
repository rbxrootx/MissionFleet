// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58752820 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_58752820_58752820() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 8]
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        movzx ecx, word ptr [ebp + 8]
        ; Exact mapped bytes F2 0F 2A C9: cvtsi2sd xmm1, ecx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc9
        movzx edx, word ptr [ebp + 0ch]
        ; Exact mapped bytes F2 0F 2A D2: cvtsi2sd xmm2, edx
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xd2
        ; Exact mapped bytes F2 0F 59 CA: mulsd xmm1, xmm2
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xca
        ; Exact mapped bytes F2 0F 5E 0D D8 51 89 58: divsd xmm1, qword ptr [0x588951d8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 58 C1: addsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 2C C0: cvttsd2si eax, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
