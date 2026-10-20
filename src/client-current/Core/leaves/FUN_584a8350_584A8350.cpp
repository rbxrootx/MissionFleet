// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A8350 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_584a8350_584A8350() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 0F: jne 0x584a836d
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 75 07: jne 0x584a836d
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 AF 00 00 00: jmp 0x584a841c
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 2A 45 10: cvtsi2sd xmm0, dword ptr [ebp + 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes F2 0F 2A 4D 08: cvtsi2sd xmm1, dword ptr [ebp + 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes F2 0F 5C C1: subsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 11 45 E4: movsd qword ptr [ebp - 0x1c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes F2 0F 2A 45 14: cvtsi2sd xmm0, dword ptr [ebp + 0x14]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes F2 0F 2A 4D 0C: cvtsi2sd xmm1, dword ptr [ebp + 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes F2 0F 5C C1: subsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5c
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 11 45 EC: movsd qword ptr [ebp - 0x14], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes F2 0F 10 45 EC: movsd xmm0, qword ptr [ebp - 0x14]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 0F 57 05 40 52 89 58: xorps xmm0, xmmword ptr [0x58895240]
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 45 E4: movsd xmm0, qword ptr [ebp - 0x1c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 C7 8C 3A 00: call 0x58851080
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x8c
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes DD 5D F4: fstp qword ptr [ebp - 0xc]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf4
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 2F 45 F4: comisd xmm0, xmmword ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 76 12: jbe 0x584a83db
        __asm _emit 0x76
        __asm _emit 0x12
        ; Exact mapped bytes F2 0F 10 45 F4: movsd xmm0, qword ptr [ebp - 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes F2 0F 58 05 30 52 89 58: addsd xmm0, qword ptr [0x58895230]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 45 F4: movsd qword ptr [ebp - 0xc], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes F2 0F 10 45 F4: movsd xmm0, qword ptr [ebp - 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes F2 0F 59 05 38 52 89 58: mulsd xmm0, qword ptr [0x58895238]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 45 DC: movsd qword ptr [ebp - 0x24], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes F2 0F 10 45 DC: movsd xmm0, qword ptr [ebp - 0x24]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xdc
        ; Exact mapped bytes F2 0F 59 05 D0 50 89 58: mulsd xmm0, qword ptr [0x588950d0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 58 05 28 52 89 58: addsd xmm0, qword ptr [0x58895228]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2C D0: cvttsd2si edx, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0e10h
        ; Exact mapped bytes 7C 07: jl 0x584a8419
        __asm _emit 0x7c
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
