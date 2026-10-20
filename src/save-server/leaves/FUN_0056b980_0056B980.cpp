// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056B980 .. +0x145 bytes.
extern "C" __declspec(naked) void FUN_0056b980_0056B980() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0e4h], 0
        ; Exact mapped bytes 75 2B: jne 0x56b9c3
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 100h], 0
        ; Exact mapped bytes 74 14: je 0x56b9b8
        __asm _emit 0x74
        __asm _emit 0x14
        push 259h
        push 67d38ch
        ; Exact mapped bytes E8 8D D3 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xd3
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56b9b8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x56b998
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes E9 FB 00 00 00: jmp 0x56babe
        __asm _emit 0xe9
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 14 01 00 00: call dword ptr [edx + 0x114]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x56b9df
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 DF 00 00 00: jmp 0x56babe
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0e4h]
        push edx
        ; Exact mapped bytes E8 62 0A FE FF: call 0x54c456
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x0a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0d4h], 0
        ; Exact mapped bytes 75 14: jne 0x56ba14
        __asm _emit 0x75
        __asm _emit 0x14
        push 266h
        push 67d38ch
        ; Exact mapped bytes E8 31 D3 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xd3
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56ba14
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x56b9f4
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0e4h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0d4h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0d4h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 2C: call dword ptr [eax + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x2c
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x56ba54
        __asm _emit 0x74
        __asm _emit 0x14
        push 267h
        push 67d38ch
        ; Exact mapped bytes E8 F1 D2 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xd2
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56ba54
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C0: jne 0x56ba1a
        __asm _emit 0x75
        __asm _emit 0xc0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0e4h]
        push eax
        ; Exact mapped bytes FF 15 5C BC 68 00: call dword ptr [0x68bc5c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0e4h], 0
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 100h], 0
        ; Exact mapped bytes 74 3B: je 0x56babe
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 100h]
        push ecx
        ; Exact mapped bytes FF 15 8C C2 68 00: call dword ptr [0x68c28c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x56baab
        __asm _emit 0x74
        __asm _emit 0x14
        push 26fh
        push 67d38ch
        ; Exact mapped bytes E8 9A D2 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xd2
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56baab
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x56ba83
        __asm _emit 0x75
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 100h], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
