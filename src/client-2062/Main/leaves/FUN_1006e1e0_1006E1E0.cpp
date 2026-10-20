// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006E1E0 .. +0xEE bytes.
extern "C" __declspec(naked) void FUN_1006e1e0_1006E1E0() {
    __asm {
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 104e0h]
        mov ecx, edi
        ; Exact mapped bytes E8 6E 0E 09 00: call 0x100ff060
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x0e
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 B7 0E 09 00: call 0x100ff0b0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x0e
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 21704h]
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 5D: je 0x1006e262
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [esi + 215fch]
        push ebx
        xor ebx, ebx
        cmp eax, ebp
        ; Exact mapped bytes 7E 3A: jle 0x1006e24c
        __asm _emit 0x7e
        __asm _emit 0x3a
        xor edi, edi
        mov eax, dword ptr [esi + 21704h]
        mov eax, dword ptr [eax + edi + 0cch]
        cmp eax, ebp
        ; Exact mapped bytes 74 16: je 0x1006e23b
        __asm _emit 0x74
        __asm _emit 0x16
        push eax
        ; Exact mapped bytes E8 59 E5 0F 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xe5
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 21704h]
        add esp, 4
        mov dword ptr [ecx + edi + 0cch], ebp
        mov eax, dword ptr [esi + 215fch]
        inc ebx
        add edi, 0d4h
        cmp ebx, eax
        ; Exact mapped bytes 7C C8: jl 0x1006e214
        __asm _emit 0x7c
        __asm _emit 0xc8
        mov edx, dword ptr [esi + 21704h]
        push edx
        ; Exact mapped bytes E8 2C E5 0F 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xe5
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 21704h], ebp
        pop ebx
        mov eax, dword ptr [esi + 21708h]
        cmp eax, ebp
        ; Exact mapped bytes 74 0F: je 0x1006e27b
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 12 E5 0F 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe5
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 21708h], ebp
        mov eax, dword ptr [esi + 104d0h]
        mov ecx, dword ptr [eax + 3ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 37: je 0x1006e2bf
        __asm _emit 0x74
        __asm _emit 0x37
        mov edx, dword ptr [esi + 104d0h]
        mov edi, dword ptr [ecx + 38h]
        cmp edi, dword ptr [edx + 3ch]
        ; Exact mapped bytes 74 1F: je 0x1006e2b5
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x1006e2a0
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp edi, ebp
        mov ecx, edi
        ; Exact mapped bytes 75 E2: jne 0x1006e288
        __asm _emit 0x75
        __asm _emit 0xe2
        mov ecx, dword ptr [esi + 104e0h]
        ; Exact mapped bytes E8 AF 05 FE FF: call 0x1004e860
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        ret
        cmp ecx, ebp
        ; Exact mapped bytes 74 06: je 0x1006e2bf
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov ecx, dword ptr [esi + 104e0h]
        ; Exact mapped bytes E8 96 05 FE FF: call 0x1004e860
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        ret
    }
}
