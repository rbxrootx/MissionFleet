// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586FAC10 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_586fac10_586FAC10() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 FE FF FF: call 0x586faa60
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 0E: je 0x586fac35
        __asm _emit 0x74
        __asm _emit 0x0e
        push 7ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 02 64 13 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x64
        __asm _emit 0x13
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
