// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EC70B .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_004ec70b_004EC70B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 0aeh
        push 676ad0h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 38 DB FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 74 14: je 0x4ec745
        __asm _emit 0x74
        __asm _emit 0x14
        push 0afh
        push 676ad0h
        ; Exact mapped bytes E8 00 C6 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xc6
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ec745
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4ec728
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 24h], ecx
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
