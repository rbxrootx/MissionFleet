// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00533431 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_00533431_00533431() {
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
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 A8 B6 68 00: call dword ptr [0x68b6a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 68 58 FB FF: call 0x4e8cbe
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
