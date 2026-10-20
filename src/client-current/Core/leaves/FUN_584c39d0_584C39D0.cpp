// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C39D0 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_584c39d0_584C39D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 58895ac0h
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 74 41: je 0x584c3a2c
        __asm _emit 0x74
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 32: je 0x584c3a2c
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1B: je 0x584c3a2a
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], ecx
        push 0ch
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 14 D6 36 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xd6
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB C8: jmp 0x584c39f4
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9C 1D 2F 00: call 0x587b57d0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x1d
        __asm _emit 0x2f
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
