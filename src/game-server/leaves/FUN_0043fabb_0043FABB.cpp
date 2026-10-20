// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043FABB .. +0x159 bytes.
extern "C" __declspec(naked) void FUN_0043fabb_0043FABB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57aaa8h
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
        sub esp, 18h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x43fb03
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 0F 8D E0 00 00 00: jge 0x43fbed
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2f6h
        push 5b6084h
        push 0da0h
        ; Exact mapped bytes E8 12 D5 0A 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xd5
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1E: je 0x43fb52
        __asm _emit 0x74
        __asm _emit 0x1e
        push 500h
        push 5b6200h
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 40h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F3 17 FC FF: call 0x401340
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x17
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x43fb59
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 26 AF 04 00: call 0x48aa9e
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xaf
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 14h]
        push eax
        push 5b6210h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0d78h]
        add edx, 80h
        push edx
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 3D 8C 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0x00
        push 0
        push 46bh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5E 44 FC FF: call 0x404010
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x44
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 57 3D FC FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E6 19 FC FF: call 0x4015a9
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x19
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 40cb8h]
        mov dword ptr [eax + 0d98h], edx
        push 80h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d74h]
        ; Exact mapped bytes E8 95 98 03 00: call 0x47947d
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes E9 0D FF FF FF: jmp 0x43fafa
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 5b6240h
        ; Exact mapped bytes E8 86 DC 0C 00: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xdc
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 24h
        cmp ebp, esp
        ; Exact mapped bytes E8 D0 8B 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x8b
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
