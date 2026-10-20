// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A8460 .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_584a8460_584A8460() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        ; Exact mapped bytes F2 0F 2A 45 18: cvtsi2sd xmm0, dword ptr [ebp + 0x18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes F2 0F 5E 05 D0 50 89 58: divsd xmm0, qword ptr [0x588950d0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x50
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 45 F0: movsd qword ptr [ebp - 0x10], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes F2 0F 10 45 F0: movsd xmm0, qword ptr [ebp - 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes F2 0F 59 05 20 52 89 58: mulsd xmm0, qword ptr [0x58895220]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 45 F8: movsd qword ptr [ebp - 8], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes F2 0F 10 45 1C: movsd xmm0, qword ptr [ebp + 0x1c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x1c
        ; Exact mapped bytes 0F 57 05 40 52 89 58: xorps xmm0, xmmword ptr [0x58895240]
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 4D F8: movsd xmm1, qword ptr [ebp - 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes F2 0F 11 0C 24: movsd qword ptr [esp], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x0c
        __asm _emit 0x24
        ; Exact mapped bytes F2 0F 11 45 E8: movsd qword ptr [ebp - 0x18], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes E8 83 8C 3A 00: call 0x58851130
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x8c
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D E0: fstp qword ptr [ebp - 0x20]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xe0
        ; Exact mapped bytes F2 0F 10 45 E8: movsd xmm0, qword ptr [ebp - 0x18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes F2 0F 59 45 E0: mulsd xmm0, qword ptr [ebp - 0x20]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes F2 0F 11 45 C8: movsd qword ptr [ebp - 0x38], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xc8
        ; Exact mapped bytes F2 0F 10 45 1C: movsd xmm0, qword ptr [ebp + 0x1c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x1c
        ; Exact mapped bytes 0F 57 05 40 52 89 58: xorps xmm0, xmmword ptr [0x58895240]
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 4D F8: movsd xmm1, qword ptr [ebp - 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes F2 0F 11 0C 24: movsd qword ptr [esp], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x0c
        __asm _emit 0x24
        ; Exact mapped bytes F2 0F 11 45 D8: movsd qword ptr [ebp - 0x28], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes E8 FB 8B 3A 00: call 0x588510e0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x8b
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D D0: fstp qword ptr [ebp - 0x30]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xd0
        ; Exact mapped bytes F2 0F 10 45 D8: movsd xmm0, qword ptr [ebp - 0x28]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes F2 0F 59 45 D0: mulsd xmm0, qword ptr [ebp - 0x30]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes F2 0F 11 45 C0: movsd qword ptr [ebp - 0x40], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 10 45 08: movsd xmm0, qword ptr [ebp + 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes F2 0F 58 45 C8: addsd xmm0, qword ptr [ebp - 0x38]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x45
        __asm _emit 0xc8
        mov eax, dword ptr [ebp + 24h]
        ; Exact mapped bytes F2 0F 11 00: movsd qword ptr [eax], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 10 45 10: movsd xmm0, qword ptr [ebp + 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes F2 0F 58 45 C0: addsd xmm0, qword ptr [ebp - 0x40]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x45
        __asm _emit 0xc0
        mov ecx, dword ptr [ebp + 28h]
        ; Exact mapped bytes F2 0F 11 01: movsd qword ptr [ecx], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x01
        mov esp, ebp
        pop ebp
        ret
    }
}
