// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587ABC20 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_587abc20() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebp, dword ptr [esi + 10h]
        push edi
        cmp dword ptr [esi + 0ch], ebp
        ; Exact mapped bytes 76 05: jbe 0x587abc36
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 3C 10 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x10
        __asm _emit 0x1d
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0ch]
        mov ebx, dword ptr [esi]
        cmp edi, dword ptr [esi + 10h]
        ; Exact mapped bytes 76 05: jbe 0x587abc45
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 2D 10 1D 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x10
        __asm _emit 0x1d
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        push ebp
        push ebx
        push edi
        push eax
        lea eax, [esp + 20h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 59 31 00 00: call 0x587aedb0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x31
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret
    }
}
