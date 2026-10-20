// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00500F97 .. +0x61 bytes.
extern "C" __declspec(naked) void __1CDC__UAE_XZ_00500F97() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d11eh
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
        mov dword ptr [eax], 58458ch
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 0F: je 0x500fdb
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 49 FF FF FF: call 0x500f1d
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 60 20 5E 00: call dword ptr [0x5e2060]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BD F9 02 00: call 0x5309a7
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf9
        __asm _emit 0x02
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
