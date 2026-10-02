// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587FAA50 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_587faa50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9B ED FC FF: call 0x587c9800
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xed
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be70ch
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
