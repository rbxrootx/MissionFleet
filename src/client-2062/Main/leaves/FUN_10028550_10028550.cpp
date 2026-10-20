// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10028550 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_10028550_10028550() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes FF 15 80 51 17 10: call dword ptr [0x10175180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e4ffh
        or ah, 4
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, dword ptr [esi + 444h]
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x100285c3
        __asm _emit 0x74
        __asm _emit 0x50
        push 100h
        mov ecx, esi
        mov dword ptr [esi + 444h], 0
        ; Exact mapped bytes E8 97 6B 0D 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x6b
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 40 CE 1A 10: mov ecx, dword ptr [0x101ace40]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov ecx, dword ptr [eax + 0d48h]
        ; Exact mapped bytes E8 FB 86 08 00: call 0x100b0ca0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push esi
        ; Exact mapped bytes E8 1D 7E 05 00: call 0x100803d0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 08 57 1C 10: mov ecx, dword ptr [0x101c5708]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [ecx + 0d4h], 0
        pop esi
        ret
    }
}
