// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876D980 .. +0xD4 bytes.
extern "C" __declspec(naked) void FUN_5876d980_5876D980() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 5ee8h], ecx
        cmp dword ptr [ebp + 8], 40000000h
        ; Exact mapped bytes 75 56: jne 0x5876d9f4
        __asm _emit 0x75
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 5eech], 40000h
        ; Exact mapped bytes 75 45: jne 0x5876d9f2
        __asm _emit 0x75
        __asm _emit 0x45
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 1150h]
        mov dword ptr [ebp - 8], eax
        push 32ff32h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 11 87 D1 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x87
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 1150h]
        mov dword ptr [ebp - 0ch], eax
        push 32ff32h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EF 86 D1 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x86
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5A: jmp 0x5876da4e
        __asm _emit 0xeb
        __asm _emit 0x5a
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 54: jne 0x5876da4e
        __asm _emit 0x75
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5eech], 40000h
        ; Exact mapped bytes 75 45: jne 0x5876da4e
        __asm _emit 0x75
        __asm _emit 0x45
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1150h]
        mov dword ptr [ebp - 10h], edx
        push 0ffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B5 86 D1 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x86
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1150h]
        mov dword ptr [ebp - 14h], edx
        push 0ffffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 93 86 D1 FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x86
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
