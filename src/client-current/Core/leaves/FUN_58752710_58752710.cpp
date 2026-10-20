// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58752710 .. +0x10D bytes.
extern "C" __declspec(naked) void FUN_58752710_58752710() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2E D0 D5 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd0
        __asm _emit 0xd5
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 29 D5 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0xd5
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 18h], esi
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes F2 0F 2A 45 F4: cvtsi2sd xmm0, dword ptr [ebp - 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf4
        mov eax, dword ptr [ebp - 0ch]
        shr eax, 1fh
        ; Exact mapped bytes F2 0F 58 04 C5 70 4D 89 58: addsd xmm0, qword ptr [eax*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5E 05 D0 51 89 58: divsd xmm0, qword ptr [0x588951d0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 05 E8 4E 8B 58: mulsd xmm0, qword ptr [0x588b4ee8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 2A 4D E8: cvtsi2sd xmm1, dword ptr [ebp - 0x18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x4d
        __asm _emit 0xe8
        ; Exact mapped bytes F2 0F 59 C1: mulsd xmm0, xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc1
        ; Exact mapped bytes F2 0F 5E 05 D8 72 8A 58: divsd xmm0, qword ptr [0x588a72d8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x72
        __asm _emit 0x8a
        __asm _emit 0x58
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 A1 E8 0F 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 09 EB 0D 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xeb
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1E 29 D5 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x29
        __asm _emit 0xd5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 7F: jne 0x58752815
        __asm _emit 0x75
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes F2 0F 2A 45 F0: cvtsi2sd xmm0, dword ptr [ebp - 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf0
        mov ecx, dword ptr [ebp - 10h]
        shr ecx, 1fh
        ; Exact mapped bytes F2 0F 58 04 CD 70 4D 89 58: addsd xmm0, qword ptr [ecx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5E 05 D0 51 89 58: divsd xmm0, qword ptr [0x588951d0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 05 E8 4E 8B 58: mulsd xmm0, qword ptr [0x588b4ee8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x8b
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes F2 0F 11 45 E0: movsd qword ptr [ebp - 0x20], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes E8 7D CF D5 FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xcf
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes F2 0F 2A 45 EC: cvtsi2sd xmm0, dword ptr [ebp - 0x14]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xec
        mov edx, dword ptr [ebp - 14h]
        shr edx, 1fh
        ; Exact mapped bytes F2 0F 58 04 D5 70 4D 89 58: addsd xmm0, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 10 4D E0: movsd xmm1, qword ptr [ebp - 0x20]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xe0
        ; Exact mapped bytes F2 0F 59 C8: mulsd xmm1, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0xc8
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 0C 24: movsd qword ptr [esp], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x0c
        __asm _emit 0x24
        ; Exact mapped bytes E8 20 E8 0F 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 5D D8: fstp qword ptr [ebp - 0x28]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xd8
        ; Exact mapped bytes F2 0F 10 45 D8: movsd xmm0, qword ptr [ebp - 0x28]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xd8
        ; Exact mapped bytes F2 0F 2C C0: cvttsd2si eax, xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc0
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
