// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FF890 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_004ff890_004FF890() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 70h], 0
        ; Exact mapped bytes 74 63: je 0x4ff906
        __asm _emit 0x74
        __asm _emit 0x63
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        cmp eax, -1
        ; Exact mapped bytes 75 49: jne 0x4ff906
        __asm _emit 0x75
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 75 14: jne 0x4ff8da
        __asm _emit 0x75
        __asm _emit 0x14
        push 281h
        push 6756ach
        ; Exact mapped bytes E8 6B 94 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x94
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ff8da
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4ff8bd
        __asm _emit 0x75
        __asm _emit 0xdd
        lea edx, [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6B C3 02 00: call 0x52bc57
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc3
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 74h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 74h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes EB 14: jmp 0x4ff91a
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 17 DD 02 00: call 0x52d631
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xdd
        __asm _emit 0x02
        __asm _emit 0x00
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
