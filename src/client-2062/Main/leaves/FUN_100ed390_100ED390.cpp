// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100ED390 .. +0x156 bytes.
extern "C" __declspec(naked) void FUN_100ed390_100ED390() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 374h]
        mov ecx, dword ptr [esi + 0c08h]
        xor eax, 0aaaaaaaah
        xor ecx, 0aaaaaaaah
        cmp eax, ecx
        ; Exact mapped bytes 7D 22: jge 0x100ed3d0
        __asm _emit 0x7d
        __asm _emit 0x22
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x100ed3c6
        __asm _emit 0x74
        __asm _emit 0x14
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        cdq
        idiv ecx
        mov dword ptr [esi + 1030h], eax
        ; Exact mapped bytes EB 0F: jmp 0x100ed3d5
        __asm _emit 0xeb
        __asm _emit 0x0f
        xor eax, eax
        mov dword ptr [esi + 1030h], eax
        ; Exact mapped bytes EB 05: jmp 0x100ed3d5
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 64h
        mov ecx, dword ptr [esi + 218h]
        push eax
        ; Exact mapped bytes E8 7F 55 F5 FF: call 0x10042960
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x55
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [esi + 374h]
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 0F 8F F0 00 00 00: jg 0x100ed4e2
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        mov dword ptr [esi + 374h], 0aaaaaaaah
        ; Exact mapped bytes E8 DD 11 00 00: call 0x100ee5e0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 4], esi
        ; Exact mapped bytes 75 21: jne 0x100ed42f
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 8B 15 1C 57 1C 10: mov edx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edx + 0ach]
        ; Exact mapped bytes E8 31 18 FD FF: call 0x100bec50
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x18
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 20b00h]
        ; Exact mapped bytes E8 91 2E F5 FF: call 0x100402c0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x2e
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 10514h], esi
        ; Exact mapped bytes 75 0D: jne 0x100ed44a
        __asm _emit 0x75
        __asm _emit 0x0d
        push -1
        ; Exact mapped bytes E8 AC D2 F7 FF: call 0x1006a6f0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xd2
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 5c90h]
        test eax, eax
        ; Exact mapped bytes 75 2B: jne 0x100ed47f
        __asm _emit 0x75
        __asm _emit 0x2b
        mov edx, dword ptr [ecx + 20bf8h]
        push 0
        inc edx
        push esi
        mov dword ptr [ecx + 20bf8h], edx
        mov dword ptr [esi + 5c90h], 40040000h
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 B7 E0 F7 FF: call 0x1006b530
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xe0
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esp + 8]
        test eax, eax
        ; Exact mapped bytes 74 5B: je 0x100ed4e2
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, dword ptr [esi + 0e74h]
        xor edx, edx
        mov dl, byte ptr [esi + 330h]
        push edx
        mov edx, dword ptr [eax + 4ch]
        neg edx
        push edx
        ; Exact mapped bytes E8 CF 48 F8 FF: call 0x10071d70
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x48
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 21a34h]
        test ecx, ecx
        ; Exact mapped bytes 75 32: jne 0x100ed4e2
        __asm _emit 0x75
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        mov edx, dword ptr [ecx + 4]
        mov cl, byte ptr [esi + 330h]
        mov bl, byte ptr [edx + 330h]
        cmp cl, bl
        pop ebx
        ; Exact mapped bytes 74 17: je 0x100ed4e2
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [esi + 0e74h]
        mov ecx, dword ptr [edx + 4ch]
        mov edx, dword ptr [eax + 108b8h]
        sub edx, ecx
        mov dword ptr [eax + 108b8h], edx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
