// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00578B1D .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_00578b1d_00578B1D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 18dh
        push 67cd20h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 29 17 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x17
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 30h
        mov esp, ebp
        pop ebp
        ret
    }
}
