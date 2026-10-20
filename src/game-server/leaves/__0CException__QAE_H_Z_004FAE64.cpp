// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FAE64 .. +0x34 bytes.
extern "C" __declspec(naked) void __0CException__QAE_H_Z_004FAE64() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D 5B 03 00: call 0x530990
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x5b
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58211ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
