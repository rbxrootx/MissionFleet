// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58780B00 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_58780b00_58780B00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 FE FF FF: call 0x58780960
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 0E: je 0x58780b25
        __asm _emit 0x74
        __asm _emit 0x0e
        push 10h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 12 05 0B 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x05
        __asm _emit 0x0b
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
