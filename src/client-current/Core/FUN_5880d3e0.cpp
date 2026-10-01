// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5880D3E0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_5880d3e0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 FF FF FF: call 0x5880d3a0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 0E: je 0x5880d405
        __asm _emit 0x74
        __asm _emit 0x0e
        push 38h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 32 3C 02 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret 4
    }
}
