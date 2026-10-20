// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882D510 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_5882d510_5882D510() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be7d4h
        ; Exact mapped bytes FF 15 68 45 89 58: call dword ptr [0x58894568]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 220h
        ; Exact mapped bytes E8 8B FF FF FF: call 0x5882d4c0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
