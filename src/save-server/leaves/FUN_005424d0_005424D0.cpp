// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005424D0 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_005424d0_005424D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d8fch
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
        mov dword ptr [eax], 6358ach
        mov dword ptr [ebp - 4], 0
        mov ecx, 686da8h
        ; Exact mapped bytes E8 98 B1 FF FF: call 0x53d6a0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0F: je 0x542520
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 74 06: je 0x542520
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 81 78 F0 FF: call 0x449db0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x78
        __asm _emit 0xf0
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
