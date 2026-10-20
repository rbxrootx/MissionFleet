// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005153DD .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_005153dd_005153DD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 72 D6 FD FF: call 0x4f2a61
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xd6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 40h], 1
        ; Exact mapped bytes 7D 14: jge 0x51540c
        __asm _emit 0x7d
        __asm _emit 0x14
        push 919h
        push 5c84b0h
        ; Exact mapped bytes E8 F9 F5 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51540c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5153ef
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 44h], 1
        ; Exact mapped bytes 7D 14: jge 0x51542f
        __asm _emit 0x7d
        __asm _emit 0x14
        push 91ah
        push 5c84b0h
        ; Exact mapped bytes E8 D6 F5 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51542f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x515412
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 44h], 1
        ; Exact mapped bytes 7F 1D: jg 0x51545b
        __asm _emit 0x7f
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 40h], 1
        ; Exact mapped bytes 7F 14: jg 0x51545b
        __asm _emit 0x7f
        __asm _emit 0x14
        push 91bh
        push 5c84b0h
        ; Exact mapped bytes E8 AA F5 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51545b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x515435
        __asm _emit 0x75
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 1
        ; Exact mapped bytes 7D 14: jge 0x51547e
        __asm _emit 0x7d
        __asm _emit 0x14
        push 91ch
        push 5c84b0h
        ; Exact mapped bytes E8 87 F5 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51547e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x515461
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 6ch], 1
        ; Exact mapped bytes 7D 14: jge 0x5154a1
        __asm _emit 0x7d
        __asm _emit 0x14
        push 91dh
        push 5c84b0h
        ; Exact mapped bytes E8 64 F5 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5154a1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x515484
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 68h]
        cmp ecx, dword ptr [eax + 40h]
        ; Exact mapped bytes 7E 14: jle 0x5154c9
        __asm _emit 0x7e
        __asm _emit 0x14
        push 91eh
        push 5c84b0h
        ; Exact mapped bytes E8 3C F5 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5154c9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x5154a7
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 6ch]
        cmp edx, dword ptr [ecx + 44h]
        ; Exact mapped bytes 7E 14: jle 0x5154f1
        __asm _emit 0x7e
        __asm _emit 0x14
        push 91fh
        push 5c84b0h
        ; Exact mapped bytes E8 14 F5 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5154f1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x5154cf
        __asm _emit 0x75
        __asm _emit 0xd8
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
