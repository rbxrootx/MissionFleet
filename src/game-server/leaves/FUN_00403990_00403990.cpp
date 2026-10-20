// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00403990 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_00403990_00403990() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp + 8]
        imul edx, edx, 37ch
        cmp dword ptr [ecx + edx + 2e4h], 0
        ; Exact mapped bytes 75 07: jne 0x4039c1
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4039c3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
