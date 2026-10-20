// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055132C .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_0055132c_0055132C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 22h
        push 67bf9ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 1D 8F F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 24h], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
