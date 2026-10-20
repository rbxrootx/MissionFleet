// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00489BE4 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_00489be4_00489BE4() {
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
        ; Exact mapped bytes 74 1E: je 0x489c2b
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B7 04 00 00: call 0x48a0d0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 70 04 00 00: call 0x48a090
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB DC: jmp 0x489c07
        __asm _emit 0xeb
        __asm _emit 0xdc
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 AB EB 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
