// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055284A .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_0055284a_0055284A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1ch
        push 5cf7c4h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 FF 88 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x88
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 34h], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
