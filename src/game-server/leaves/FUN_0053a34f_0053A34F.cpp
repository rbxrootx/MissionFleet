// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053A34F .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_0053a34f_0053A34F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x53a376
        __asm _emit 0x75
        __asm _emit 0x14
        push 385h
        push 581fc0h
        ; Exact mapped bytes E8 8F A6 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53a376
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x53a359
        __asm _emit 0x75
        __asm _emit 0xdd
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
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 B8 1F 5E 00: call dword ptr [0x5e1fb8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x5e
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
