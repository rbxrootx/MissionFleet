// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850CE60 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_5850ce60_5850CE60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 97 49 F9 FF: call 0x584a1810
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x49
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 96 4C F9 FF: call 0x584a1b20
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x5850ce96
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 0A: jmp 0x5850cea0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 62 63 F9 FF: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x63
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
