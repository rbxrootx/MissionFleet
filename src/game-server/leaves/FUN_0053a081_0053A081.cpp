// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053A081 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_0053a081_0053A081() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x53a0a8
        __asm _emit 0x75
        __asm _emit 0x14
        push 36ch
        push 581fc0h
        ; Exact mapped bytes E8 5D A9 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53a0a8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x53a08b
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 70 C6 FF FF: call 0x53672a
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 3C 28 5E 00: call dword ptr [0x5e283c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x28
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
