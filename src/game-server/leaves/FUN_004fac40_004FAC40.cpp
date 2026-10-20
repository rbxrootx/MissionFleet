// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FAC40 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_004fac40_004FAC40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        push 1
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 00 52 FD FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4fac6b
        __asm _emit 0x75
        __asm _emit 0x11
        push 39h
        push 5c6da4h
        ; Exact mapped bytes E8 9A 9D 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x9d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fac6b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x4fac47
        __asm _emit 0x75
        __asm _emit 0xd6
        push 6
        mov eax, dword ptr [ebp + 8]
        shr eax, 4
        add eax, 1
        and eax, 0ffffh
        push eax
        ; Exact mapped bytes E8 BB A8 03 00: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 B8 23 5E 00: call dword ptr [0x5e23b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x4fac9c
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 0ch]
        mov byte ptr [ecx], 0
        xor eax, eax
        ; Exact mapped bytes EB 2A: jmp 0x4facc6
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 95 A8 03 00: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 68 25 5E 00: call dword ptr [0x5e2568]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 06: jne 0x4facc3
        __asm _emit 0x75
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        mov byte ptr [edx], 0
        mov eax, dword ptr [ebp - 4]
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
