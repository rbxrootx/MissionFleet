// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049C6F0 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_0049c6f0_0049C6F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E8 59 88 0A 00: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0c0h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 0c0h], edx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
