// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585707E0 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_585707e0_585707E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 7C 2C: jl 0x58570821
        __asm _emit 0x7c
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18ch]
        or edx, 30000h
        mov dword ptr [ebp - 8], edx
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        push 0
        push 8001b112h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 70 C1 2B 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xc1
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
