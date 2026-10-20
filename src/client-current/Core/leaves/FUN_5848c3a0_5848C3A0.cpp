// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848C3A0 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_5848c3a0_5848C3A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 8]
        ; Exact mapped bytes F3 0F 2A C0: cvtsi2ss xmm0, eax
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        movzx ecx, word ptr [ebp + 8]
        ; Exact mapped bytes F3 0F 2A C9: cvtsi2ss xmm1, ecx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc9
        movzx edx, word ptr [ebp + 0ch]
        ; Exact mapped bytes F3 0F 2A D2: cvtsi2ss xmm2, edx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xd2
        ; Exact mapped bytes F3 0F 5E 15 60 4D 89 58: divss xmm2, dword ptr [0x58894d60]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 59 CA: mulss xmm1, xmm2
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xca
        ; Exact mapped bytes F3 0F 58 C1: addss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 2F 05 64 4D 89 58: comiss xmm0, dword ptr [0x58894d64]
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 76 07: jbe 0x5848c3df
        __asm _emit 0x76
        __asm _emit 0x07
        mov eax, 0fffah
        ; Exact mapped bytes EB 2C: jmp 0x5848c40b
        __asm _emit 0xeb
        __asm _emit 0x2c
        movzx eax, word ptr [ebp + 8]
        ; Exact mapped bytes F3 0F 2A C0: cvtsi2ss xmm0, eax
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        movzx ecx, word ptr [ebp + 8]
        ; Exact mapped bytes F3 0F 2A C9: cvtsi2ss xmm1, ecx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc9
        movzx edx, word ptr [ebp + 0ch]
        ; Exact mapped bytes F3 0F 2A D2: cvtsi2ss xmm2, edx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xd2
        ; Exact mapped bytes F3 0F 5E 15 60 4D 89 58: divss xmm2, dword ptr [0x58894d60]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 59 CA: mulss xmm1, xmm2
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xca
        ; Exact mapped bytes F3 0F 58 C1: addss xmm0, xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 2C C0: cvttss2si eax, xmm0
        __asm _emit 0xf3
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
