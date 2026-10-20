// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58500BF0 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_58500bf0_58500BF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 BF F6 FF FF: call 0x585002c0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 755h
        ; Exact mapped bytes 74 04: je 0x58500c0c
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x58500c11
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
