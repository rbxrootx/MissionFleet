// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A48BD .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_004a48bd_004A48BD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 156h
        push 674ab0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 89 59 03 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x03
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
