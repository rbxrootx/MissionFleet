// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00464F40 .. +0x26 bytes.
extern "C" __declspec(naked) void ___CxxLongjmpUnwind_4_00464F40() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 28h]
        push eax
        push 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 18h]
        push edx
        ; Exact mapped bytes E8 81 9B 00 00: call 0x46eae0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
