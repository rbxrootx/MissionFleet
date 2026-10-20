// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F4BA9 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_004f4ba9_004F4BA9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 4C CE FF FF: call 0x4f1a04
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 11: je 0x4f4bd2
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AB 6F 04 00: call 0x53bb74
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7C 6F 04 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 36: jmp 0x4f4c08
        __asm _emit 0xeb
        __asm _emit 0x36
        push -10h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x4f4bf6
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0F: jmp 0x4f4c05
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 E4 26 5E 00: call dword ptr [0x5e26e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
