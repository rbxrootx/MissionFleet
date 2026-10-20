// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417839 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_00417839_00417839() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 24h]
        inc eax
        inc eax
        cmp eax, dword ptr [esi + 28h]
        ; Exact mapped bytes 76 05: jbe 0x41784b
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 33 CF 01 00: call 0x43477e
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 24h]
        ; Exact mapped bytes 66 8B 4C 24 08: mov cx, word ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        add dword ptr [esi + 24h], 2
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
