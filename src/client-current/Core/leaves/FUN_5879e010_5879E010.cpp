// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879E010 .. +0x152 bytes.
extern "C" __declspec(naked) void FUN_5879e010_5879E010() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        ; Exact mapped bytes 0F 84 38 01 00 00: je 0x5879e155
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        test cl, 4
        ; Exact mapped bytes 0F 84 2E 01 00 00: je 0x5879e157
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esi + 153h], 3
        ; Exact mapped bytes 75 20: jne 0x5879e052
        __asm _emit 0x75
        __asm _emit 0x20
        movzx eax, word ptr [esi + 144h]
        cmp dword ptr [esi + 148h], eax
        ; Exact mapped bytes 7C 11: jl 0x5879e052
        __asm _emit 0x7c
        __asm _emit 0x11
        push 588b7570h
        push esi
        ; Exact mapped bytes E8 A4 0B 00 00: call 0x5879ebf0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        add esp, 8
        push edi
        mov edi, dword ptr [esp + 10h]
        test edi, edi
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x5879e147
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test dword ptr [edi + 8], 200h
        mov eax, ecx
        ; Exact mapped bytes 74 18: je 0x5879e082
        __asm _emit 0x74
        __asm _emit 0x18
        test ecx, 200h
        ; Exact mapped bytes 75 10: jne 0x5879e082
        __asm _emit 0x75
        __asm _emit 0x10
        lea eax, [edi + 64h]
        push eax
        push esi
        ; Exact mapped bytes E8 54 7C 00 00: call 0x587a5cd0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        add esp, 8
        push ebp
        xor ebp, ebp
        cmp dword ptr [edi + 58h], ebp
        ; Exact mapped bytes 0F 8E 87 00 00 00: jle 0x5879e115
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 60h]
        push ebx
        xor ebx, ebx
        mov eax, dword ptr [ebx + ecx]
        test eax, eax
        ; Exact mapped bytes 7E 2E: jle 0x5879e0c9
        __asm _emit 0x7e
        __asm _emit 0x2e
        push dword ptr [ebx + ecx + 8]
        push dword ptr [ebx + ecx + 18h]
        push dword ptr [ebx + ecx + 14h]
        push dword ptr [ebx + ecx + 4]
        push eax
        push esi
        ; Exact mapped bytes E8 8E 6B 00 00: call 0x587a4c40
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 60h]
        xor eax, eax
        add esp, 18h
        cmp dword ptr [ebx + ecx], -1
        setne al
        add eax, -3
        mov dword ptr [ebx + ecx], eax
        ; Exact mapped bytes EB 3F: jmp 0x5879e108
        __asm _emit 0xeb
        __asm _emit 0x3f
        ; Exact mapped bytes 78 1B: js 0x5879e0e6
        __asm _emit 0x78
        __asm _emit 0x1b
        push eax
        push dword ptr [ebx + ecx + 8]
        push dword ptr [ebx + ecx + 4]
        push esi
        ; Exact mapped bytes E8 56 7F 00 00: call 0x587a6030
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 60h]
        mov dword ptr [ebx + ecx], 0fffffffeh
        ; Exact mapped bytes EB 1F: jmp 0x5879e105
        __asm _emit 0xeb
        __asm _emit 0x1f
        cmp eax, -1
        ; Exact mapped bytes 75 1D: jne 0x5879e108
        __asm _emit 0x75
        __asm _emit 0x1d
        push 0
        push dword ptr [ebx + ecx + 8]
        push dword ptr [ebx + ecx + 4]
        push esi
        ; Exact mapped bytes E8 B5 7A 00 00: call 0x587a5bb0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 60h]
        mov dword ptr [ebx + ecx], 0fffffffdh
        add esp, 10h
        inc ebp
        add ebx, 1ch
        cmp ebp, dword ptr [edi + 58h]
        ; Exact mapped bytes 7C 83: jl 0x5879e094
        __asm _emit 0x7c
        __asm _emit 0x83
        mov eax, dword ptr [esi + 74h]
        pop ebx
        test dword ptr [edi + 8], 10000h
        pop ebp
        ; Exact mapped bytes 74 1C: je 0x5879e13b
        __asm _emit 0x74
        __asm _emit 0x1c
        test eax, 4000h
        ; Exact mapped bytes 75 15: jne 0x5879e13b
        __asm _emit 0x75
        __asm _emit 0x15
        push dword ptr [edi + 0a4h]
        push dword ptr [edi + 0a8h]
        push esi
        ; Exact mapped bytes E8 E8 5D 00 00: call 0x587a3f20
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push edi
        push esi
        ; Exact mapped bytes E8 3C 09 00 00: call 0x5879ea80
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        or dword ptr [esi + 74h], 8
        push esi
        ; Exact mapped bytes E8 0F 51 00 00: call 0x587a3260
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        ret
        push 588b7554h
        push esi
        ; Exact mapped bytes E8 1E 0D 00 00: call 0x5879ee80
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
