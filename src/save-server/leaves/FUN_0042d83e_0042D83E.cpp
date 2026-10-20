// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D83E .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_0042d83e_0042D83E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 74 3A: je 0x42d88c
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0c30h
        ; Exact mapped bytes E8 3C 0A 00 00: call 0x42e2a0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0bb4h], 0
        ; Exact mapped bytes 74 15: je 0x42d885
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bb4h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0bb4h], eax
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x42d88e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 58 75 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x75
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
