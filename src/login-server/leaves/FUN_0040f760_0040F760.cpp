// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040F760 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_0040f760_0040F760() {
    __asm {
        push -1
        push 43a34bh
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
        push esi
        mov esi, ecx
        push 0ca0h
        ; Exact mapped bytes E8 69 E1 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 4], eax
        test eax, eax
        mov dword ptr [esp + 10h], 0
        ; Exact mapped bytes 74 2F: je 0x40f7c5
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [esi + 40h]
        push -1
        push -1
        push 0
        push 28h
        push 3e8h
        push 449990h
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 4D 1E 00 00: call 0x411600
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        mov ecx, dword ptr [esp + 4]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
