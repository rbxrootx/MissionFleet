// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00467990 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_00467990_00467990() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 63e568h
        push 46d504h
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
        add esp, -0ch
        push ebx
        push esi
        push edi
        push 9
        ; Exact mapped bytes E8 F6 8E 00 00: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 33 06 00 00: call 0x468000
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 6B: je 0x467a3f
        __asm _emit 0x74
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 20h
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        cmp eax, 4
        ; Exact mapped bytes 74 43: je 0x467a30
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 14h], 1
        ; Exact mapped bytes 74 3A: je 0x467a30
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 14h]
        and eax, 0ffffh
        cmp eax, 2
        ; Exact mapped bytes 74 2A: je 0x467a30
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 14h], 3
        ; Exact mapped bytes 74 21: je 0x467a30
        __asm _emit 0x74
        __asm _emit 0x21
        push 63e514h
        push 0
        push 4ffh
        push 63e240h
        push 2
        ; Exact mapped bytes E8 39 54 00 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x467a30
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 A7: jne 0x4679dd
        __asm _emit 0x75
        __asm _emit 0xa7
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 14h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 02 00 00 00: call 0x467a4d
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0B: jmp 0x467a58
        __asm _emit 0xeb
        __asm _emit 0x0b
    }
}
