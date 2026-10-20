// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A4A40 .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_100a4a40_100A4A40() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 8]
        and eax, 0e2ffh
        add ecx, 9ah
        or eax, 207h
        push ecx
        mov ecx, dword ptr [esi + 8ch]
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes E8 56 A3 05 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xa3
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0a0h]
        push 258h
        push 320h
        ; Exact mapped bytes E8 51 A2 05 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 28h
        ; Exact mapped bytes 7E 12: jle 0x100a4a9f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100a4a9f
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes EB 02: jmp 0x100a4aa1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0d4ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 384h
        ; Exact mapped bytes E8 3F 2C FA FF: call 0x10047700
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x2c
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes A1 E4 56 1C 10: mov eax, dword ptr [0x101c56e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 64h
        push esi
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        ; Exact mapped bytes A1 14 57 1C 10: mov eax, dword ptr [0x101c5714]
        __asm _emit 0xa1
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 66 81 60 24 FD FF: and word ptr [eax + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0a8h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 98h]
        pop esi
        mov dword ptr [eax + 50h], 0
        ret
    }
}
