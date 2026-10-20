// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EA030 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_585ea030_585EA030() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8f8h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E9 6B F8 FF: call 0x58570c40
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
