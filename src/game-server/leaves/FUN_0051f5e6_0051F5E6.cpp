// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051F5E6 .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_0051f5e6_0051F5E6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x51f609
        __asm _emit 0x75
        __asm _emit 0x11
        push 40h
        push 5cc9cch
        ; Exact mapped bytes E8 FC 53 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f609
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x51f5f2
        __asm _emit 0x75
        __asm _emit 0xe3
        push 585e80h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 74 BA FD FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x51f631
        __asm _emit 0x75
        __asm _emit 0x11
        push 41h
        push 5cc9cch
        ; Exact mapped bytes E8 D4 53 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f631
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x51f60f
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp + 0ch]
        and edx, 40ffffh
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 64h], edx
        push 2
        ; Exact mapped bytes E8 AE 7D FD FF: call 0x4f73fb
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x7d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x51f662
        __asm _emit 0x75
        __asm _emit 0x11
        push 46h
        push 5cc9cch
        ; Exact mapped bytes E8 A3 53 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51f662
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x51f646
        __asm _emit 0x75
        __asm _emit 0xde
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E1 66 01 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D3 69 01 00: call 0x53604b
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x69
        __asm _emit 0x01
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
        push 582e60h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 EA 2F FD FF: call 0x4f2683
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x2f
        __asm _emit 0xfd
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
