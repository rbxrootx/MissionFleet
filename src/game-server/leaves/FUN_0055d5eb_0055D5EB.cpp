// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055D5EB .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_0055d5eb_0055D5EB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 15dh
        push 5cebf0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 5B DB F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xdb
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0cch]
        mov esp, ebp
        pop ebp
        ret
    }
}
