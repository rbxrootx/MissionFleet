// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585090C0 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_585090c0_585090C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 60 77 32 00: call 0x58830832
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x77
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
