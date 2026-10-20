// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B2710 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_587b2710_587B2710() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        movzx edx, byte ptr [ebp - 1]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3E 05 00 00: call 0x587b2c70
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        or eax, 1
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
