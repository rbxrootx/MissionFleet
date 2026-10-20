// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585ED6D0 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_585ed6d0_585ED6D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 12ch], 0
        ; Exact mapped bytes 75 09: jne 0x585ed6ee
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x585ed6f5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 12ch], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
