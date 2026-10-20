// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050FCFA .. +0x182 bytes.
extern "C" __declspec(naked) void FUN_0050fcfa_0050FCFA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x50fd20
        __asm _emit 0x75
        __asm _emit 0x14
        push 95h
        push 5c84b0h
        ; Exact mapped bytes E8 E5 4C 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50fd20
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x50fd06
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 7C 06: jl 0x50fd32
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 10h
        ; Exact mapped bytes 7E 14: jle 0x50fd46
        __asm _emit 0x7e
        __asm _emit 0x14
        push 96h
        push 5c84b0h
        ; Exact mapped bytes E8 BF 4C 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50fd46
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x50fd26
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 7C 06: jl 0x50fd58
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp + 10h], 10h
        ; Exact mapped bytes 7E 14: jle 0x50fd6c
        __asm _emit 0x7e
        __asm _emit 0x14
        push 97h
        push 5c84b0h
        ; Exact mapped bytes E8 99 4C 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50fd6c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x50fd4c
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 7F 1A: jg 0x50fd92
        __asm _emit 0x7f
        __asm _emit 0x1a
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 7F 14: jg 0x50fd92
        __asm _emit 0x7f
        __asm _emit 0x14
        push 98h
        push 5c84b0h
        ; Exact mapped bytes E8 73 4C 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50fd92
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x50fd72
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 14h]
        and ecx, 40000000h
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x50fdb9
        __asm _emit 0x75
        __asm _emit 0x14
        push 99h
        push 5c84b0h
        ; Exact mapped bytes E8 4C 4C 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50fdb9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D9: jne 0x50fd98
        __asm _emit 0x75
        __asm _emit 0xd9
        mov eax, dword ptr [ebp + 14h]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x50fddd
        __asm _emit 0x74
        __asm _emit 0x14
        push 9ah
        push 5c84b0h
        ; Exact mapped bytes E8 28 4C 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50fddd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DC: jne 0x50fdbf
        __asm _emit 0x75
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 68h], 0
        ; Exact mapped bytes 75 09: jne 0x50fdf5
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 6ch], 0
        ; Exact mapped bytes 74 14: je 0x50fe09
        __asm _emit 0x74
        __asm _emit 0x14
        push 9ch
        push 5c84b0h
        ; Exact mapped bytes E8 FC 4B 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50fe09
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x50fde3
        __asm _emit 0x75
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 40h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 68h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 44h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 6ch], eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        push 0
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F9 57 02 00: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 16 00 00 00: call 0x50fe7c
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x50fe6e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x50fe73
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
