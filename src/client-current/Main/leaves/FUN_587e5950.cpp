// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E5950 .. +0x10B bytes.
extern "C" __declspec(naked) void FUN_587e5950() {
    __asm {
        mov al, byte ptr [esp + 4]
        push esi
        mov esi, ecx
        test al, al
        ; Exact mapped bytes 0F 84 F8 00 00 00: je 0x587e5a57
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [esi + 1048ch]
        or byte ptr [esi + 10c10h], cl
        push edi
        mov edi, dword ptr [esi + 20c10h]
        and al, 3fh
        lea edx, [edi + 2]
        mov dword ptr [esi + 20c10h], edx
        ; Exact mapped bytes 66 8B 8C 37 10 0C 01 00: mov cx, word ptr [edi + esi + 0x10c10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x37
        __asm _emit 0x10
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F B6 C0: movzx ax, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc0
        mov edx, 0ffc0h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 0B C1: or ax, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc1
        ; Exact mapped bytes 66 89 84 37 10 0C 01 00: mov word ptr [edi + esi + 0x10c10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x10
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        and ecx, 3fh
        and eax, 3fh
        cmp ecx, 0ch
        ; Exact mapped bytes 74 62: je 0x587e5a0b
        __asm _emit 0x74
        __asm _emit 0x62
        cmp ecx, 0fh
        ; Exact mapped bytes 74 27: je 0x587e59d5
        __asm _emit 0x74
        __asm _emit 0x27
        cmp ecx, 16h
        ; Exact mapped bytes 74 0D: je 0x587e59c0
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 66 89 84 37 10 0C 01 00: mov word ptr [edi + esi + 0x10c10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x10
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        or eax, 100h
        ; Exact mapped bytes 66 89 84 37 10 0C 01 00: mov word ptr [edi + esi + 0x10c10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x10
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 20c14h]
        ; Exact mapped bytes EB 13: jmp 0x587e59e8
        __asm _emit 0xeb
        __asm _emit 0x13
        or eax, 100h
        ; Exact mapped bytes 66 89 84 37 10 0C 01 00: mov word ptr [edi + esi + 0x10c10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x10
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 20c98h]
        mov eax, dword ptr [esi + 20c10h]
        mov dword ptr [esi + eax + 10c10h], ecx
        movzx edx, word ptr [edi + esi + 10c10h]
        shr edx, 6
        add dword ptr [esi + 20c10h], edx
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 8E 94 0C 02 00: mov cx, word ptr [esi + 0x20c94]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x94
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E1 06: shl cx, 6
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x06
        ; Exact mapped bytes 66 0B C1: or ax, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc1
        ; Exact mapped bytes 66 89 84 37 10 0C 01 00: mov word ptr [edi + esi + 0x10c10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x10
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi + 20c94h]
        mov ecx, dword ptr [esi + 20c10h]
        push edx
        lea eax, [esi + 20c14h]
        push eax
        lea edx, [esi + ecx + 10c10h]
        push edx
        ; Exact mapped bytes E8 0A 73 19 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x73
        __asm _emit 0x19
        __asm _emit 0x00
        movzx eax, word ptr [edi + esi + 10c10h]
        add esp, 0ch
        shr eax, 6
        add dword ptr [esi + 20c10h], eax
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
