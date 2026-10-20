// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858D070 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_5858d070_5858D070() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588aaf3ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CA 49 FD FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x49
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
