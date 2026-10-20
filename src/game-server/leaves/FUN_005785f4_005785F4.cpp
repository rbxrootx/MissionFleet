// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005785F4 .. +0x7B bytes.
extern "C" __declspec(naked) void FUN_005785f4_005785F4() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5803f9h
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
        mov dword ptr [eax], 58b93ch
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 27: je 0x578652
        __asm _emit 0x74
        __asm _emit 0x27
        push 5d11ech
        push 5d1220h
        ; Exact mapped bytes E8 DB 75 F5 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x75
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0C BA FB FF: call 0x534051
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xba
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 D4 21 5E 00: call dword ptr [0x5e21d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 36 89 F8 FF: call 0x500f97
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x89
        __asm _emit 0xf8
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
