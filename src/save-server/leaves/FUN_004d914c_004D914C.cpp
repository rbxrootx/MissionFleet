// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D914C .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_004d914c_004D914C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 210h
        push 6725f0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 F5 10 00 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 00 89 05 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x89
        __asm _emit 0x05
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 14: jne 0x4d9189
        __asm _emit 0x75
        __asm _emit 0x14
        push 211h
        push 6725f0h
        ; Exact mapped bytes E8 BC FB 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xfb
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d9189
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DC: jne 0x4d916b
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
