// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586201E0 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_586201e0_586201E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0a4h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 8], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D8 5C E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x5c
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
