// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5867A5E0 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_5867a5e0_5867A5E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 588h]
        ; Exact mapped bytes E8 59 36 E5 FF: call 0x584cdc50
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x36
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x5867a604
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 07: jmp 0x5867a60b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
