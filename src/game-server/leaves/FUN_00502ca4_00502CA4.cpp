// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00502CA4 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_00502ca4_00502CA4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x502ccd
        __asm _emit 0x75
        __asm _emit 0x14
        push 2f4h
        push 5c6db0h
        ; Exact mapped bytes E8 38 1D 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x1d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x502ccd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x502cb0
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 D8 20 5E 00: call dword ptr [0x5e20d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 74 6C: je 0x502d65
        __asm _emit 0x74
        __asm _emit 0x6c
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 5A 2C 03 00: call 0x53595b
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 30 1F 5E 00: call dword ptr [0x5e1f30]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x502d2a
        __asm _emit 0x75
        __asm _emit 0x14
        push 2f9h
        push 5c6db0h
        ; Exact mapped bytes E8 DB 1C 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x1c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x502d2a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D1: jne 0x502d01
        __asm _emit 0x75
        __asm _emit 0xd1
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 B4 20 5E 00: call dword ptr [0x5e20b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x502d5f
        __asm _emit 0x75
        __asm _emit 0x14
        push 2fah
        push 5c6db0h
        ; Exact mapped bytes E8 A6 1C 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x1c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x502d5f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CB: jne 0x502d30
        __asm _emit 0x75
        __asm _emit 0xcb
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
