// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1016AD30 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_1016ad30_1016AD30() {
    __asm {
        push -1
        push 10174bc8h
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
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 10176924h
        mov dword ptr [esp + 10h], 0
        ; Exact mapped bytes E8 90 E7 F9 FF: call 0x101094f0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xe7
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, esi
        mov dword ptr [esp + 10h], 0ffffffffh
        mov dword ptr [esi], 10176990h
        ; Exact mapped bytes E8 7B E7 F9 FF: call 0x101094f0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe7
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 8]
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
        ret
    }
}
