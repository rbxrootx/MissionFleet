// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E9B90 .. +0x1DD bytes.
extern "C" __declspec(naked) void FUN_100e9b90_100E9B90() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 5c40h]
        cmp eax, 4
        ; Exact mapped bytes 0F 8C F1 00 00 00: jl 0x100e9c97
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1fh
        ; Exact mapped bytes 0F 8F E8 00 00 00: jg 0x100e9c97
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 0F 8E AF 01 00 00: jle 0x100e9d67
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1fh
        ; Exact mapped bytes 0F 8D A6 01 00 00: jge 0x100e9d67
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 1008h]
        xor ebx, ebx
        test eax, eax
        ; Exact mapped bytes 0F 8E 96 01 00 00: jle 0x100e9d67
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [edi + 158h]
        mov dword ptr [esp + 10h], eax
        mov ecx, dword ptr [esp + 10h]
        mov esi, dword ptr [ecx]
        test esi, esi
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x100e9c77
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebx + edi + 1f8h]
        test al, al
        ; Exact mapped bytes 74 5C: je 0x100e9c50
        __asm _emit 0x74
        __asm _emit 0x5c
        mov eax, ebx
        mov ecx, ebx
        cdq
        and edx, 7
        add eax, edx
        mov edx, dword ptr [edi + 0e74h]
        sar eax, 3
        and ecx, 80000007h
        ; Exact mapped bytes 79 05: jns 0x100e9c14
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffff8h
        inc ecx
        mov edx, dword ptr [edx + eax*4 + 298h]
        shl ecx, 2
        mov ebp, ecx
        mov ecx, 1ch
        sub ecx, ebp
        shr edx, cl
        mov ecx, dword ptr [esi + 40h]
        and edx, 0fh
        ; Exact mapped bytes 66 8B 84 57 80 3E 00 00: mov ax, word ptr [edi + edx*2 + 0x3e80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x80
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 48: dec ax
        __asm _emit 0x66
        __asm _emit 0x48
        test ecx, ecx
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100e9c47
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 59 53 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 29: je 0x100e9c77
        __asm _emit 0x74
        __asm _emit 0x29
        ; Exact mapped bytes EB 21: jmp 0x100e9c71
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes 66 8B 8F 8E 3E 00 00: mov cx, word ptr [edi + 0x3e8e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x8e
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 41: inc cx
        __asm _emit 0x66
        __asm _emit 0x41
        ; Exact mapped bytes 66 89 4E 26: mov word ptr [esi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100e9c6a
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 36 53 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100e9c77
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 89 52 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [edi + 1008h]
        inc ebx
        add ecx, 4
        cmp ebx, eax
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 0F 8C 4A FF FF FF: jl 0x100e9bdb
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
        mov eax, dword ptr [edi + 1008h]
        xor ebx, ebx
        test eax, eax
        ; Exact mapped bytes 0F 8E C0 00 00 00: jle 0x100e9d67
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [edi + 158h]
        mov dword ptr [esp + 10h], edx
        mov eax, dword ptr [esp + 10h]
        mov esi, dword ptr [eax]
        test esi, esi
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x100e9d4d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [ebx + edi + 1f8h]
        test al, al
        ; Exact mapped bytes 74 23: je 0x100e9ced
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 66 8B 8F 8E 3E 00 00: mov cx, word ptr [edi + 0x3e8e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0x8e
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 41: inc cx
        __asm _emit 0x66
        __asm _emit 0x41
        ; Exact mapped bytes 66 89 4E 26: mov word ptr [esi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100e9ce4
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 BC 52 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 62: je 0x100e9d4d
        __asm _emit 0x74
        __asm _emit 0x62
        ; Exact mapped bytes EB 5A: jmp 0x100e9d47
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov eax, ebx
        mov ecx, ebx
        cdq
        and edx, 7
        add eax, edx
        mov edx, dword ptr [edi + 0e74h]
        sar eax, 3
        and ecx, 80000007h
        ; Exact mapped bytes 79 05: jns 0x100e9d0d
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffff8h
        inc ecx
        mov edx, dword ptr [edx + eax*4 + 298h]
        shl ecx, 2
        mov ebp, ecx
        mov ecx, 1ch
        sub ecx, ebp
        shr edx, cl
        mov ecx, dword ptr [esi + 40h]
        and edx, 0fh
        ; Exact mapped bytes 66 8B 84 57 80 3E 00 00: mov ax, word ptr [edi + edx*2 + 0x3e80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x80
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 48: dec ax
        __asm _emit 0x66
        __asm _emit 0x48
        test ecx, ecx
        ; Exact mapped bytes 66 89 46 26: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        ; Exact mapped bytes 74 06: je 0x100e9d40
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 60 52 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x100e9d4d
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 B3 51 01 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        mov eax, dword ptr [edi + 1008h]
        inc ebx
        add ecx, 4
        cmp ebx, eax
        mov dword ptr [esp + 10h], ecx
        ; Exact mapped bytes 0F 8C 4A FF FF FF: jl 0x100e9cb1
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
