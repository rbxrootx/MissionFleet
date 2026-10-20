// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58673540 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_58673540_58673540() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0b8h]
        ; Exact mapped bytes E8 A2 14 E1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x14
        __asm _emit 0xe1
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
