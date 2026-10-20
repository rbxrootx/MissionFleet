// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850D150 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_5850d150_5850D150() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 54 F9 FF: call 0x584a25b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x54
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 0E: je 0x5850d175
        __asm _emit 0x74
        __asm _emit 0x0e
        push 8
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 C2 3E 32 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x3e
        __asm _emit 0x32
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
