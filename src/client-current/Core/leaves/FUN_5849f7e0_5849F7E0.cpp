// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5849F7E0 .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_5849f7e0_5849F7E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 500h]
        mov dword ptr [ebp - 8], ecx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E1 66 FE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 470h], 1
        mov esp, ebp
        pop ebp
        ret
    }
}
