// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857CD60 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_5857cd60_5857CD60() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        push eax
        push 80010f06h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 09 FC 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xfc
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
