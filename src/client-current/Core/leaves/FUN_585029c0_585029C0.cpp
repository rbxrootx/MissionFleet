// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585029C0 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_585029c0_585029C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CB 02 00 00: call 0x58502cb0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
