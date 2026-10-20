// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BAB70 .. +0xC9 bytes.
extern "C" __declspec(naked) void FUN_100bab70_100BAB70() {
    __asm {
        push esi
        mov esi, ecx
        push 220000h
        mov eax, dword ptr [esi + 148h]
        mov dword ptr [esi + 74h], 40000000h
        mov dword ptr [eax + 50h], 0
        mov eax, dword ptr [esi + 148h]
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E8 73 15 00 00: call 0x100bc110
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 40000000h
        ; Exact mapped bytes E8 93 B1 F9 FF: call 0x10055d40
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xb1
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [esi + 144h]
        mov ecx, 0fffeh
        mov dword ptr [esi + 138h], 1
        mov dword ptr [esi + 13ch], 0
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 14ch]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 148h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 34 93 1C 10: mov ecx, dword ptr [0x101c9334]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 20h]
        mov edx, dword ptr [ecx + 18h]
        mov ecx, dword ptr [esi + 4]
        sub eax, edx
        add eax, 0ah
        mov dword ptr [esi + 50h], ecx
        mov dword ptr [esi + 54h], eax
        ; Exact mapped bytes A1 34 93 1C 10: mov eax, dword ptr [0x101c9334]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 20h]
        mov ecx, dword ptr [eax + 18h]
        sub edx, ecx
        mov ecx, dword ptr [eax + 1ch]
        push edx
        mov edx, dword ptr [eax + 14h]
        sub ecx, edx
        push ecx
        mov ecx, dword ptr [esi + 64h]
        ; Exact mapped bytes E8 43 D3 F8 FF: call 0x10047f60
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xd3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 64h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e4fdh
        or eax, 405h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        pop esi
        ret
    }
}
