// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00522B6D .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_00522b6d_00522B6D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 0dch
        push 5c7638h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 D4 85 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x522ba9
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ddh
        push 5c7638h
        ; Exact mapped bytes E8 5C 1E 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x522ba9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x522b8c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 5C 20 5E 00: call dword ptr [0x5e205c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 81 31 01 00: call 0x535d5f
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0
        push 0
        lea ecx, [ebp - 10h]
        push ecx
        push 2
        push 0
        push 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 78 1F 5E 00: call dword ptr [0x5e1f78]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
