// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00525C82 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_00525c82_00525C82() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x525ca6
        __asm _emit 0x75
        __asm _emit 0x14
        push 519h
        push 5c8174h
        ; Exact mapped bytes E8 5F ED 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x525ca6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x525c8c
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffffh
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F1 00 00 00: call 0x525dbb
        __asm _emit 0xe8
        __asm _emit 0xf1
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
