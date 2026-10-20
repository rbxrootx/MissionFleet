// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D3ABF .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_004d3abf_004D3ABF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
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
        ; Exact mapped bytes 75 14: jne 0x4d3af0
        __asm _emit 0x75
        __asm _emit 0x14
        push 0beh
        push 5c64b4h
        ; Exact mapped bytes E8 15 0F 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d3af0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d3acb
        __asm _emit 0x75
        __asm _emit 0xd5
        ; Exact mapped bytes E8 47 1A 06 00: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x1a
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x4d3b18
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c1h
        push 5c64b4h
        ; Exact mapped bytes E8 ED 0E 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x0e
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d3b18
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d3afe
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 413h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
