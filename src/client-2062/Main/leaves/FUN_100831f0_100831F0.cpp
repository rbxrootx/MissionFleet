// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100831F0 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_100831f0_100831F0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, eax
        and ecx, 1f00h
        cmp ecx, 200h
        ; Exact mapped bytes 75 3D: jne 0x10083244
        __asm _emit 0x75
        __asm _emit 0x3d
        mov ecx, dword ptr [esi + 88h]
        and eax, 0e4fdh
        or ah, 4
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes E8 A2 8B F9 FF: call 0x1001bdc0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x8b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 78h]
        ; Exact mapped bytes E8 9A 8B F9 FF: call 0x1001bdc0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x8b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 7ch]
        ; Exact mapped bytes E8 92 8B F9 FF: call 0x1001bdc0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x8b
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 E4 56 1C 10: mov edx, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0f230h
        push esi
        mov ecx, dword ptr [edx + 30h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        pop esi
        ret
    }
}
