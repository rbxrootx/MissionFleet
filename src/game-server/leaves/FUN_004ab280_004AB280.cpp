// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AB280 .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_004ab280_004AB280() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        push 9
        ; Exact mapped bytes E8 62 9F 00 00: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 96 05 00 00: call 0x4ab830
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 6B: je 0x4ab30c
        __asm _emit 0x74
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 20h
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        cmp eax, 4
        ; Exact mapped bytes 74 43: je 0x4ab2fd
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 1
        ; Exact mapped bytes 74 3A: je 0x4ab2fd
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        cmp eax, 2
        ; Exact mapped bytes 74 2A: je 0x4ab2fd
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 3
        ; Exact mapped bytes 74 21: je 0x4ab2fd
        __asm _emit 0x74
        __asm _emit 0x21
        push 58beb0h
        push 0
        push 4d3h
        push 58bc08h
        push 2
        ; Exact mapped bytes E8 3C 58 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ab2fd
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 A7: jne 0x4ab2aa
        __asm _emit 0x75
        __asm _emit 0xa7
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 14h], ecx
        push 9
        ; Exact mapped bytes E8 7D 9F 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
