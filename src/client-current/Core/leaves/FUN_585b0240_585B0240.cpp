// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B0240 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_585b0240_585B0240() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 74 0D: je 0x585b025d
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 58h]
        ; Exact mapped bytes E8 65 47 ED FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x47
        __asm _emit 0xed
        __asm _emit 0xff
        ; Exact mapped bytes EB 03: jmp 0x585b0260
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
    }
}
