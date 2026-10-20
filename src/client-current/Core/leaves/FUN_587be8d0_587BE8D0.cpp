// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BE8D0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_587be8d0_587BE8D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be260h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0f0h], 0
        ; Exact mapped bytes 74 27: je 0x587be915
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f0h]
        mov dword ptr [ebp - 8], eax
        push 14h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 2F 27 07 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x27
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0f0h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 43 62 FF FF: call 0x587b4b60
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
