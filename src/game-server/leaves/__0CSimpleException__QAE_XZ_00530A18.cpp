// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00530A18 .. +0x33 bytes.
extern "C" __declspec(naked) void __0CSimpleException__QAE_XZ_00530A18() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A A4 FC FF: call 0x4fae31
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xa4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58213ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 14h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
