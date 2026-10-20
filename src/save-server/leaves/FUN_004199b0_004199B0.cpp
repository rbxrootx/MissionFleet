// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004199B0 .. +0xFC bytes.
extern "C" __declspec(naked) void FUN_004199b0_004199B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 7ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 7ch]
        mov ecx, 1fh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        push 24h
        push 0
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 E6 BE 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2ch], 0
        push 1
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 A1 80 FE FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push -1
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 110h]
        ; Exact mapped bytes E8 4D 7C FE FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes 66 C7 45 C8 00 00: mov word ptr [ebp - 0x38], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 09: jmp 0x419a2c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 3ch]
        add eax, 1
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 34h], -1
        ; Exact mapped bytes 74 54: je 0x419a86
        __asm _emit 0x74
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 16 7C FE FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], -1
        ; Exact mapped bytes 74 33: je 0x419a84
        __asm _emit 0x74
        __asm _emit 0x33
        push 24h
        lea ecx, [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 110h]
        ; Exact mapped bytes E8 9D 7E FE FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x7e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 12: je 0x419a84
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 0C: jne 0x419a84
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 4D C8: mov cx, word ptr [ebp - 0x38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xc8
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D C8: mov word ptr [ebp - 0x38], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc8
        ; Exact mapped bytes EB 9D: jmp 0x419a23
        __asm _emit 0xeb
        __asm _emit 0x9d
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 45 C8: mov ax, word ptr [ebp - 0x38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xc8
        ; Exact mapped bytes 66 89 82 EC 08 00 00: mov word ptr [edx + 0x8ec], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        add esp, 7ch
        cmp ebp, esp
        ; Exact mapped bytes E8 4A B3 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xb3
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
