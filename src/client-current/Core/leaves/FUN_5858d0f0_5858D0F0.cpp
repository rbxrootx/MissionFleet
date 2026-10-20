// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858D0F0 .. +0x1EB bytes.
extern "C" __declspec(naked) void FUN_5858d0f0_5858D0F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58884157h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 8
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588aaf5ch
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 64h
        ; Exact mapped bytes E8 44 FF FF FF: call 0x5858d070
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 74h
        ; Exact mapped bytes E8 72 FF FF FF: call 0x5858d0b0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 84h
        ; Exact mapped bytes E8 E0 FE FF FF: call 0x5858d030
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 94h
        ; Exact mapped bytes E8 8E FE FF FF: call 0x5858cff0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 0ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 0dh], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 10h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 14h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 18h], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 24h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 28h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2ch], 64h
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5858d1ea
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 74 3A: je 0x5858d22a
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 30h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4 + 38h], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 40h], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 48h], 0
        ; Exact mapped bytes EB B7: jmp 0x5858d1e1
        __asm _emit 0xeb
        __asm _emit 0xb7
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 50h], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax + 54h], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 54h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 5ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 60h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 64h
        ; Exact mapped bytes E8 F7 47 FD FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x47
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 74h
        ; Exact mapped bytes E8 EC 47 FD FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x47
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 84h
        ; Exact mapped bytes E8 DE 47 FD FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x47
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 94h
        ; Exact mapped bytes E8 D0 47 FD FF: call 0x58561a70
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x47
        __asm _emit 0xfd
        __asm _emit 0xff
        push 8
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 0a4h
        push eax
        ; Exact mapped bytes E8 5E FB 2B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xfb
        __asm _emit 0x2b
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ach], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
