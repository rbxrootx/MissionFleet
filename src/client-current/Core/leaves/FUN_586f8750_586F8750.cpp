// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F8750 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_586f8750_586F8750() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes A1 1C 5F 96 58: mov eax, dword ptr [0x58965f1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 91 A1 13 00: call 0x588328f5
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xa1
        __asm _emit 0x13
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 0ch]
        push ecx
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 95 A1 13 00: call 0x5883290d
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xa1
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0fffffffch
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 81 A1 13 00: call 0x58832913
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xa1
        __asm _emit 0x13
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes A1 1C 5F 96 58: mov eax, dword ptr [0x58965f1c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 5A A1 13 00: call 0x588328fb
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xa1
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
