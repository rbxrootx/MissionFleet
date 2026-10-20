// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004292F4 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_004292f4_004292F4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 114h]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1E: je 0x42933b
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 17 06 00 00: call 0x429940
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 A0 04 00 00: call 0x4297d0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB DC: jmp 0x429317
        __asm _emit 0xeb
        __asm _emit 0xdc
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 AB BA 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
