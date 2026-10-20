// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005606C3 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_005606c3_005606C3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 162h
        push 67b3c8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 83 9B F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x9b
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0d0h]
        mov esp, ebp
        pop ebp
        ret
    }
}
