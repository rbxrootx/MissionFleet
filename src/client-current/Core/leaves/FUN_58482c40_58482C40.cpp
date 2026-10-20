// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58482C40 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_58482c40_58482C40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C1 2C 33 00: call 0x587b5910
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x2c
        __asm _emit 0x33
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 0E: je 0x58482c65
        __asm _emit 0x74
        __asm _emit 0x0e
        push 54h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 D2 E3 3A 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xe3
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
