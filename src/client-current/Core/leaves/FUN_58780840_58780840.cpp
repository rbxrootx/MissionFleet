// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58780840 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_58780840_58780840() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b5dcch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FA 11 DE FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x11
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
