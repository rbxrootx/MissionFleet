// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FA049 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_004fa049_004FA049() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 209h
        push 5c60d0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 F8 10 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 93 B4 03 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xb4
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 14: jne 0x4fa086
        __asm _emit 0x75
        __asm _emit 0x14
        push 20ah
        push 5c60d0h
        ; Exact mapped bytes E8 7F A9 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fa086
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DC: jne 0x4fa068
        __asm _emit 0x75
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
