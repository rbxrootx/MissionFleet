// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58487430 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_58487430_58487430() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 85 09 00 00: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
