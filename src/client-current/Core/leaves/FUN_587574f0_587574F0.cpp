// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587574F0 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_587574f0_587574F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b5414h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A A5 E0 FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa5
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
