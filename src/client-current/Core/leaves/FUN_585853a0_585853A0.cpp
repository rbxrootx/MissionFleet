// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585853A0 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_585853a0_585853A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585853bb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 4
        ; Exact mapped bytes 7D 10: jge 0x585853d1
        __asm _emit 0x7d
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 0ch], 0
        ; Exact mapped bytes EB E1: jmp 0x585853b2
        __asm _emit 0xeb
        __asm _emit 0xe1
        mov esp, ebp
        pop ebp
        ret
    }
}
