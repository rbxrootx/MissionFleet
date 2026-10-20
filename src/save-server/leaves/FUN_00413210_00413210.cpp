// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413210 .. +0x14F bytes.
extern "C" __declspec(naked) void FUN_00413210_00413210() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58af66h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 5ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 68h]
        mov ecx, 17h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 F4 00 00 00: je 0x413340
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ch], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 5C: jne 0x4132c0
        __asm _emit 0x75
        __asm _emit 0x5c
        push 10h
        ; Exact mapped bytes E8 F5 91 0B 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x91
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 11: je 0x41328f
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AD E2 FE FF: call 0x401537
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x413296
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x413342
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        ; Exact mapped bytes E8 99 91 0B 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x91
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 11: je 0x4132eb
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 51 E2 FE FF: call 0x401537
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x4132f2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 C6 E5 FE FF: call 0x4018d4
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 14 E5 FE FF: call 0x401834
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9F DF FE FF: call 0x4012c6
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 02 E5 FE FF: call 0x401834
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes EB 02: jmp 0x413342
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 68h
        cmp ebp, esp
        ; Exact mapped bytes E8 97 1A 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
