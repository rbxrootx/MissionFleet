// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DD8B0 .. +0x112 bytes.
extern "C" __declspec(naked) void FUN_100dd8b0_100DD8B0() {
    __asm {
        push ecx
        push edi
        mov edi, ecx
        mov byte ptr [esp + 4], 0
        mov al, byte ptr [edi + 98h]
        test al, al
        ; Exact mapped bytes 0F 86 F6 00 00 00: jbe 0x100dd9bd
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push ebp
        push esi
        mov eax, dword ptr [esp + 18h]
        mov esi, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x100dd8ec
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, esi
        and eax, 0ffh
        mov ecx, dword ptr [edi + eax*4 + 0f9ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 B6 00 00 00: jne 0x100dd9a2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and esi, 0ffh
        ; Exact mapped bytes 66 33 D2: xor dx, dx
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xd2
        mov cl, byte ptr [edi + esi*4 + 69ch]
        mov eax, dword ptr [edi + esi*4 + 0d9ch]
        and cl, 1
        mov dl, cl
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        and ecx, 0fffeh
        or edx, ecx
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ebp, dword ptr [edi + esi*4 + 0d9ch]
        ; Exact mapped bytes 66 8B 94 77 9C 08 00 00: mov dx, word ptr [edi + esi*2 + 0x89c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x77
        __asm _emit 0x9c
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 40h]
        ; Exact mapped bytes 66 89 55 26: mov word ptr [ebp + 0x26], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100dd938
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 68 16 02 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100dd945
        __asm _emit 0x74
        __asm _emit 0x06
        push ebp
        ; Exact mapped bytes E8 BB 15 02 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [edi + esi*4 + 0d9ch]
        push 100h
        ; Exact mapped bytes E8 CA 17 02 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        mov ebp, dword ptr [edi + esi*4 + 9ch]
        test ebp, ebp
        ; Exact mapped bytes 74 17: je 0x100dd978
        __asm _emit 0x74
        __asm _emit 0x17
        mov ebx, dword ptr [edi + esi*4 + 0d9ch]
        mov ecx, ebp
        push ebx
        ; Exact mapped bytes E8 90 15 02 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        push ebx
        mov ecx, ebp
        ; Exact mapped bytes E8 28 16 02 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [edi + esi*8 + 2a0h]
        mov ecx, dword ptr [edi + esi*8 + 29ch]
        push eax
        push ecx
        mov ecx, dword ptr [edi + esi*4 + 0d9ch]
        ; Exact mapped bytes E8 3C 13 02 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [edi + esi*4 + 0d9ch]
        push 0
        ; Exact mapped bytes E8 EE B8 F4 FF: call 0x10029290
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xb8
        __asm _emit 0xf4
        __asm _emit 0xff
        mov al, byte ptr [esp + 10h]
        mov cl, byte ptr [edi + 98h]
        inc al
        cmp al, cl
        mov byte ptr [esp + 10h], al
        ; Exact mapped bytes 0F 82 10 FF FF FF: jb 0x100dd8ca
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        pop ebp
        pop ebx
        pop edi
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
