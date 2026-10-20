// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E873B .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_004e873b_004E873B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 155h
        push 5cfeb0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 06 2A 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0B: jne 0x4e8771
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 33: jmp 0x4e87a4
        __asm _emit 0xeb
        __asm _emit 0x33
        push 1
        push 0ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 D8 76 FE FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4e8796
        __asm _emit 0x75
        __asm _emit 0x14
        push 15eh
        push 5cfeb0h
        ; Exact mapped bytes E8 6F C2 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e8796
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4e8771
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 08: jmp 0x4e87ae
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 12: je 0x4e87c6
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x4e87c4
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 04: jmp 0x4e87c8
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB E0: jmp 0x4e87a6
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
