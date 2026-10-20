// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DD174 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_004dd174_004DD174() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        push 2002h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 42 EA 05 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
