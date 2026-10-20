// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00445560 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_00445560_00445560() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 08: jmp 0x445575
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp + 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0B: je 0x445586
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB E7: jmp 0x44556d
        __asm _emit 0xeb
        __asm _emit 0xe7
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
