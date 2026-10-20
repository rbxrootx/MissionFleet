// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044C389 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_0044c389_0044C389() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 4D B2 0D 00: call 0x5275ea
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xb2
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2B: je 0x44c3d1
        __asm _emit 0x74
        __asm _emit 0x2b
        lea eax, [ebp - 0ch]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 AA B8 07 00: call 0x4c7c67
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 10 29 00 00: call 0x44ecd5
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x44c3cf
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 04: jmp 0x44c3d3
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB CF: jmp 0x44c3a0
        __asm _emit 0xeb
        __asm _emit 0xcf
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
