// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C4F90 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_584c4f90_584C4F90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 FF FF FF: call 0x584c4f70
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 0E: je 0x584c4fb5
        __asm _emit 0x74
        __asm _emit 0x0e
        push 5ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 82 C0 36 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xc0
        __asm _emit 0x36
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
