// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004192BB .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_004192bb_004192BB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 581140h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 E3 10 00 00: call 0x41a3c0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 F9 F4 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xf4
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
