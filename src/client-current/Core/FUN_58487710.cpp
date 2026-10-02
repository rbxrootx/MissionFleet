// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58487710 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_58487710() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 58894d00h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5C FF FF FF: call 0x58487680
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58894cf8h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
