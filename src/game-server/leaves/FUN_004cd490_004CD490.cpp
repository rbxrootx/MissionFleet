// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD490 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_004cd490_004CD490() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 08: je 0x4cd4a8
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes EB 05: jmp 0x4cd4ad
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 58ee4ch
        mov esp, ebp
        pop ebp
        ret
    }
}
