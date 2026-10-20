// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5849C850 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_5849c850_5849C850() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4d0h], 3e8h
        ; Exact mapped bytes 73 15: jae 0x5849c87b
        __asm _emit 0x73
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4d0h]
        add edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4d0h], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
