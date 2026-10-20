// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055D5C5 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_0055d5c5_0055D5C5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 15bh
        push 5cebf0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 81 DB F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xdb
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 84h
        mov esp, ebp
        pop ebp
        ret
    }
}
