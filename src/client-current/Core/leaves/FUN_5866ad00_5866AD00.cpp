// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5866AD00 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_5866ad00_5866AD00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 2F: jne 0x5866ad3c
        __asm _emit 0x75
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes 75 0B: jne 0x5866ad23
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 90 0C 00 00: call 0x5866b9b0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x5866ad3c
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 70h]
        ; Exact mapped bytes 75 0E: jne 0x5866ad3c
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
