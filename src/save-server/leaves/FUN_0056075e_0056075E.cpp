// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056075E .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_0056075e_0056075E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 16ah
        push 67b3c8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 E8 9A F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0a0h]
        mov esp, ebp
        pop ebp
        ret
    }
}
