// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873C8A0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_5873c8a0_5873C8A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 95 98 E0 FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x98
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7E 81 D4 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x81
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [eax + 20h]
        mov esp, ebp
        pop ebp
        ret
    }
}
