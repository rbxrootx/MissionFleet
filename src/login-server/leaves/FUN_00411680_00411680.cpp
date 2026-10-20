// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411680 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_00411680_00411680() {
    __asm {
        push -1
        push 43a3a8h
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
        push 0
        push 800h
        mov dword ptr [esp + 0ch], esi
        ; Exact mapped bytes E8 17 01 00 00: call 0x4117c0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        mov dword ptr [esp + 10h], 0
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi], 43d474h
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 25 C2 01 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        add esp, 4
        mov dword ptr [esi + 0ch], eax
        mov dword ptr [esi + 94h], 1ch
        mov eax, esi
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
