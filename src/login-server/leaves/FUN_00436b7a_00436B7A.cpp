// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436B7A .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_00436b7a_00436B7A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        lea eax, [edi + 1ch]
        push eax
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes FF 15 7C C1 43 00: call dword ptr [0x43c17c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, dword ptr [edi + 14h]
        mov ebx, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 74 23: je 0x436bbd
        __asm _emit 0x74
        __asm _emit 0x23
        cmp ebx, dword ptr [esi + 8]
        ; Exact mapped bytes 7D 17: jge 0x436bb6
        __asm _emit 0x7d
        __asm _emit 0x17
        mov eax, dword ptr [esi + 0ch]
        mov ecx, dword ptr [eax + ebx*4]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x436baf
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov eax, dword ptr [esi + 0ch]
        and dword ptr [eax + ebx*4], 0
        mov esi, dword ptr [esi + 4]
        test esi, esi
        ; Exact mapped bytes 75 DD: jne 0x436b9a
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [edi + 10h]
        push dword ptr [ebp - 4]
        and dword ptr [eax + ebx*8], 0fffffffeh
        lea eax, [eax + ebx*8]
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
