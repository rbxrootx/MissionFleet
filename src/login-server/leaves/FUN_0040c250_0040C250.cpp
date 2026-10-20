// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040C250 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_0040c250_0040C250() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 43cf18h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 A1 16 02 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x16
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
