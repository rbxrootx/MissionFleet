// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58509F40 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_58509f40_58509F40() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes E8 AD F6 34 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xf6
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        push eax
        ; Exact mapped bytes E8 9E F6 34 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf6
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        push edx
        ; Exact mapped bytes E8 8F F6 34 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf6
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov esp, ebp
        pop ebp
        ret
    }
}
