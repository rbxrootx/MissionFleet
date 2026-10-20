// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B1660 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_100b1660_100B1660() {
    __asm {
        push -1
        push 10171b88h
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
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        mov dword ptr [esp + 0ch], ebp
        mov dword ptr [ebp], 10176134h
        mov dword ptr [esp + 18h], 0
        lea esi, [ebp + 58h]
        mov ebx, 2
        mov ecx, dword ptr [esi - 8]
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x100b16aa
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi - 8], 0
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100b16bc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], 0
        add esi, 4
        dec ebx
        ; Exact mapped bytes 75 D4: jne 0x100b1696
        __asm _emit 0x75
        __asm _emit 0xd4
        mov ecx, ebp
        mov dword ptr [esp + 18h], 0ffffffffh
        ; Exact mapped bytes E8 3F 15 05 00: call 0x10102c10
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x15
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
