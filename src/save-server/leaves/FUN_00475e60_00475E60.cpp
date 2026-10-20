// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00475E60 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_00475e60_00475E60() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 1E: je 0x475e93
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        add eax, 0ch
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 8B 0D 64 E1 67 00: mov ecx, dword ptr [0x67e164]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0xe1
        __asm _emit 0x67
        __asm _emit 0x00
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ebp + 0ch]
        add edx, ecx
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 73 02: jae 0x475e93
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB D7: jmp 0x475e6a
        __asm _emit 0xeb
        __asm _emit 0xd7
        ; Exact mapped bytes A1 64 E1 67 00: mov eax, dword ptr [0x67e164]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0xe1
        __asm _emit 0x67
        __asm _emit 0x00
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, eax
        cmp dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 73 10: jae 0x475eb5
        __asm _emit 0x73
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x475eb5
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 02: jmp 0x475eb7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
