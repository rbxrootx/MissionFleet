// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E4E10 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_585e4e10_585E4E10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 8], edx
        push 0
        push 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a7ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
