// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D639B .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_004d639b_004D639B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 96 F1 05 00: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf1
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4d63c9
        __asm _emit 0x75
        __asm _emit 0x14
        push 4a5h
        push 5c64b4h
        ; Exact mapped bytes E8 3C E6 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xe6
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d63c9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d63af
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 48 1E 5E 00: call dword ptr [0x5e1e48]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 43 00 00 00: call 0x4d6439
        __asm _emit 0xe8
        __asm _emit 0x43
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
