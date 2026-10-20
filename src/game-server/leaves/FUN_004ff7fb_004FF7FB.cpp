// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FF7FB .. +0x1A4 bytes.
extern "C" __declspec(naked) void FUN_004ff7fb_004FF7FB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 184h
        mov dword ptr [ebp - 17ch], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 178h], 0
        mov eax, dword ptr [ebp + 10h]
        mov byte ptr [eax], 0
        push 800h
        push 160h
        lea ecx, [ebp - 174h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 10 25 5E 00: call dword ptr [0x5e2510]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x4ff85c
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 16ch]
        and eax, 10000h
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4ff863
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 30 01 00 00: jmp 0x4ff993
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        push ecx
        push 587910h
        push 0
        push 587920h
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 1C FC FF FF: call 0x4ff497
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7D 07: jge 0x4ff886
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 0D 01 00 00: jmp 0x4ff993
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 10h]
        push edx
        push 58e938h
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 0F 8C E3 00 00 00: jl 0x4ff985
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 178h], eax
        cmp dword ptr [ebp - 178h], 0
        ; Exact mapped bytes 75 0C: jne 0x4ff8c0
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 180h], 0
        ; Exact mapped bytes EB 4E: jmp 0x4ff90e
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 178h]
        push ecx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 17ch], eax
        mov eax, dword ptr [ebp - 17ch]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 D8 9E FA FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x9e
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], esp
        mov edx, dword ptr [ebp - 17ch]
        push edx
        mov eax, dword ptr [ebp - 178h]
        push eax
        mov ecx, dword ptr [ebp - 184h]
        push ecx
        ; Exact mapped bytes E8 B8 16 F9 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        push 0
        mov edx, dword ptr [ebp - 180h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7C 52: jl 0x4ff979
        __asm _emit 0x7c
        __asm _emit 0x52
        push 2
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1B C2 03 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc2
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes FF 51 4C: call dword ptr [ecx + 0x4c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x4c
        test eax, eax
        ; Exact mapped bytes 7C 37: jl 0x4ff979
        __asm _emit 0x7c
        __asm _emit 0x37
        push 0
        push 0
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov eax, 1
        ; Exact mapped bytes EB 1A: jmp 0x4ff993
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        xor eax, eax
        lea esp, [ebp - 184h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
