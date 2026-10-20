// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AA100 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_584aa100_584AA100() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 1150h], 0
        ; Exact mapped bytes 74 19: je 0x584aa135
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 1150h]
        ; Exact mapped bytes E8 AD 00 00 00: call 0x584aa1e0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x584aa13a
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 58895250h
        mov esp, ebp
        pop ebp
        ret
    }
}
