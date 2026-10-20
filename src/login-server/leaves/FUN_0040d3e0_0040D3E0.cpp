// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040D3E0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_0040d3e0_0040D3E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 FE 00 00 00: call 0x40d4f0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 43cf34h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 18h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
