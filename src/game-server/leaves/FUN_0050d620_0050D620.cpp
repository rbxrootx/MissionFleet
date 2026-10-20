// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050D620 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_0050d620_0050D620() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes E8 CF 7F 02 00: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 12: je 0x50d64c
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 B8 00 00 00: call dword ptr [edx + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x50d64e
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 4C: jmp 0x50d69a
        __asm _emit 0xeb
        __asm _emit 0x4c
        push 585e80h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 35 DA FE FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x50d670
        __asm _emit 0x75
        __asm _emit 0x11
        push 26h
        push 5c4e5ch
        ; Exact mapped bytes E8 95 73 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50d670
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x50d64e
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 68h], 0
        ; Exact mapped bytes 74 15: je 0x50d69a
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 68h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 68h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
