// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00516648 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_00516648_00516648() {
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
        ; Exact mapped bytes 74 63: je 0x5166be
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
        ; Exact mapped bytes 75 49: jne 0x5166be
        __asm _emit 0x75
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 75 14: jne 0x516692
        __asm _emit 0x75
        __asm _emit 0x14
        push 277h
        push 5c8b74h
        ; Exact mapped bytes E8 73 E3 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x516692
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x516675
        __asm _emit 0x75
        __asm _emit 0xdd
        lea edx, [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 5B 02 00: call 0x53c1f7
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x5b
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
        ; Exact mapped bytes EB 14: jmp 0x5166d2
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FF 74 02 00: call 0x53dbd1
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x74
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
