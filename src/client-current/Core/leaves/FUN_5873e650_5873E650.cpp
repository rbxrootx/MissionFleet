// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873E650 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5873e650_5873E650() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 05 71 00 00: call 0x58745770
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
