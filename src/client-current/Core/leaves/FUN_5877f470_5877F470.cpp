// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877F470 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_5877f470_5877F470() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 118h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7B 22 04 00: call 0x587c1710
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x22
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
