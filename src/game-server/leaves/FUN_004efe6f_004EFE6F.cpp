// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EFE6F .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_004efe6f_004EFE6F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4efe93
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d8h
        push 5c5060h
        ; Exact mapped bytes E8 72 4B 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x4b
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4efe93
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4efe79
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 08: jne 0x4efea7
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 5C 57 04 00: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x57
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 4ch], edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D7 00 00 00: call 0x4eff9b
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
