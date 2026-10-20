// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044C270 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_0044c270_0044C270() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 E5 53 0E 00: call 0x53166e
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x53
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 4A C5 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xc5
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
