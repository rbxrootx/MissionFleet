// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052828B .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_0052828b_0052828B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 7D 11: jge 0x5282ac
        __asm _emit 0x7d
        __asm _emit 0x11
        push 5ch
        push 634608h
        ; Exact mapped bytes E8 99 0A 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5282ac
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x528295
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 45 8E 01 00: call 0x54110f
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x8e
        __asm _emit 0x01
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
