// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CEF3A .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_004cef3a_004CEF3A() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 2A: je 0x4cef70
        __asm _emit 0x74
        __asm _emit 0x2a
        push 1
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 2
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 FE 0E 00 00: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4cef70
        __asm _emit 0x75
        __asm _emit 0x14
        push 39dh
        push 5c4c5ch
        ; Exact mapped bytes E8 95 5A 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x5a
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cef70
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x4cef40
        __asm _emit 0x75
        __asm _emit 0xca
        ; Exact mapped bytes EB 09: jmp 0x4cef81
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        mov dword ptr [ebp + 0ch], edx
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x4cef9d
        __asm _emit 0x74
        __asm _emit 0x0c
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 35 01 00 00: call 0x4cf0d0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB DB: jmp 0x4cef78
        __asm _emit 0xeb
        __asm _emit 0xdb
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
