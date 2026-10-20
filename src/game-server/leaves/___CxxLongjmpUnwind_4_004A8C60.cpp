// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A8C60 .. +0x26 bytes.
extern "C" __declspec(naked) void ___CxxLongjmpUnwind_4_004A8C60() {
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
        ; Exact mapped bytes E8 01 9A 00 00: call 0x4b2680
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x9a
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
