// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052A13F .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_0052a13f_0052A13F() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57deb2h
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
        mov dword ptr [eax], 58630ch
        mov dword ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 93 00 00 00: call 0x52a208
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 0a4h], 0
        ; Exact mapped bytes 74 18: je 0x52a199
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 73 32 FC FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x32
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0ach
        ; Exact mapped bytes E8 A1 36 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x36
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 6ch
        ; Exact mapped bytes E8 3A CF FB FF: call 0x4e70f4
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 66 85 FC FF: call 0x4f272f
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xfc
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
