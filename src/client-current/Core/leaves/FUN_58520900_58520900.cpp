// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58520900 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_58520900_58520900() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 0F: je 0x5852091f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4ch]
        push edx
        ; Exact mapped bytes E8 FA 93 33 00: call 0x58859d16
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x93
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
