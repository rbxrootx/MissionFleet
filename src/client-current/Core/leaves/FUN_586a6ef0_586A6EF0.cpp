// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586A6EF0 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_586a6ef0_586A6EF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 84h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 CC FF FF: call 0x586a3bf0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
