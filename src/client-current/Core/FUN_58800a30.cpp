// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58800A30 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_58800a30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 FF FF FF: call 0x588009f0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 0E: je 0x58800a55
        __asm _emit 0x74
        __asm _emit 0x0e
        push 38h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 E2 05 03 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret 4
    }
}
