// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D52D0 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_587d52d0_587D52D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be6bch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 19: je 0x587d5302
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes E8 0B 43 08 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x43
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D6 15 FE FF: call 0x587b68e0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x15
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
