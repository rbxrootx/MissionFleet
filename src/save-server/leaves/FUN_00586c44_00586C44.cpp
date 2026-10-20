// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00586C44 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_00586c44_00586C44() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58fed9h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 8
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 63df64h
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 27: je 0x586ca2
        __asm _emit 0x74
        __asm _emit 0x27
        push 67d9c4h
        push 67d9f8h
        ; Exact mapped bytes E8 8B 99 F1 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x99
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 76 11 FA FF: call 0x527e0b
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x11
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 58 B6 68 00: call dword ptr [0x68b658]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xb6
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C6 F2 F5 FF: call 0x4e5f77
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf2
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
