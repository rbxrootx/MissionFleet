// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CEEC7 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_004ceec7_004CEEC7() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 2A: je 0x4ceefd
        __asm _emit 0x74
        __asm _emit 0x2a
        push 1
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 2
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 71 0F 00 00: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ceefd
        __asm _emit 0x75
        __asm _emit 0x14
        push 390h
        push 5c4c5ch
        ; Exact mapped bytes E8 08 5B 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x5b
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ceefd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x4ceecd
        __asm _emit 0x75
        __asm _emit 0xca
        ; Exact mapped bytes EB 09: jmp 0x4cef0e
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
        ; Exact mapped bytes 74 15: je 0x4cef33
        __asm _emit 0x74
        __asm _emit 0x15
        push 4
        push 5c4bbch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F2 A0 FD FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB D2: jmp 0x4cef05
        __asm _emit 0xeb
        __asm _emit 0xd2
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
