// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C89F0 .. +0x1D9 bytes.
extern "C" __declspec(naked) void FUN_584c89f0_584C89F0() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff8h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        sub esp, 68h
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 15ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebx + 8]
        push edx
        ; Exact mapped bytes E8 8A B1 01 00: call 0x584e3bc0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 7A 01 00 00: je 0x584c8bc0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 2A 45 F8: cvtsi2sd xmm0, dword ptr [ebp - 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf8
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 C8 85 38 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 30 88 36 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x88
        __asm _emit 0x36
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 15ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 11ah]
        xor eax, 55h
        push eax
        ; Exact mapped bytes E8 53 B9 01 00: call 0x584e43e0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes F3 0F 2A 45 F4: cvtsi2ss xmm0, dword ptr [ebp - 0xc]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes F3 0F 59 43 0C: mulss xmm0, dword ptr [ebx + 0xc]
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x43
        __asm _emit 0x0c
        ; Exact mapped bytes F3 0F 2C C8: cvttss2si ecx, xmm0
        __asm _emit 0xf3
        __asm _emit 0x0f
        __asm _emit 0x2c
        __asm _emit 0xc8
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 A4 36 FC FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x36
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 14ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 184h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 198h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F4 9B 29 00: call 0x587626d0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x9b
        __asm _emit 0x29
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 11ch]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14ch]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 148h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 198h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [ebp - 38h], edx
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 40h], ecx
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 48h], eax
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 50h], edx
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 58h], ecx
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 58h]
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 60h], eax
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 68h], edx
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE 37 FC FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x37
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        push 0
        push 320h
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        push -1
        push 2
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 0
        push 0ch
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebx + 8]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 8C 0F 00: call 0x585c17d0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x8c
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
