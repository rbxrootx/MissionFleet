// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED19F .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_004ed19f_004ED19F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D E4 CB 5D 00 00: cmp dword ptr [0x5dcbe4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 07: je 0x4ed1b3
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 38: jmp 0x4ed1eb
        __asm _emit 0xeb
        __asm _emit 0x38
        push -1
        ; Exact mapped bytes E8 86 E5 FB FF: call 0x4ab740
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xe5
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 10: je 0x4ed1d6
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        or al, 1
        push eax
        ; Exact mapped bytes E8 6F E5 FB FF: call 0x4ab740
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xe5
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes EB 0F: jmp 0x4ed1e5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0fffffffeh
        push ecx
        ; Exact mapped bytes E8 5E E5 FB FF: call 0x4ab740
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xe5
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        and eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
