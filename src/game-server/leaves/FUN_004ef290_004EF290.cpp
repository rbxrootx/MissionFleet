// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EF290 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_004ef290_004EF290() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ef2bf
        __asm _emit 0x75
        __asm _emit 0x14
        push 122h
        push 5c4f60h
        ; Exact mapped bytes E8 46 57 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x57
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ef2bf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4ef29a
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 2C: jne 0x4ef2fa
        __asm _emit 0x75
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 62 C8 04 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xc8
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 14 26 5E 00: call dword ptr [0x5e2614]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 2C: jmp 0x4ef326
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 38h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 38h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 A4 00 00 00: call dword ptr [eax + 0xa4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
