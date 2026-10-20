// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055D691 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_0055d691_0055D691() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 166h
        push 5cebf0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 B5 DA F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xda
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 0b4h
        mov esp, ebp
        pop ebp
        ret
    }
}
