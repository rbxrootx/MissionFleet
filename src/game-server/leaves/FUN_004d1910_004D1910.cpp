// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D1910 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_004d1910_004D1910() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 40h], 0
        ; Exact mapped bytes 75 11: jne 0x4d1936
        __asm _emit 0x75
        __asm _emit 0x11
        push 45h
        push 5c8e64h
        ; Exact mapped bytes E8 CF 30 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d1936
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4d191c
        __asm _emit 0x75
        __asm _emit 0xe0
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 EE 3C 06 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x00
        lea edx, [ebp - 18h]
        push edx
        push 18h
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 3ch
        ; Exact mapped bytes E8 77 4E 06 00: call 0x5367cc
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x4e
        __asm _emit 0x06
        __asm _emit 0x00
        cmp eax, 18h
        ; Exact mapped bytes 74 11: je 0x4d196b
        __asm _emit 0x74
        __asm _emit 0x11
        push 48h
        push 5c8e64h
        ; Exact mapped bytes E8 9A 30 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d196b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x4d1944
        __asm _emit 0x75
        __asm _emit 0xd3
        push 1eh
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        push -1
        push -1
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 07 D9 01 00: call 0x4ef290
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4d199e
        __asm _emit 0x75
        __asm _emit 0x11
        push 4ah
        push 5c8e64h
        ; Exact mapped bytes E8 67 30 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d199e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CD: jne 0x4d1971
        __asm _emit 0x75
        __asm _emit 0xcd
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
