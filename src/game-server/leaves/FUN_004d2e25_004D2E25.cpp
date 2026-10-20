// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D2E25 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_004d2e25_004D2E25() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 0f6h
        push 5d0e18h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 1C 83 02 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4d2e6f
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f9h
        push 5d0e18h
        ; Exact mapped bytes E8 96 1B 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x1b
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d2e6f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d2e55
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 B1 F4 01 00: call 0x4f232f
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf4
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EC E9 01 00: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E8 96 F5 01 00: call 0x4f2421
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 12: je 0x4d2eaf
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x4d2eb6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
