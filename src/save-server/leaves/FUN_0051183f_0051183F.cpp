// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051183F .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_0051183f_0051183F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58cd92h
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
        mov dword ptr [eax], 6373c4h
        mov dword ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B2 00 00 00: call 0x511927
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 FB E8 02 00: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0c4h]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 0F: jne 0x511894
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes E8 EB E8 02 00: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [eax + 0c4h], 0
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 0a4h], 0
        ; Exact mapped bytes 74 18: je 0x5118b8
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 F4 AB FB FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xab
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0ach
        ; Exact mapped bytes E8 22 B0 FB FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xb0
        __asm _emit 0xfb
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 6ch
        ; Exact mapped bytes E8 0B FC FA FF: call 0x4c14e4
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xfc
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 77 ED FB FF: call 0x4d065f
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xed
        __asm _emit 0xfb
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
