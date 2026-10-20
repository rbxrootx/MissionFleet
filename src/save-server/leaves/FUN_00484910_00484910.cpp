// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00484910 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_00484910_00484910() {
    __asm {
        mov eax, dword ptr [esp + 8]
        sub esp, 108h
        push ebx
        cmp byte ptr [eax], 0
        push esi
        push edi
        lea esi, [esp + 14h]
        ; Exact mapped bytes 74 4B: je 0x484971
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 3D 38 BC 68 00: mov edi, dword ptr [0x68bc38]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        xor ebx, ebx
        mov cl, byte ptr [eax]
        cmp cl, 26h
        ; Exact mapped bytes 75 07: jne 0x48493c
        __asm _emit 0x75
        __asm _emit 0x07
        inc eax
        cmp byte ptr [eax], bl
        ; Exact mapped bytes 75 2D: jne 0x484967
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes EB 35: jmp 0x484971
        __asm _emit 0xeb
        __asm _emit 0x35
        ; Exact mapped bytes 38 1D 45 9B 68 00: cmp byte ptr [0x689b45], bl
        __asm _emit 0x38
        __asm _emit 0x1d
        __asm _emit 0x45
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 74 23: je 0x484967
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 3A 0D 44 9B 68 00: cmp cl, byte ptr [0x689b44]
        __asm _emit 0x3a
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x484953
        __asm _emit 0x75
        __asm _emit 0x07
        inc eax
        cmp byte ptr [eax], bl
        ; Exact mapped bytes 75 16: jne 0x484967
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes EB 1E: jmp 0x484971
        __asm _emit 0xeb
        __asm _emit 0x1e
        cmp cl, 1eh
        ; Exact mapped bytes 74 05: je 0x48495d
        __asm _emit 0x74
        __asm _emit 0x05
        cmp cl, 1fh
        ; Exact mapped bytes 75 0A: jne 0x484967
        __asm _emit 0x75
        __asm _emit 0x0a
        inc eax
        cmp byte ptr [eax], bl
        ; Exact mapped bytes 74 0F: je 0x484971
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes EB 06: jmp 0x48496d
        __asm _emit 0xeb
        __asm _emit 0x06
        mov cl, byte ptr [eax]
        inc eax
        mov byte ptr [esi], cl
        inc esi
        cmp byte ptr [eax], bl
        ; Exact mapped bytes 75 BD: jne 0x48492e
        __asm _emit 0x75
        __asm _emit 0xbd
        lea eax, [esp + 0ch]
        lea ecx, [esp + 14h]
        push eax
        mov byte ptr [esi], 0
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [esp + 18h]
        push eax
        mov eax, dword ptr [esp + 120h]
        push ecx
        push eax
        ; Exact mapped bytes FF 15 C0 B6 68 00: call dword ptr [0x68b6c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        mov eax, dword ptr [esp + 120h]
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [esp + 124h]
        pop edi
        pop esi
        pop ebx
        mov dword ptr [ecx], edx
        add esp, 108h
        ret
    }
}
