// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00546523 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_00546523_00546523() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x546533
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3D: jmp 0x546570
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 44 2B F2 FF: call 0x469080
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x2b
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 4
        lea ecx, [eax + eax + 2]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 20 C3 68 00: call dword ptr [0x68c320]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 14: je 0x54656d
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 96 ED F1 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xed
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
