// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044D732 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_0044d732_0044D732() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AB C2 03 00: call 0x4899f7
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x44d757
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x44d759
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 7D B0 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
