// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58780490 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_58780490() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 FF FF FF: call 0x58780470
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 11: je 0x587804b8
        __asm _emit 0x74
        __asm _emit 0x11
        push 198h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 7F 0B 0B 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x0b
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret 4
    }
}
