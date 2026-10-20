// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00540030 .. +0x39 bytes.
extern "C" __declspec(naked) void __0CMDIChildWnd__QAE_XZ_00540030() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 D8 FF FF: call 0x53d910
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 6374c4h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d4h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 104h], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
