// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DFF5A .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_004dff5a_004DFF5A() {
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
        ; Exact mapped bytes 75 14: jne 0x4dff89
        __asm _emit 0x75
        __asm _emit 0x14
        push 12fh
        push 5841b8h
        ; Exact mapped bytes E8 7C 4A 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x4a
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dff89
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4dff64
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffh
        shl eax, 18h
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffh
        shl ecx, 10h
        add eax, ecx
        mov edx, dword ptr [ebp + 10h]
        and edx, 0ffh
        shl edx, 8
        add eax, edx
        mov ecx, dword ptr [ebp + 14h]
        and ecx, 0ffh
        add eax, ecx
        push eax
        push 0
        push 465h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        push eax
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
