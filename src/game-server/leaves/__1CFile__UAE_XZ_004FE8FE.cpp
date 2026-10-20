// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FE8FE .. +0x72 bytes.
extern "C" __declspec(naked) void __1CFile__UAE_XZ_004FE8FE() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e8e3h
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
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 587934h
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], -1
        ; Exact mapped bytes 74 11: je 0x4fe944
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 08: je 0x4fe944
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0D 08 00 00: call 0x4ff151
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 0ch
        ; Exact mapped bytes E8 F9 EE FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 45 20 03 00: call 0x5309a7
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
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
