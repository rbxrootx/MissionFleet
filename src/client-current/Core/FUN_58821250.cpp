// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58821250 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_58821250() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9B 85 FA FF: call 0x587c9800
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be74ch
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
