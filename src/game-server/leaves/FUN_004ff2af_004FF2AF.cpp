// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FF2AF .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_004ff2af_004FF2AF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 14ch
        push 5cb750h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 94 BE FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4], -1
        ; Exact mapped bytes 75 14: jne 0x4ff2e9
        __asm _emit 0x75
        __asm _emit 0x14
        push 14dh
        push 5cb750h
        ; Exact mapped bytes E8 1C 57 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ff2e9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4ff2cc
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 0C 23 5E 00: call dword ptr [0x5e230c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x4ff31a
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 B6 C5 FF FF: call 0x4fb8d0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
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
