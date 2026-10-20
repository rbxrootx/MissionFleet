// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58797CB0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_58797cb0_58797CB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 20 D1 FF: call 0x584a9d70
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x20
        __asm _emit 0xd1
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 0E: je 0x58797cd5
        __asm _emit 0x74
        __asm _emit 0x0e
        push 18h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 62 93 09 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x93
        __asm _emit 0x09
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
