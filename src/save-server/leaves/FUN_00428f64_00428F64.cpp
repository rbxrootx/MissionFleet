// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00428F64 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_00428f64_00428F64() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0c7ch], 0
        ; Exact mapped bytes 74 12: je 0x428f90
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c7ch]
        ; Exact mapped bytes E8 58 3F 00 00: call 0x42cee8
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 56 BE 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xbe
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
