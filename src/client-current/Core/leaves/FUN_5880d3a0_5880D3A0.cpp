// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5880D3A0 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_5880d3a0_5880D3A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be72ch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 19: je 0x5880d3d2
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        ; Exact mapped bytes E8 3B C2 04 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 95 FA FF: call 0x587b68e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x95
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
