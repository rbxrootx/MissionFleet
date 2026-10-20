// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005445C0 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_005445c0_005445C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 93 FF FF: call 0x53d910
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 C7 41 08 00 00: mov word ptr [ecx + 8], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x41
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 639834h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
