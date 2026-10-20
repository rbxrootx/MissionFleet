// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00455AD0 .. +0xA9 bytes.
extern "C" __declspec(naked) void FUN_00455ad0_00455AD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 21: jne 0x455b0d
        __asm _emit 0x75
        __asm _emit 0x21
        push 677668h
        push 0
        push 4b2h
        push 677614h
        push 2
        ; Exact mapped bytes E8 5C 73 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x455b0d
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x455ae3
        __asm _emit 0x75
        __asm _emit 0xd0
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 62 00 00 00: call 0x455b80
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x455b33
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 73 34: jae 0x455b6f
        __asm _emit 0x73
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 56 00 00 00: call 0x455ba0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x455b6d
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C1 00 00 00: call 0x455c20
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 05: jge 0x455b6d
        __asm _emit 0x7d
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 05: jmp 0x455b72
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes EB BB: jmp 0x455b2a
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
