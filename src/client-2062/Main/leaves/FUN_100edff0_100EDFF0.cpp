// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EDFF0 .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_100edff0_100EDFF0() {
    __asm {
        sub esp, 10h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [esp + 18h], esi
        lea eax, [esi + 0d78h]
        mov dword ptr [esp + 14h], 0
        mov ebp, 9cch
        lea edi, [esi + 0c74h]
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 1ch], 20h
        mov eax, dword ptr [edi - 0b1ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x100ee0d7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + ebp + 328h]
        xor edx, edx
        xor ebx, ebx
        test eax, eax
        ; Exact mapped bytes 74 62: je 0x100ee0a1
        __asm _emit 0x74
        __asm _emit 0x62
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 75 57: jne 0x100ee0a1
        __asm _emit 0x75
        __asm _emit 0x57
        xor eax, eax
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 07: mov ax, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 66 8B 4F 02: mov cx, word ptr [edi + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x02
        xor eax, 0aah
        xor ecx, 0aah
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x100ee082
        __asm _emit 0x74
        __asm _emit 0x1e
        mov esi, dword ptr [esp + 10h]
        mov esi, dword ptr [esi - 4]
        test esi, esi
        ; Exact mapped bytes 74 0F: je 0x100ee07e
        __asm _emit 0x74
        __asm _emit 0x0f
        mov dl, byte ptr [esi + 98h]
        and edx, 0ffh
        imul edx, eax
        mov esi, dword ptr [esp + 18h]
        test ecx, ecx
        ; Exact mapped bytes 74 3F: je 0x100ee0c5
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [esp + 10h]
        mov eax, dword ptr [eax]
        test eax, eax
        ; Exact mapped bytes 74 35: je 0x100ee0c5
        __asm _emit 0x74
        __asm _emit 0x35
        mov bl, byte ptr [eax + 98h]
        and ebx, 0ffh
        imul ebx, ecx
        ; Exact mapped bytes EB 24: jmp 0x100ee0c5
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [esi + ebp + 328h]
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x100ee0c5
        __asm _emit 0x74
        __asm _emit 0x19
        mov al, byte ptr [eax]
        and eax, 0fh
        ; Exact mapped bytes 66 3D 06 00: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 75 0E: jne 0x100ee0c5
        __asm _emit 0x75
        __asm _emit 0x0e
        xor eax, eax
        ; Exact mapped bytes 66 8B 07: mov ax, word ptr [edi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x07
        xor eax, 0aah
        ; Exact mapped bytes 74 02: je 0x100ee0c5
        __asm _emit 0x74
        __asm _emit 0x02
        mov edx, eax
        mov ecx, dword ptr [esp + 14h]
        push ebx
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 E9 05 FB FF: call 0x1009e6c0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 10h]
        inc eax
        add ebp, 4
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [esp + 1ch]
        add edi, 4
        add ecx, 8
        dec eax
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 0F 85 22 FF FF FF: jne 0x100ee022
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret
    }
}
