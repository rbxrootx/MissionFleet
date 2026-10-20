// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58876DE0 .. +0x12E bytes.
extern "C" __declspec(naked) void FUN_58876de0_58876DE0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 14h]
        push edi
        mov edi, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x58876e00
        __asm _emit 0x75
        __asm _emit 0x10
        test edi, edi
        ; Exact mapped bytes 75 14: jne 0x58876e08
        __asm _emit 0x75
        __asm _emit 0x14
        cmp dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes 0F 85 F9 00 00 00: jne 0x58876ef6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop ebp
        ret
        test edi, edi
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x58876ef6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        test edx, edx
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x58876ef6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x58876e3b
        __asm _emit 0x74
        __asm _emit 0x20
        test esi, esi
        ; Exact mapped bytes 75 1C: jne 0x58876e3b
        __asm _emit 0x75
        __asm _emit 0x1c
        xor eax, eax
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes E8 46 B6 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 77 A1 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xa1
        __asm _emit 0xfd
        __asm _emit 0xff
        lea eax, [esi + 16h]
        pop esi
        pop edi
        pop ebp
        ret
        push ebx
        mov ecx, edi
        mov ebx, eax
        ; Exact mapped bytes 66 83 39 00: cmp word ptr [ecx], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x00
        ; Exact mapped bytes 74 27: je 0x58876e6d
        __asm _emit 0x74
        __asm _emit 0x27
        add ecx, 2
        sub edx, 1
        ; Exact mapped bytes 75 F2: jne 0x58876e40
        __asm _emit 0x75
        __asm _emit 0xf2
        xor eax, eax
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes E8 17 B6 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 48 A1 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xa1
        __asm _emit 0xfd
        __asm _emit 0xff
        pop ebx
        pop esi
        mov eax, 16h
        pop edi
        pop ebp
        ret
        cmp eax, -1
        ; Exact mapped bytes 75 19: jne 0x58876e8b
        __asm _emit 0x75
        __asm _emit 0x19
        sub esi, ecx
        movzx eax, word ptr [esi + ecx]
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
        ; Exact mapped bytes 74 30: je 0x58876eb4
        __asm _emit 0x74
        __asm _emit 0x30
        sub edx, 1
        ; Exact mapped bytes 75 EB: jne 0x58876e74
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes EB 29: jmp 0x58876eb4
        __asm _emit 0xeb
        __asm _emit 0x29
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x58876eab
        __asm _emit 0x74
        __asm _emit 0x1c
        nop
        movzx eax, word ptr [esi]
        lea esi, [esi + 2]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        add ecx, 2
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 4E: je 0x58876eef
        __asm _emit 0x74
        __asm _emit 0x4e
        sub edx, 1
        ; Exact mapped bytes 74 05: je 0x58876eab
        __asm _emit 0x74
        __asm _emit 0x05
        sub ebx, 1
        ; Exact mapped bytes 75 E5: jne 0x58876e90
        __asm _emit 0x75
        __asm _emit 0xe5
        test ebx, ebx
        ; Exact mapped bytes 75 05: jne 0x58876eb4
        __asm _emit 0x75
        __asm _emit 0x05
        xor eax, eax
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        test edx, edx
        ; Exact mapped bytes 75 37: jne 0x58876eef
        __asm _emit 0x75
        __asm _emit 0x37
        cmp dword ptr [ebp + 14h], -1
        ; Exact mapped bytes 75 12: jne 0x58876ed0
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        pop ebx
        pop esi
        ; Exact mapped bytes 66 89 4C 47 FE: mov word ptr [edi + eax*2 - 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x47
        __asm _emit 0xfe
        lea eax, [edx + 50h]
        pop edi
        pop ebp
        ret
        xor eax, eax
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes E8 95 B5 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 22h
        ; Exact mapped bytes E8 C6 A0 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        pop ebx
        pop esi
        mov eax, 22h
        pop edi
        pop ebp
        ret
        pop ebx
        pop esi
        xor eax, eax
        pop edi
        pop ebp
        ret
        ; Exact mapped bytes E8 74 B5 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 A5 A0 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, 16h
        pop edi
        pop ebp
        ret
    }
}
