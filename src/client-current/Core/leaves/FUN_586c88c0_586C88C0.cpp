// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C88C0 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_586c88c0_586C88C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 68h], 0
        ; Exact mapped bytes 74 1B: je 0x586c88ed
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes E8 19 E9 E0 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 84 04 E1 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0xe1
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
