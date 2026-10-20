// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856AE90 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_5856ae90_5856AE90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a9714h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 392ch]
        push edx
        ; Exact mapped bytes FF 15 90 40 89 58: call dword ptr [0x58894090]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 D0 FF FF: call 0x58567ec0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
