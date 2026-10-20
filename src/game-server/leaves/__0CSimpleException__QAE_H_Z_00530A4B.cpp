// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00530A4B .. +0x39 bytes.
extern "C" __declspec(naked) void __0CSimpleException__QAE_H_Z_00530A4B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 A4 FC FF: call 0x4fae64
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xa4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 58213ch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 14h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
