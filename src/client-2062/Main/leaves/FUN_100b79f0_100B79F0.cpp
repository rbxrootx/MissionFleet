// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B79F0 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_100b79f0_100B79F0() {
    __asm {
        push esi
        mov esi, ecx
        push 0
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 4]
        and eax, 0e1ffh
        mov dword ptr [esi + 50h], ecx
        or eax, 105h
        mov dword ptr [esi + 54h], 0
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 C1 38 04 00: call 0x100fb2e0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        test eax, eax
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 74 15: je 0x100b7a3d
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 68h]
        mov eax, dword ptr [ecx + 18h]
        mov edx, dword ptr [ecx + 20h]
        sub eax, edx
        mov edx, dword ptr [esi + 54h]
        add eax, edx
        ; Exact mapped bytes EB 09: jmp 0x100b7a46
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 68h]
        mov eax, dword ptr [esi + 54h]
        mov edx, dword ptr [ecx + 4]
        push eax
        push edx
        ; Exact mapped bytes E8 10 05 F9 FF: call 0x10047f60
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 68h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 6ch]
        mov edx, dword ptr [esi + 54h]
        push edx
        mov eax, dword ptr [ecx + 4]
        push eax
        ; Exact mapped bytes E8 F8 04 F9 FF: call 0x10047f60
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 6ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [esi + 84h]
        mov ecx, 2
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov esi, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 09 4E 24: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4e
        __asm _emit 0x24
        pop esi
        ret
    }
}
