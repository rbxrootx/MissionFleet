// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883E97D .. +0x39C bytes.
extern "C" __declspec(naked) void FUN_5883e97d_5883E97D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push ebx
        mov ebx, dword ptr [ebp + 14h]
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        shr eax, 3
        mov dword ptr [ebp - 4], eax
        test eax, eax
        mov eax, dword ptr [ebp + 10h]
        mov edx, dword ptr [edi]
        mov esi, dword ptr [edi + 4]
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes 0F 84 94 01 00 00: je 0x5883eb3a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edx + 1]
        movzx edx, al
        mov ecx, dword ptr [edi + edx*4 + 8]
        lea eax, [ecx + esi]
        movzx esi, al
        mov eax, dword ptr [edi + esi*4 + 8]
        mov dword ptr [edi + edx*4 + 8], eax
        add eax, ecx
        mov dword ptr [edi + esi*4 + 8], ecx
        mov ecx, dword ptr [ebp + 8]
        movzx eax, al
        mov al, byte ptr [edi + eax*4 + 8]
        xor al, byte ptr [ecx]
        inc ecx
        mov byte ptr [ebx], al
        lea eax, [edx + 1]
        movzx edx, al
        mov dword ptr [ebp + 8], ecx
        mov ecx, dword ptr [edi + edx*4 + 8]
        lea eax, [ecx + esi]
        movzx esi, al
        mov eax, dword ptr [edi + esi*4 + 8]
        mov dword ptr [edi + edx*4 + 8], eax
        add eax, ecx
        mov dword ptr [edi + esi*4 + 8], ecx
        mov ecx, dword ptr [ebp + 8]
        movzx eax, al
        mov al, byte ptr [edi + eax*4 + 8]
        xor al, byte ptr [ecx]
        inc ecx
        mov byte ptr [ebx + 1], al
        lea eax, [edx + 1]
        movzx edx, al
        mov dword ptr [ebp + 8], ecx
        mov ecx, dword ptr [edi + edx*4 + 8]
        lea eax, [ecx + esi]
        movzx esi, al
        mov eax, dword ptr [edi + esi*4 + 8]
        mov dword ptr [edi + edx*4 + 8], eax
        add eax, ecx
        mov dword ptr [edi + esi*4 + 8], ecx
        mov ecx, dword ptr [ebp + 8]
        movzx eax, al
        mov al, byte ptr [edi + eax*4 + 8]
        xor al, byte ptr [ecx]
        inc ecx
        mov byte ptr [ebx + 2], al
        lea eax, [edx + 1]
        movzx edx, al
        mov dword ptr [ebp + 8], ecx
        mov ecx, dword ptr [edi + edx*4 + 8]
        lea eax, [ecx + esi]
        movzx esi, al
        mov eax, dword ptr [edi + esi*4 + 8]
        mov dword ptr [edi + edx*4 + 8], eax
        add eax, ecx
        mov dword ptr [edi + esi*4 + 8], ecx
        mov ecx, dword ptr [ebp + 8]
        movzx eax, al
        mov al, byte ptr [edi + eax*4 + 8]
        xor al, byte ptr [ecx]
        inc ecx
        mov byte ptr [ebx + 3], al
        lea eax, [edx + 1]
        movzx edx, al
        mov dword ptr [ebp + 8], ecx
        mov ecx, dword ptr [edi + edx*4 + 8]
        lea eax, [ecx + esi]
        movzx esi, al
        mov eax, dword ptr [edi + esi*4 + 8]
        mov dword ptr [edi + edx*4 + 8], eax
        add eax, ecx
        mov dword ptr [edi + esi*4 + 8], ecx
        mov ecx, dword ptr [ebp + 8]
        movzx eax, al
        mov al, byte ptr [edi + eax*4 + 8]
        xor al, byte ptr [ecx]
        inc ecx
        mov byte ptr [ebx + 4], al
        lea eax, [edx + 1]
        mov dword ptr [ebp + 8], ecx
        movzx edx, al
        mov ecx, dword ptr [edi + edx*4 + 8]
        lea eax, [ecx + esi]
        movzx esi, al
        mov eax, dword ptr [edi + esi*4 + 8]
        mov dword ptr [edi + edx*4 + 8], eax
        add eax, ecx
        mov dword ptr [edi + esi*4 + 8], ecx
        mov ecx, dword ptr [ebp + 8]
        movzx eax, al
        mov al, byte ptr [edi + eax*4 + 8]
        xor al, byte ptr [ecx]
        inc ecx
        mov byte ptr [ebx + 5], al
        lea eax, [edx + 1]
        movzx edx, al
        mov dword ptr [ebp + 8], ecx
        mov ecx, dword ptr [edi + edx*4 + 8]
        lea eax, [ecx + esi]
        movzx esi, al
        mov eax, dword ptr [edi + esi*4 + 8]
        mov dword ptr [edi + edx*4 + 8], eax
        add eax, ecx
        mov dword ptr [edi + esi*4 + 8], ecx
        mov ecx, dword ptr [ebp + 8]
        movzx eax, al
        mov al, byte ptr [edi + eax*4 + 8]
        xor al, byte ptr [ecx]
        inc ecx
        mov byte ptr [ebx + 6], al
        lea eax, [edx + 1]
        movzx edx, al
        mov dword ptr [ebp + 8], ecx
        mov ecx, dword ptr [edi + edx*4 + 8]
        lea eax, [ecx + esi]
        movzx esi, al
        mov eax, dword ptr [edi + esi*4 + 8]
        mov dword ptr [edi + edx*4 + 8], eax
        add eax, ecx
        mov dword ptr [edi + esi*4 + 8], ecx
        mov ecx, dword ptr [ebp + 8]
        movzx eax, al
        mov al, byte ptr [edi + eax*4 + 8]
        xor al, byte ptr [ecx]
        mov byte ptr [ebx + 7], al
        add ebx, 8
        inc ecx
        sub dword ptr [ebp - 4], 1
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 0F 85 6C FE FF FF: jne 0x5883e9a6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [ebp + 0ch], 7
        ; Exact mapped bytes 0F 84 C9 01 00 00: je 0x5883ed0d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edx + 1]
        movzx edx, al
        mov ecx, dword ptr [edi + edx*4 + 8]
        lea eax, [ecx + esi]
        movzx esi, al
        mov eax, dword ptr [edi + esi*4 + 8]
        mov dword ptr [edi + edx*4 + 8], eax
        add eax, ecx
        mov dword ptr [edi + esi*4 + 8], ecx
        mov ecx, dword ptr [ebp + 8]
        movzx eax, al
        mov al, byte ptr [edi + eax*4 + 8]
        xor al, byte ptr [ecx]
        mov byte ptr [ebx], al
        inc ebx
        ; Exact mapped bytes E9 89 01 00 00: jmp 0x5883ecff
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edx + 1]
        movzx edx, al
        mov ecx, dword ptr [edi + edx*4 + 8]
        lea eax, [ecx + esi]
        movzx esi, al
        mov eax, dword ptr [edi + esi*4 + 8]
        mov dword ptr [edi + edx*4 + 8], eax
        add eax, ecx
        mov dword ptr [edi + esi*4 + 8], ecx
        mov ecx, dword ptr [ebp + 8]
        movzx eax, al
        mov al, byte ptr [edi + eax*4 + 8]
        xor al, byte ptr [ecx]
        inc ecx
        sub dword ptr [ebp + 0ch], 1
        mov byte ptr [ebx], al
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 0F 84 5D 01 00 00: je 0x5883ed0d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edx + 1]
        movzx edx, al
        mov ecx, dword ptr [edi + edx*4 + 8]
        lea eax, [ecx + esi]
        movzx esi, al
        mov eax, dword ptr [edi + esi*4 + 8]
        mov dword ptr [edi + edx*4 + 8], eax
        add eax, ecx
        mov dword ptr [edi + esi*4 + 8], ecx
        mov ecx, dword ptr [ebp + 8]
        movzx eax, al
        mov al, byte ptr [edi + eax*4 + 8]
        xor al, byte ptr [ecx]
        inc ecx
        sub dword ptr [ebp + 0ch], 1
        mov byte ptr [ebx + 1], al
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 0F 84 22 01 00 00: je 0x5883ed0d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edx + 1]
        movzx edx, al
        mov ecx, dword ptr [edi + edx*4 + 8]
        lea eax, [ecx + esi]
        movzx esi, al
        mov eax, dword ptr [edi + esi*4 + 8]
        mov dword ptr [edi + edx*4 + 8], eax
        add eax, ecx
        mov dword ptr [edi + esi*4 + 8], ecx
        mov ecx, dword ptr [ebp + 8]
        movzx eax, al
        mov al, byte ptr [edi + eax*4 + 8]
        xor al, byte ptr [ecx]
        inc ecx
        sub dword ptr [ebp + 0ch], 1
        mov byte ptr [ebx + 2], al
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 0F 84 E7 00 00 00: je 0x5883ed0d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edx + 1]
        movzx edx, al
        mov ecx, dword ptr [edi + edx*4 + 8]
        lea eax, [ecx + esi]
        movzx esi, al
        mov eax, dword ptr [edi + esi*4 + 8]
        mov dword ptr [edi + edx*4 + 8], eax
        add eax, ecx
        mov dword ptr [edi + esi*4 + 8], ecx
        mov ecx, dword ptr [ebp + 8]
        movzx eax, al
        mov al, byte ptr [edi + eax*4 + 8]
        xor al, byte ptr [ecx]
        inc ecx
        sub dword ptr [ebp + 0ch], 1
        mov byte ptr [ebx + 3], al
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 0F 84 AC 00 00 00: je 0x5883ed0d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edx + 1]
        movzx edx, al
        mov ecx, dword ptr [edi + edx*4 + 8]
        lea eax, [ecx + esi]
        movzx esi, al
        mov eax, dword ptr [edi + esi*4 + 8]
        mov dword ptr [edi + edx*4 + 8], eax
        add eax, ecx
        mov dword ptr [edi + esi*4 + 8], ecx
        mov ecx, dword ptr [ebp + 8]
        movzx eax, al
        mov al, byte ptr [edi + eax*4 + 8]
        xor al, byte ptr [ecx]
        inc ecx
        sub dword ptr [ebp + 0ch], 1
        mov byte ptr [ebx + 4], al
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 74 75: je 0x5883ed0d
        __asm _emit 0x74
        __asm _emit 0x75
        lea eax, [edx + 1]
        movzx edx, al
        mov ecx, dword ptr [edi + edx*4 + 8]
        lea eax, [ecx + esi]
        movzx esi, al
        mov eax, dword ptr [edi + esi*4 + 8]
        mov dword ptr [edi + edx*4 + 8], eax
        add eax, ecx
        mov dword ptr [edi + esi*4 + 8], ecx
        mov ecx, dword ptr [ebp + 8]
        movzx eax, al
        mov al, byte ptr [edi + eax*4 + 8]
        xor al, byte ptr [ecx]
        inc ecx
        sub dword ptr [ebp + 0ch], 1
        mov byte ptr [ebx + 5], al
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 74 3E: je 0x5883ed0d
        __asm _emit 0x74
        __asm _emit 0x3e
        lea eax, [edx + 1]
        movzx edx, al
        mov ecx, dword ptr [edi + edx*4 + 8]
        lea eax, [ecx + esi]
        movzx esi, al
        mov eax, dword ptr [edi + esi*4 + 8]
        mov dword ptr [edi + edx*4 + 8], eax
        add eax, ecx
        mov dword ptr [edi + esi*4 + 8], ecx
        mov ecx, dword ptr [ebp + 8]
        movzx eax, al
        mov al, byte ptr [edi + eax*4 + 8]
        xor al, byte ptr [ecx]
        mov byte ptr [ebx + 6], al
        add ebx, 7
        inc ecx
        sub dword ptr [ebp + 0ch], 1
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 0F 85 69 FE FF FF: jne 0x5883eb76
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi + 4], esi
        mov dword ptr [edi], edx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
