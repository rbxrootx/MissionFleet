// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862A4B0 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_5862a4b0_5862A4B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 E6 FF FF: call 0x58628b00
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 11: je 0x5862a4d8
        __asm _emit 0x74
        __asm _emit 0x11
        push 27ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 5F 6B 20 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x6b
        __asm _emit 0x20
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
