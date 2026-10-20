// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A7B43 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_004a7b43_004A7B43() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 38h
        mov dword ptr [ebp - 4], eax
        push 12dh
        push 5d052ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 FD 35 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x35
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, 80004001h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
