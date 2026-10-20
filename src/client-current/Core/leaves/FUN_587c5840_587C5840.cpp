// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C5840 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_587c5840_587C5840() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 61 06 00: call 0x5882ba00
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x61
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 0E: je 0x587c5865
        __asm _emit 0x74
        __asm _emit 0x0e
        push 78h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 D2 B7 06 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xb7
        __asm _emit 0x06
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
