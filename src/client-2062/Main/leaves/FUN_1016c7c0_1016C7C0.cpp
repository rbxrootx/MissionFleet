// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1016C7C0 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_1016c7c0_1016C7C0() {
    __asm {
        push ecx
        cmp eax, 1000h
        lea ecx, [esp + 8]
        ; Exact mapped bytes 72 14: jb 0x1016c7e0
        __asm _emit 0x72
        __asm _emit 0x14
        sub ecx, 1000h
        sub eax, 1000h
        test dword ptr [ecx], eax
        cmp eax, 1000h
        ; Exact mapped bytes 73 EC: jae 0x1016c7cc
        __asm _emit 0x73
        __asm _emit 0xec
        sub ecx, eax
        mov eax, esp
        test dword ptr [ecx], eax
        mov esp, ecx
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        push eax
        ret
    }
}
