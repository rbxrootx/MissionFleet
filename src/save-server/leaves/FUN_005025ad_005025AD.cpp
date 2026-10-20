// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005025AD .. +0xDF bytes.
extern "C" __declspec(naked) void FUN_005025ad_005025AD() {
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
        ; Exact mapped bytes 74 21: je 0x5025e2
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        and edx, 40h
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x5025e2
        __asm _emit 0x74
        __asm _emit 0x14
        push 4cah
        push 675764h
        ; Exact mapped bytes E8 63 67 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5025e2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x5025b7
        __asm _emit 0x75
        __asm _emit 0xcf
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x502610
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 0ch]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x502610
        __asm _emit 0x74
        __asm _emit 0x14
        push 4ceh
        push 675764h
        ; Exact mapped bytes E8 35 67 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x502610
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x5025e8
        __asm _emit 0x75
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp + 8]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 1E: je 0x50263e
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 0ch]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x50263e
        __asm _emit 0x75
        __asm _emit 0x14
        push 4d2h
        push 675764h
        ; Exact mapped bytes E8 07 67 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x67
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50263e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x502616
        __asm _emit 0x75
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 29: je 0x502676
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [ebp + 8]
        and edx, 0f00h
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0f00h
        cmp edx, eax
        ; Exact mapped bytes 74 14: je 0x502676
        __asm _emit 0x74
        __asm _emit 0x14
        push 33h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AA 40 FD FF: call 0x4d6720
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x40
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
