// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58519900 .. +0x11E bytes.
extern "C" __declspec(naked) void FUN_58519900_58519900() {
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
        sub esp, 30h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebx + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebx + 8]
        push edx
        ; Exact mapped bytes E8 89 A2 FC FF: call 0x584e3bc0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xa2
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 8], eax
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
        ; Exact mapped bytes E8 D1 76 33 00: call 0x58851020
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x76
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 39 79 31 00: call 0x58831290
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x79
        __asm _emit 0x31
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        push edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 6eh]
        push ecx
        ; Exact mapped bytes E8 6E AA FC FF: call 0x584e43e0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xaa
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 8E 93 00 00 00: jle 0x58519a15
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        movzx ecx, word ptr [eax + 0ach]
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 B6 27 F7 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x27
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 30h], ecx
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 29 F7 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x29
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 64h
        push 1
        mov eax, dword ptr [ebp - 8]
        push eax
        push 0
        push 320h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push -1
        push 2
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 0
        push 0ch
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 0
        mov ecx, dword ptr [ebx + 8]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC 7D 0A 00: call 0x585c17d0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x7d
        __asm _emit 0x0a
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
