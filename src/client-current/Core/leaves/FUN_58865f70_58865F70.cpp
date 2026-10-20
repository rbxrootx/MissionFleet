// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58865F70 .. +0xFE bytes.
extern "C" __declspec(naked) void FUN_58865f70_58865F70() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 14h]
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push edi
        mov edi, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x58865f94
        __asm _emit 0x75
        __asm _emit 0x0f
        test ebx, ebx
        ; Exact mapped bytes 75 0F: jne 0x58865f98
        __asm _emit 0x75
        __asm _emit 0x0f
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 27: jne 0x58865fb5
        __asm _emit 0x75
        __asm _emit 0x27
        pop edi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        test ebx, ebx
        ; Exact mapped bytes 74 1D: je 0x58865fb5
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 0ch]
        test edx, edx
        ; Exact mapped bytes 74 16: je 0x58865fb5
        __asm _emit 0x74
        __asm _emit 0x16
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x58865fac
        __asm _emit 0x75
        __asm _emit 0x09
        pop edi
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        test edi, edi
        ; Exact mapped bytes 75 20: jne 0x58865fd0
        __asm _emit 0x75
        __asm _emit 0x20
        xor eax, eax
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes E8 B5 C4 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 E6 AF FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        mov eax, 16h
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        sub edi, ebx
        mov ecx, ebx
        push esi
        mov esi, eax
        cmp eax, -1
        ; Exact mapped bytes 75 24: jne 0x58866000
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        movzx eax, word ptr [edi + ecx]
        lea ecx, [ecx + 2]
        ; Exact mapped bytes 66 89 41 FE: mov word ptr [ecx - 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0xfe
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 7E: je 0x5886606e
        __asm _emit 0x74
        __asm _emit 0x7e
        sub edx, 1
        ; Exact mapped bytes 75 EB: jne 0x58865fe0
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes EB 38: jmp 0x5886602f
        __asm _emit 0xeb
        __asm _emit 0x38
        ; Exact mapped bytes 66 0F 1F 84 00 00 00 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [edi + ecx]
        lea ecx, [ecx + 2]
        ; Exact mapped bytes 66 89 41 FE: mov word ptr [ecx - 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0xfe
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 5B: je 0x5886606e
        __asm _emit 0x74
        __asm _emit 0x5b
        sub edx, 1
        ; Exact mapped bytes 74 05: je 0x5886601d
        __asm _emit 0x74
        __asm _emit 0x05
        sub esi, 1
        ; Exact mapped bytes 75 E3: jne 0x58866000
        __asm _emit 0x75
        __asm _emit 0xe3
        mov esi, dword ptr [ebp - 4]
        test edx, edx
        lea eax, [esi - 1]
        cmove eax, esi
        test eax, eax
        ; Exact mapped bytes 75 03: jne 0x5886602f
        __asm _emit 0x75
        __asm _emit 0x03
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        test edx, edx
        ; Exact mapped bytes 75 3B: jne 0x5886606e
        __asm _emit 0x75
        __asm _emit 0x3b
        cmp dword ptr [ebp + 14h], -1
        ; Exact mapped bytes 75 14: jne 0x5886604d
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        pop esi
        pop edi
        ; Exact mapped bytes 66 89 4C 43 FE: mov word ptr [ebx + eax*2 - 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x43
        __asm _emit 0xfe
        lea eax, [edx + 50h]
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        xor eax, eax
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        ; Exact mapped bytes E8 18 C4 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 22h
        ; Exact mapped bytes E8 49 AF FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        pop edi
        mov eax, 22h
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
