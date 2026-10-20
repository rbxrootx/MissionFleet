// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C1E1B .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_004c1e1b_004C1E1B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 155h
        push 6769ach
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 26 84 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0B: jne 0x4c1e51
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 33: jmp 0x4c1e84
        __asm _emit 0xeb
        __asm _emit 0x33
        push 1
        push 0ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 08 16 FE FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c1e76
        __asm _emit 0x75
        __asm _emit 0x14
        push 15eh
        push 6769ach
        ; Exact mapped bytes E8 CF 6E 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x6e
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c1e76
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4c1e51
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 08: jmp 0x4c1e8e
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 12: je 0x4c1ea6
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x4c1ea4
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 04: jmp 0x4c1ea8
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB E0: jmp 0x4c1e86
        __asm _emit 0xeb
        __asm _emit 0xe0
        xor eax, eax
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
