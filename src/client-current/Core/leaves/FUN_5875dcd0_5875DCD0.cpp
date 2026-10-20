// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875DCD0 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_5875dcd0_5875DCD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        push ecx
        ; Exact mapped bytes E8 48 69 D8 FF: call 0x584e4630
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x69
        __asm _emit 0xd8
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x5875dd13
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        push 10101h
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4E 95 D5 FF: call 0x584b7260
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x95
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
