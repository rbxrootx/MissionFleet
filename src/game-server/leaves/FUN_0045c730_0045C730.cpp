// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045C730 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_0045c730_0045C730() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffh
        cmp eax, 53h
        ; Exact mapped bytes 7D 12: jge 0x45c752
        __asm _emit 0x7d
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 8]
        and ecx, 0ffh
        mov eax, dword ptr [ecx*4 + 5d7a34h]
        ; Exact mapped bytes EB 05: jmp 0x45c757
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 5ba428h
        pop ebp
        ret
    }
}
