// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10001560 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_10001560_10001560() {
    __asm {
        push ebx
        mov ebx, ecx
        cmp dword ptr [ebx + 1ch], 4
        ; Exact mapped bytes 76 06: jbe 0x1000156f
        __asm _emit 0x76
        __asm _emit 0x06
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 14h]
        push ebp
        push esi
        mov esi, dword ptr [ebx + 10h]
        push edi
        xor ebp, ebp
        xor edi, edi
        cmp esi, eax
        ; Exact mapped bytes 74 24: je 0x100015a4
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 14h]
        push eax
        push ecx
        mov ecx, dword ptr [esi]
        push edi
        push edx
        ; Exact mapped bytes E8 89 BA 00 00: call 0x1000d020
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        add ebp, eax
        mov eax, dword ptr [ebx + 14h]
        add esi, 4
        inc edi
        cmp esi, eax
        ; Exact mapped bytes 75 DC: jne 0x10001580
        __asm _emit 0x75
        __asm _emit 0xdc
        pop edi
        mov eax, ebp
        pop esi
        mov dword ptr [ebx + 1ch], 4
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
