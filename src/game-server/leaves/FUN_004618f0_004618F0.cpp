// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004618F0 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_004618f0_004618F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 3E: je 0x461942
        __asm _emit 0x74
        __asm _emit 0x3e
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, 20h
        mov eax, dword ptr [edx + 10h]
        mov edx, dword ptr [edx + 14h]
        ; Exact mapped bytes E8 23 AB 04 00: call 0x4ac440
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        and edx, 0
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [eax + 14h]
        and edx, 0
        push ecx
        push 80025100h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F7 58 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x461944
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 92 6E 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
