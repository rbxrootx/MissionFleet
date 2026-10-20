// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00508786 .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_00508786_00508786() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x5087a9
        __asm _emit 0x75
        __asm _emit 0x11
        push 40h
        push 6791a4h
        ; Exact mapped bytes E8 9C 05 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5087a9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x508792
        __asm _emit 0x75
        __asm _emit 0xe3
        push 636f38h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D4 19 FD FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x19
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5087d1
        __asm _emit 0x75
        __asm _emit 0x11
        push 41h
        push 6791a4h
        ; Exact mapped bytes E8 74 05 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5087d1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x5087af
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp + 0ch]
        and edx, 40ffffh
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 64h], edx
        push 2
        ; Exact mapped bytes E8 3E CB FC FF: call 0x4d532b
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xcb
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x508802
        __asm _emit 0x75
        __asm _emit 0x11
        push 46h
        push 6791a4h
        ; Exact mapped bytes E8 43 05 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x508802
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x5087e6
        __asm _emit 0x75
        __asm _emit 0xde
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B7 99 02 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x99
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 8B 9C 02 00: call 0x5324a3
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        push 634d80h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7A 7D FC FF: call 0x4d05b3
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x7d
        __asm _emit 0xfc
        __asm _emit 0xff
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
