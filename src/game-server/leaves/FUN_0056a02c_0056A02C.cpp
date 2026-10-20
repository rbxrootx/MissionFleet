// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056A02C .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_0056a02c_0056A02C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 149h
        push 5d053ch
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 15 11 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x11
        __asm _emit 0xf9
        __asm _emit 0xff
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 DC 5D F6 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x5d
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56a06e
        __asm _emit 0x75
        __asm _emit 0x14
        push 14ah
        push 5d053ch
        ; Exact mapped bytes E8 97 A9 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xa9
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56a06e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x56a04b
        __asm _emit 0x75
        __asm _emit 0xd7
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A0 6E FE FF: call 0x550f31
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 25: je 0x56a0bf
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C7 60 00 00: call 0x57016d
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 FD 6E FC FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x6e
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 64 24 5E 00: call dword ptr [0x5e2464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x56a0bd
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 34: jmp 0x56a0f1
        __asm _emit 0xeb
        __asm _emit 0x34
        ; Exact mapped bytes EB C6: jmp 0x56a085
        __asm _emit 0xeb
        __asm _emit 0xc6
        ; Exact mapped bytes 8B 15 78 E8 5D 00: mov edx, dword ptr [0x5de878]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        and edx, 10h
        test edx, edx
        ; Exact mapped bytes 74 23: je 0x56a0ef
        __asm _emit 0x74
        __asm _emit 0x23
        push 5d05a8h
        push 5d05e8h
        ; Exact mapped bytes E8 3A 5B F6 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x5b
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 8]
        push eax
        push 5d05ech
        ; Exact mapped bytes E8 29 5B F6 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x5b
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
