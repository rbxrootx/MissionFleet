// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00523B22 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_00523b22_00523B22() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 133h
        push 5c8174h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 24 76 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x76
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
