// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A7AE0 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_584a7ae0_584A7AE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 4D 44 FE FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D6 45 FE FF: call 0x5848c0d0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 39 44 FE FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B2 43 FE FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 19: jge 0x584a7b2c
        __asm _emit 0x7d
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        push 8
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B7 29 2C 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x29
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 5C: jmp 0x584a7b88
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 0A 44 FE FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 83 43 FE FF: call 0x5848bec0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x43
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7E 19: jle 0x584a7b5b
        __asm _emit 0x7e
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 9
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 88 29 2C 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x29
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2D: jmp 0x584a7b88
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14h], edx
        push 0
        push 0
        push 8
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6F 29 2C 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x29
        __asm _emit 0x2c
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        push 0
        push 0
        push 9
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 59 29 2C 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x29
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
