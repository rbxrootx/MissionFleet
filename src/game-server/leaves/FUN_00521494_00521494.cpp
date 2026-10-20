// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00521494 .. +0x24C bytes.
extern "C" __declspec(naked) void FUN_00521494_00521494() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 0F 85 F9 00 00 00: jne 0x5215a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 EF 38 FD FF: call 0x4f4da1
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x38
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 130h]
        and ecx, 40h
        test ecx, ecx
        ; Exact mapped bytes 0F 85 D8 00 00 00: jne 0x52159e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 1
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 39: jne 0x521513
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 148h
        ; Exact mapped bytes E8 F9 10 01 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7D 26: jge 0x521513
        __asm _emit 0x7d
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0cch
        ; Exact mapped bytes E8 EC F7 FF FF: call 0x520cfa
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB C1: jmp 0x5214d4
        __asm _emit 0xeb
        __asm _emit 0xc1
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x52152d
        __asm _emit 0x75
        __asm _emit 0x14
        push 351h
        push 5cc9cch
        ; Exact mapped bytes E8 D8 34 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52152d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x521513
        __asm _emit 0x75
        __asm _emit 0xe0
        push 585e50h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 50 9B FD FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x9b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x521558
        __asm _emit 0x75
        __asm _emit 0x14
        push 352h
        push 5cc9cch
        ; Exact mapped bytes E8 AD 34 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x521558
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x521533
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 74h], 0
        ; Exact mapped bytes 75 14: jne 0x52157b
        __asm _emit 0x75
        __asm _emit 0x14
        push 353h
        push 5cc9cch
        ; Exact mapped bytes E8 8A 34 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52157b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x52155e
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 74h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 74h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes E9 39 01 00 00: jmp 0x5216d7
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 20 01 00 00: jmp 0x5216c3
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0ah
        ; Exact mapped bytes 0F 82 16 01 00 00: jb 0x5216c3
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 11h
        ; Exact mapped bytes 0F 87 0C 01 00 00: ja 0x5216c3
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E2 37 FD FF: call 0x4f4da1
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x37
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 1
        mov dword ptr [ebp - 0ch], 0
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 39: jne 0x52160c
        __asm _emit 0x75
        __asm _emit 0x39
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 148h
        ; Exact mapped bytes E8 00 10 01 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 7D 26: jge 0x52160c
        __asm _emit 0x7d
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0cch
        ; Exact mapped bytes E8 F3 F6 FF FF: call 0x520cfa
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB C1: jmp 0x5215cd
        __asm _emit 0xeb
        __asm _emit 0xc1
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x521626
        __asm _emit 0x75
        __asm _emit 0x14
        push 362h
        push 5cc9cch
        ; Exact mapped bytes E8 DF 33 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x521626
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x52160c
        __asm _emit 0x75
        __asm _emit 0xe0
        push 585e50h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 57 9A FD FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x9a
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x521651
        __asm _emit 0x75
        __asm _emit 0x14
        push 363h
        push 5cc9cch
        ; Exact mapped bytes E8 B4 33 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x521651
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x52162c
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 75 14: jne 0x521674
        __asm _emit 0x75
        __asm _emit 0x14
        push 364h
        push 5cc9cch
        ; Exact mapped bytes E8 91 33 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x521674
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x521657
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 130h]
        and eax, 40h
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x52169e
        __asm _emit 0x74
        __asm _emit 0x14
        push 367h
        push 5cc9cch
        ; Exact mapped bytes E8 67 33 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52169e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x52167a
        __asm _emit 0x75
        __asm _emit 0xd6
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 74h]
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 74h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes EB 14: jmp 0x5216d7
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D1 D7 00 00: call 0x52eea8
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
