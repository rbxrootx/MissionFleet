// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882D9F0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_5882d9f0_5882D9F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 F4 04 00: call 0x5887ce50
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 0E: je 0x5882da15
        __asm _emit 0x74
        __asm _emit 0x0e
        push 58h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 22 36 00 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x36
        __asm _emit 0x00
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
