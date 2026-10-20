// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F16E0 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_584f16e0_584F16E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a2790h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 21: je 0x584f171c
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 8], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 25 F9 33 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xf9
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
