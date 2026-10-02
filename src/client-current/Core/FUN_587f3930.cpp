// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587F3930 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_587f3930() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B5 5E FD FF: call 0x587c9800
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x5e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be6fch
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret 0ch
    }
}
