// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58506F50 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_58506f50_58506F50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a3d04h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x58506f80
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F5 0D 00 00: call 0x58507d70
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58506f87
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
