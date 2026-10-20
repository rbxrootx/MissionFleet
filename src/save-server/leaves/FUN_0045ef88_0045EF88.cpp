// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045EF88 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_0045ef88_0045EF88() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 38 BB 68 00: call dword ptr [0x68bb38]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 DA 9E FF FF: call 0x458e80
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
