// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED3C0 .. +0x49 bytes.
extern "C" __declspec(naked) void __2_YAPAXI_Z_004ED3C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 0
        push 0
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 5D CE FB FF: call 0x4aa230
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xce
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 05: je 0x4ed3e4
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 21: jmp 0x4ed405
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes 83 3D 40 4A 5C 00 00: cmp dword ptr [0x5c4a40], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x4a
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x4ed3fe
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 40 4A 5C 00: call dword ptr [0x5c4a40]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x4a
        __asm _emit 0x5c
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x4ed400
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x4ed402
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C2: jmp 0x4ed3c4
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
