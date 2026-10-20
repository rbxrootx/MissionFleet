// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005112FA .. +0x13A bytes.
extern "C" __declspec(naked) void FUN_005112fa_005112FA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 2bh
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0eh
        ; Exact mapped bytes 0F 87 ED 00 00 00: ja 0x51140c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [eax + 511448h]
        ; Exact mapped bytes FF 24 95 34 14 51 00: jmp dword ptr [edx*4 + 0x511434]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0x14
        __asm _emit 0x51
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 14: je 0x51134b
        __asm _emit 0x74
        __asm _emit 0x14
        push 0c6h
        push 6729d4h
        ; Exact mapped bytes E8 FA 79 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51134b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x511331
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 C0 00 00 00: call dword ptr [edx + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 BE 00 00 00: jmp 0x511426
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 14: je 0x511382
        __asm _emit 0x74
        __asm _emit 0x14
        push 0cah
        push 6729d4h
        ; Exact mapped bytes E8 C3 79 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x511382
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x511368
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x511426
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x5113b9
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ceh
        push 6729d4h
        ; Exact mapped bytes E8 8C 79 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5113b9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x51139f
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 4E: jmp 0x511426
        __asm _emit 0xeb
        __asm _emit 0x4e
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 14: je 0x5113f2
        __asm _emit 0x74
        __asm _emit 0x14
        push 0d2h
        push 6729d4h
        ; Exact mapped bytes E8 53 79 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5113f2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5113d8
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 CC 00 00 00: call dword ptr [edx + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x511426
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 27 FC FF: call 0x4d3bea
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x27
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x51142b
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
