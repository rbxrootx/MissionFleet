// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586FF710 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_586ff710_586FF710() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 F3 FF FF: call 0x586fea50
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 11: je 0x586ff738
        __asm _emit 0x74
        __asm _emit 0x11
        push 210h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 FF 18 13 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x18
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
