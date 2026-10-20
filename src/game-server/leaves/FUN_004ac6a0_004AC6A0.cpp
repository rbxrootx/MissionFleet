// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AC6A0 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_004ac6a0_004AC6A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        lea eax, [ebp + 10h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1E: jne 0x4ac6d3
        __asm _emit 0x75
        __asm _emit 0x1e
        push 58c274h
        push 0
        push 38h
        push 58c280h
        push 2
        ; Exact mapped bytes E8 66 44 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ac6d3
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x4ac6af
        __asm _emit 0x75
        __asm _emit 0xd6
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1E: jne 0x4ac6fd
        __asm _emit 0x75
        __asm _emit 0x1e
        push 58bae4h
        push 0
        push 39h
        push 58c280h
        push 2
        ; Exact mapped bytes E8 3C 44 00 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4ac6fd
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x4ac6d9
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 3E BC 00 00: call 0x4b8350
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 92 C1 00 00: call 0x4b88b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 3B 78 00 00: call 0x4b3f70
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 C8 C2 00 00: call 0x4b8a10
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 6C BC 00 00: call 0x4b83c0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
