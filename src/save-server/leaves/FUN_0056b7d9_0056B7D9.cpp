// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056B7D9 .. +0x1A7 bytes.
extern "C" __declspec(naked) void FUN_0056b7d9_0056B7D9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
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
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0e4h], 0
        ; Exact mapped bytes 74 14: je 0x56b816
        __asm _emit 0x74
        __asm _emit 0x14
        push 237h
        push 67d38ch
        ; Exact mapped bytes E8 2F D5 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xd5
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56b816
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x56b7f6
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes FF 15 C8 BC 68 00: call dword ptr [0x68bcc8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0e4h], eax
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0e4h], 0
        ; Exact mapped bytes 75 07: jne 0x56b83e
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 3B 01 00 00: jmp 0x56b979
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 0e8h
        push ecx
        ; Exact mapped bytes E8 6F A0 EF FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xa0
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 8]
        add edx, 0e8h
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0e4h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0d4h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0d4h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 24: call dword ptr [ecx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x24
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x56b8a8
        __asm _emit 0x74
        __asm _emit 0x24
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
        xor eax, eax
        ; Exact mapped bytes E9 D1 00 00 00: jmp 0x56b979
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0ech], 0
        ; Exact mapped bytes 74 14: je 0x56b8c8
        __asm _emit 0x74
        __asm _emit 0x14
        push 244h
        push 67d38ch
        ; Exact mapped bytes E8 7D D4 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56b8c8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x56b8a8
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0f4h], 0
        ; Exact mapped bytes 74 14: je 0x56b8ee
        __asm _emit 0x74
        __asm _emit 0x14
        push 245h
        push 67d38ch
        ; Exact mapped bytes E8 57 D4 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56b8ee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x56b8ce
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0fch], 0
        ; Exact mapped bytes 74 14: je 0x56b914
        __asm _emit 0x74
        __asm _emit 0x14
        push 246h
        push 67d38ch
        ; Exact mapped bytes E8 31 D4 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56b914
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x56b8f4
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x56b927
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 52: jmp 0x56b979
        __asm _emit 0xeb
        __asm _emit 0x52
        push 0
        push 1
        mov edx, dword ptr [ebp - 8]
        add edx, 0e8h
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0e4h]
        push edx
        ; Exact mapped bytes E8 62 07 FE FF: call 0x54c0aa
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        add eax, 0e8h
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0e4h]
        push edx
        ; Exact mapped bytes FF 15 88 C2 68 00: call dword ptr [0x68c288]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 100h], eax
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        cmp dword ptr [edx + 100h], 0
        setne al
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
