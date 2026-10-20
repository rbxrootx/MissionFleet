// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58502170 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_58502170_58502170() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 53 FC FF: call 0x584c74c0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 0E: je 0x58502195
        __asm _emit 0x74
        __asm _emit 0x0e
        push 30h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 A2 EE 32 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xee
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
