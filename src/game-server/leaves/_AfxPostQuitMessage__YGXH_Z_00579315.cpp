// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00579315 .. +0x35 bytes.
extern "C" __declspec(naked) void _AfxPostQuitMessage__YGXH_Z_00579315() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes E8 9B 04 F8 FF: call 0x4f97b9
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x57933a
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 58h], 0
        ; Exact mapped bytes 74 0A: je 0x57933a
        __asm _emit 0x74
        __asm _emit 0x0a
        push 1
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 51 58: call dword ptr [ecx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x58
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 B4 28 5E 00: call dword ptr [0x5e28b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
