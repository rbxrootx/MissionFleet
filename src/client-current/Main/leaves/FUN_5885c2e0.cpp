// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885C2E0 .. +0x211 bytes.
extern "C" __declspec(naked) void FUN_5885c2e0() {
    __asm {
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        sub esp, 8
        push ebp
        mov ebp, dword ptr [eax + 4]
        push edi
        mov edi, ecx
        test ebp, ebp
        ; Exact mapped bytes 0F 84 F4 01 00 00: je 0x5885c4eb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 340h]
        cmp ecx, dword ptr [edi + 98h]
        ; Exact mapped bytes 0F 85 E2 01 00 00: jne 0x5885c4eb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0a8h]
        xor edx, edx
        ; Exact mapped bytes 66 39 97 A4 00 00 00: cmp word ptr [edi + 0xa4], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x97
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sete dl
        movzx eax, dx
        ; Exact mapped bytes 66 89 87 A4 00 00 00: mov word ptr [edi + 0xa4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, ax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edi + 0b4h]
        push edx
        ; Exact mapped bytes E8 53 B6 0A 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xb6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0b4h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 0
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp + 100ch]
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        mov ecx, 7c00h
        ; Exact mapped bytes 66 23 D1: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd1
        xor eax, eax
        xor ecx, ecx
        mov byte ptr [esp + 0bh], 0
        mov dword ptr [esp + 0ch], eax
        ; Exact mapped bytes 66 3B CA: cmp cx, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xca
        ; Exact mapped bytes 0F 83 77 01 00 00: jae 0x5885c4eb
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        push esi
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        movzx esi, ax
        mov eax, dword ptr [ebp + esi*4 + 0e8ch]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5885c397
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 66 0F B6 10: movzx dx, byte ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x10
        movzx eax, dx
        ; Exact mapped bytes EB 02: jmp 0x5885c399
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 66 0F B6 94 2E FC 01 00 00: movzx dx, byte ptr [esi + ebp + 0x1fc]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x94
        __asm _emit 0x2e
        __asm _emit 0xfc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, dx
        ; Exact mapped bytes 66 83 F8 05: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 16 01 00 00: jne 0x5885c4c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ebx, dx
        cmp ebx, dword ptr [edi + 98h]
        ; Exact mapped bytes 0F 85 07 01 00 00: jne 0x5885c4c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [esi + ebp + 21ch]
        cmp eax, dword ptr [edi + 9ch]
        ; Exact mapped bytes 0F 85 F3 00 00 00: jne 0x5885c4c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [edi + 0a4h]
        mov eax, dword ptr [ecx + 20c9ch]
        mov ecx, dword ptr [eax + esi*4 + 8]
        push edx
        ; Exact mapped bytes E8 B7 5E F5 FF: call 0x587b22a0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x5e
        __asm _emit 0xf5
        __asm _emit 0xff
        movzx ecx, word ptr [edi + 0a4h]
        push ecx
        mov ecx, dword ptr [ebp + esi*4 + 240h]
        ; Exact mapped bytes E8 A3 5E F5 FF: call 0x587b22a0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x5e
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + esi*4 + 240h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 34h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp byte ptr [ecx + 74h], 1
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x5885c4c5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BF A4 00 00 00 00: cmp word ptr [edi + 0xa4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x5885c436
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ecx + 20c9ch]
        mov eax, dword ptr [edx + esi*4 + 8]
        add eax, 270h
        ; Exact mapped bytes EB 0F: jmp 0x5885c445
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ecx + 20c9ch]
        mov eax, dword ptr [eax + esi*4 + 8]
        add eax, 324h
        mov dl, byte ptr [eax + 9bh]
        and dl, 0fh
        lea eax, [ebx + 9b0h]
        cmp dl, 1
        lea edx, [eax*8]
        ; Exact mapped bytes 75 09: jne 0x5885c469
        __asm _emit 0x75
        __asm _emit 0x09
        sub edx, eax
        mov eax, 2
        ; Exact mapped bytes EB 07: jmp 0x5885c470
        __asm _emit 0xeb
        __asm _emit 0x07
        sub edx, eax
        mov eax, 1
        cmp byte ptr [esp + 13h], 0
        ; Exact mapped bytes 66 89 04 D1: mov word ptr [ecx + edx*8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0xd1
        ; Exact mapped bytes 75 44: jne 0x5885c4bf
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 20c9ch]
        mov eax, dword ptr [edx + esi*4 + 8]
        cmp dword ptr [eax + 243ech], 2
        ; Exact mapped bytes 75 31: jne 0x5885c4c5
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes 66 83 BF A4 00 00 00 00: cmp word ptr [edi + 0xa4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbf
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x5885c4a7
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 14h]
        push 0
        push ecx
        ; Exact mapped bytes EB 07: jmp 0x5885c4ae
        __asm _emit 0xeb
        __asm _emit 0x07
        mov edx, dword ptr [esp + 14h]
        push 1
        push edx
        ; Exact mapped bytes E8 FD F7 F8 FF: call 0x587ebcb0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf7
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        cmp eax, 1
        ; Exact mapped bytes 75 04: jne 0x5885c4bf
        __asm _emit 0x75
        __asm _emit 0x04
        mov byte ptr [esp + 13h], al
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 100ch]
        ; Exact mapped bytes 66 8B 52 0C: mov dx, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x0c
        mov eax, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 C1 EA 0A: shr dx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0a
        inc eax
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 0F 82 97 FE FF FF: jb 0x5885c380
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        pop ebx
        pop edi
        pop ebp
        add esp, 8
        ret
    }
}
