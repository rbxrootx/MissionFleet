// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585040B0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_585040b0_585040B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 08: jl 0x585040c7
        __asm _emit 0x7c
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 07: jmp 0x585040ce
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 60h], 40000000h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
