// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AB8C0 .. +0xE3 bytes.
extern "C" __declspec(naked) void FUN_004ab8c0_004AB8C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 63 FF FF FF: call 0x4ab830
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4ab8db
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x4ab99f
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 9
        ; Exact mapped bytes E8 0E 99 00 00: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 20h
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        cmp eax, 4
        ; Exact mapped bytes 74 22: je 0x4ab920
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 1
        ; Exact mapped bytes 74 19: je 0x4ab920
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        cmp eax, 2
        ; Exact mapped bytes 74 09: je 0x4ab920
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 3
        ; Exact mapped bytes 75 73: jne 0x4ab993
        __asm _emit 0x75
        __asm _emit 0x73
        push 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 B1 FE FF FF: call 0x4ab7e0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 5D: je 0x4ab993
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 52: jne 0x4ab993
        __asm _emit 0x75
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        ; Exact mapped bytes 3B 0D B4 12 5D 00: cmp ecx, dword ptr [0x5d12b4]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 7F 44: jg 0x4ab993
        __asm _emit 0x7f
        __asm _emit 0x44
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0B: je 0x4ab960
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [edx], ecx
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 0B: je 0x4ab971
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx], ecx
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 0B: je 0x4ab982
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [edx], ecx
        push 9
        ; Exact mapped bytes E8 07 99 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, 1
        ; Exact mapped bytes EB 0C: jmp 0x4ab99f
        __asm _emit 0xeb
        __asm _emit 0x0c
        push 9
        ; Exact mapped bytes E8 F6 98 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
