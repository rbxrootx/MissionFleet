// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586CEDD0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_586cedd0_586CEDD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 40h], 0
        ; Exact mapped bytes 74 16: je 0x586cedf8
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 40h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B9 5F 0E 00: call 0x587b4db0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x5f
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
