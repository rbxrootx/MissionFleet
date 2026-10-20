// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D12CD .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_004d12cd_004D12CD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 156h
        push 5c7f78h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 79 9E 02 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x9e
        __asm _emit 0x02
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
