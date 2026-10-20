// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58546150 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_58546150_58546150() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 74 13: je 0x58546178
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 3D 5F F4 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x5f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x5854617f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0ffffffffh
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
