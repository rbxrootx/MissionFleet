// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E9550 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_586e9550_586E9550() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 87 E3 FF: call 0x58521cd0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x87
        __asm _emit 0xe3
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 0E: je 0x586e9575
        __asm _emit 0x74
        __asm _emit 0x0e
        push 0ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 C2 7A 14 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x7a
        __asm _emit 0x14
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
