// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005193C2 .. +0xDF bytes.
extern "C" __declspec(naked) void FUN_005193c2_005193C2() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x5193f7
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        and edx, 40h
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x5193f7
        __asm _emit 0x74
        __asm _emit 0x14
        push 4cah
        push 5c8c2ch
        ; Exact mapped bytes E8 0E B6 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5193f7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x5193cc
        __asm _emit 0x75
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x519425
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 0ch]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x519425
        __asm _emit 0x74
        __asm _emit 0x14
        push 4ceh
        push 5c8c2ch
        ; Exact mapped bytes E8 E0 B5 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x519425
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x5193fd
        __asm _emit 0x75
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp + 8]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x519453
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 0ch]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x519453
        __asm _emit 0x75
        __asm _emit 0x14
        push 4d2h
        push 5c8c2ch
        ; Exact mapped bytes E8 B2 B5 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x519453
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x51942b
        __asm _emit 0x75
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 29: je 0x51948b
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp + 8]
        and edx, 0f00h
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0f00h
        cmp edx, eax
        ; Exact mapped bytes 74 14: je 0x51948b
        __asm _emit 0x74
        __asm _emit 0x14
        push 33h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 05 5E FD FF: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 84h], 1
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
