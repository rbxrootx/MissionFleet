// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054A94B .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_0054a94b_0054A94B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x54a96c
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a3h
        push 678964h
        ; Exact mapped bytes E8 D9 E3 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe3
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54a96c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x54a952
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 21: je 0x54a99b
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], 0
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 02: jmp 0x54a99d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
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
