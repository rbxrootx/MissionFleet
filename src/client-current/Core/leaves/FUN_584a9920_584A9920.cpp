// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A9920 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_584a9920_584A9920() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 73 08: jae 0x584a993a
        __asm _emit 0x73
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 06: jmp 0x584a9940
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
