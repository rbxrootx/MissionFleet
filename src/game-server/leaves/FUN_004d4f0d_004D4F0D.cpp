// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D4F0D .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_004d4f0d_004D4F0D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
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
        ; Exact mapped bytes 75 14: jne 0x4d4f3e
        __asm _emit 0x75
        __asm _emit 0x14
        push 289h
        push 5c64b4h
        ; Exact mapped bytes E8 C7 FA 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfa
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d4f3e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d4f19
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 28h], 22h
        lea ecx, [ebp - 28h]
        push ecx
        push 0
        push 110ch
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 10: je 0x4d4f82
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp - 2ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
