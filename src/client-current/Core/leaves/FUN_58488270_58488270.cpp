// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58488270 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_58488270_58488270() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 0B: je 0x5848828d
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 07: jmp 0x58488294
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 58894cd4h
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
