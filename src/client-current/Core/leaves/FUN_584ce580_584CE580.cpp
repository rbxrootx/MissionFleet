// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CE580 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_584ce580_584CE580() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, 1
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov byte ptr [ecx + eax], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 78h], 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 0F FD FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
