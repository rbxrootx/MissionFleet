// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588009F0 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_588009f0_588009F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be71ch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 19: je 0x58800a22
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes E8 EB 8B 05 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x8b
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B6 5E FB FF: call 0x587b68e0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x5e
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
