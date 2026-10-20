// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055D75D .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_0055d75d_0055D75D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 171h
        push 5cebf0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 E9 D9 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
