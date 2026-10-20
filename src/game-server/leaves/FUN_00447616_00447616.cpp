// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00447616 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_00447616_00447616() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 48h]
        mov edx, dword ptr [ecx + 40cc8h]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 14: je 0x447656
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ca0h]
        ; Exact mapped bytes E8 98 24 FE FF: call 0x429aec
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x447658
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 7E 11 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x11
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
