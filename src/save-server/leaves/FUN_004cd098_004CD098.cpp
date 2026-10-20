// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD098 .. +0x13B bytes.
extern "C" __declspec(naked) void FUN_004cd098_004CD098() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4cd0be
        __asm _emit 0x7d
        __asm _emit 0x14
        push 1dfh
        push 6714ach
        ; Exact mapped bytes E8 87 BC 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xbc
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cd0be
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4cd0a4
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 ED 7B 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 7F 14: jg 0x4cd0e5
        __asm _emit 0x7f
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E0 7B 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 0F 8E 97 00 00 00: jle 0x4cd17c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CC 7B 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 98 14 67 00: cmp eax, dword ptr [0x671498]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x14
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 74 1F: je 0x4cd114
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BC 7B 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 7D 12: jge 0x4cd114
        __asm _emit 0x7d
        __asm _emit 0x12
        push 6714e4h
        push 671524h
        ; Exact mapped bytes E8 04 35 FD FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x35
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9D 7B 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 92 7B 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 7D 06: jge 0x4cd13b
        __asm _emit 0x7d
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 72 F4 FF FF: call 0x4cc5b9
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FA C4 F7 FF: call 0x449650
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xc4
        __asm _emit 0xf7
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 9E 81 F9 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 4C 7B 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 86 F5 FF FF: call 0x4cc702
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 35 7B 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 7E 14: jle 0x4cd19d
        __asm _emit 0x7e
        __asm _emit 0x14
        push 1f2h
        push 6714ach
        ; Exact mapped bytes E8 A8 BB 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xbb
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cd19d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4cd17c
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 14: jne 0x4cd1bf
        __asm _emit 0x75
        __asm _emit 0x14
        push 1f5h
        push 6714ach
        ; Exact mapped bytes E8 86 BB 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xbb
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cd1bf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4cd1a3
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 0ch]
        mov eax, dword ptr [eax]
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
