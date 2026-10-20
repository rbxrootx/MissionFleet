// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587CF520 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_587cf520_587CF520() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be6ach
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 19: je 0x587cf552
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes E8 BB A0 08 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xa0
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 86 73 FE FF: call 0x587b68e0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x73
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
