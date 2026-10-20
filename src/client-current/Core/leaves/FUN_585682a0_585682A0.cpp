// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585682A0 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_585682a0_585682A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 164h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 19: je 0x585682ce
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 164h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3900h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
