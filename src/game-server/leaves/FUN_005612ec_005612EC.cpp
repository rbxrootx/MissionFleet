// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005612EC .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_005612ec_005612EC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 54h
        push 5cc7a4h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 5D 9E F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x9e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 28h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
