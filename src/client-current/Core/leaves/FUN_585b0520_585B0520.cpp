// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B0520 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_585b0520_585B0520() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 2d8h]
        ; Exact mapped bytes E8 89 44 ED FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x585b0544
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x585b054b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
