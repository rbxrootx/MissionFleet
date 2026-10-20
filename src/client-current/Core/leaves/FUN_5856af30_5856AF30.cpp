// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856AF30 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_5856af30_5856AF30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 22eh]
        imul edx, ecx, 0ah
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 391ch], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 28 02 00 00: mov dx, word ptr [ecx + 0x228]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx ecx, dx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 391ch]
        cdq
        idiv ecx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3920h], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
