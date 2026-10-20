// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AC500 .. +0x2C9 bytes.
extern "C" __declspec(naked) void FUN_584ac500_584AC500() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 6ch]
        sub edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 70h]
        sub edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 18h]
        imul eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, dword ptr [ebp - 10h]
        add eax, ecx
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 D2 4A 3A 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x4a
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 3A 4D 38 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x4d
        __asm _emit 0x38
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 08: je 0x584ac567
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 07: jmp 0x584ac56e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 1
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        neg ecx
        ; Exact mapped bytes F3 0F 2A C1: cvtsi2ss xmm0, ecx
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc1
        ; Exact mapped bytes F3 0F 11 45 E4: movss dword ptr [ebp - 0x1c], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes F3 0F 2A 45 EC: cvtsi2ss xmm0, dword ptr [ebp - 0x14]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes F3 0F 10 4D E4: movss xmm1, dword ptr [ebp - 0x1c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes F3 0F 5E C8: divss xmm1, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0xc8
        ; Exact mapped bytes F3 0F 11 4D E4: movss dword ptr [ebp - 0x1c], xmm1
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x4d
        __asm _emit 0xe4
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7C 1E: jl 0x584ac5b9
        __asm _emit 0x7c
        __asm _emit 0x1e
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7E 09: jle 0x584ac5aa
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 4
        ; Exact mapped bytes EB 07: jmp 0x584ac5b1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 1
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB 1C: jmp 0x584ac5d5
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7E 09: jle 0x584ac5c8
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 3
        ; Exact mapped bytes EB 07: jmp 0x584ac5cf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 2
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 34h], ecx
        push ecx
        ; Exact mapped bytes F3 0F 10 45 E4: movss xmm0, dword ptr [ebp - 0x1c]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xe4
        ; Exact mapped bytes F3 0F 11 04 24: movss dword ptr [esp], xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 B5 09 00 00: call 0x584acfa0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes D9 5D A8: fstp dword ptr [ebp - 0x58]
        __asm _emit 0xd9
        __asm _emit 0x5d
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 10 45 A8: movss xmm0, dword ptr [ebp - 0x58]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes F3 0F 59 05 B8 52 89 58: mulss xmm0, dword ptr [0x588952b8]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 59 05 08 52 89 58: mulss xmm0, dword ptr [0x58895208]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x52
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F3 0F 2C D0: cvttss2si edx, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xd0
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7C 21: jl 0x584ac634
        __asm _emit 0x7c
        __asm _emit 0x21
        cmp dword ptr [ebp - 34h], 1
        ; Exact mapped bytes 75 08: jne 0x584ac621
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 0B: jmp 0x584ac62c
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, 708h
        sub ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 2B: jmp 0x584ac65f
        __asm _emit 0xeb
        __asm _emit 0x2b
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 25: jge 0x584ac65f
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp dword ptr [ebp - 34h], 3
        ; Exact mapped bytes 75 0D: jne 0x584ac64d
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, 708h
        sub eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 0C: jmp 0x584ac659
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 0e10h
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 708h
        ; Exact mapped bytes 7E 1A: jle 0x584ac691
        __asm _emit 0x7e
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        neg eax
        mov ecx, dword ptr [ebp - 0ch]
        lea edx, [eax + ecx - 0e10h]
        mov dword ptr [ebp - 40h], edx
        ; Exact mapped bytes EB 2B: jmp 0x584ac6bc
        __asm _emit 0xeb
        __asm _emit 0x2b
        cmp dword ptr [ebp - 8], 0fffff8f8h
        ; Exact mapped bytes 7D 16: jge 0x584ac6b0
        __asm _emit 0x7d
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 0ch]
        add eax, 0e10h
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 06: jmp 0x584ac6b6
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 0cch]
        ; Exact mapped bytes 7E 2A: jle 0x584ac6fa
        __asm _emit 0x7e
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 0cch]
        ; Exact mapped bytes 7C 0E: jl 0x584ac6ec
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0cch]
        mov dword ptr [ebp - 44h], ecx
        ; Exact mapped bytes EB 06: jmp 0x584ac6f2
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 2C: jmp 0x584ac726
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0cch]
        neg edx
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 7F 10: jg 0x584ac71a
        __asm _emit 0x7f
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0cch]
        neg ecx
        mov dword ptr [ebp - 48h], ecx
        ; Exact mapped bytes EB 06: jmp 0x584ac720
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        add eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ach], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ach], 0
        ; Exact mapped bytes 7D 14: jge 0x584ac761
        __asm _emit 0x7d
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        add ecx, 0e10h
        mov dword ptr [ebp - 54h], ecx
        ; Exact mapped bytes EB 35: jmp 0x584ac796
        __asm _emit 0xeb
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ach], 0e10h
        ; Exact mapped bytes 7C 14: jl 0x584ac784
        __asm _emit 0x7c
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        sub ecx, 0e10h
        mov dword ptr [ebp - 50h], ecx
        ; Exact mapped bytes EB 0C: jmp 0x584ac790
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [edx + 0ach], eax
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0ach]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ach], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 58h], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
