// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D05B3 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_004d05b3_004D05B3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 14: jne 0x4d05d7
        __asm _emit 0x75
        __asm _emit 0x14
        push 2dfh
        push 671a64h
        ; Exact mapped bytes E8 6E 87 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d05d7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d05bd
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 80000000h
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4d05fe
        __asm _emit 0x74
        __asm _emit 0x14
        push 2e0h
        push 671a64h
        ; Exact mapped bytes E8 47 87 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d05fe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D9: jne 0x4d05dd
        __asm _emit 0x75
        __asm _emit 0xd9
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 98 AF 05 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [edx + 0ch]
        sub ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [edx + 8]
        sub ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp + 10h]
        or eax, 40000000h
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B6 FD FF FF: call 0x4d040c
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
