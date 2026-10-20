// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054F5E0 .. +0x175 bytes.
extern "C" __declspec(naked) void FUN_0054f5e0_0054F5E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f7bbh
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
        sub esp, 168h
        mov dword ptr [ebp - 16ch], ecx
        mov ecx, dword ptr [ebp - 16ch]
        ; Exact mapped bytes E8 41 F1 FA FF: call 0x4fe750
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf1
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 16ch]
        add ecx, 14h
        ; Exact mapped bytes E8 E3 18 FE FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 16ch]
        mov dword ptr [eax], 58a084h
        mov ecx, dword ptr [ebp - 16ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 10h], edx
        mov ecx, dword ptr [ebp - 16ch]
        add ecx, 14h
        ; Exact mapped bytes E8 64 E0 F9 FF: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xe0
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 16ch]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 0F 84 D4 00 00 00: je 0x54f732
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], 0
        mov dword ptr [ebp - 5ch], 0
        mov dword ptr [ebp - 58h], 0
        mov dword ptr [ebp - 60h], 0
        push 0
        lea ecx, [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp - 16ch]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 16ch]
        mov edx, dword ptr [ecx + 10h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 30: call dword ptr [ecx + 0x30]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x30
        test eax, eax
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x54f732
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x54f732
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 58h], edx
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 75 0C: jne 0x54f6c2
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 170h], 0
        ; Exact mapped bytes EB 3E: jmp 0x54f700
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 58h]
        push eax
        ; Exact mapped bytes FF 15 D8 22 5E 00: call dword ptr [0x5e22d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        lea ecx, [eax + eax + 2]
        mov dword ptr [ebp - 64h], ecx
        mov eax, dword ptr [ebp - 64h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 E0 A0 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xa0
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], esp
        mov edx, dword ptr [ebp - 64h]
        push edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        mov ecx, dword ptr [ebp - 174h]
        push ecx
        ; Exact mapped bytes E8 B6 D0 F4 FF: call 0x49c7b0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xd0
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        mov edx, dword ptr [ebp - 170h]
        push edx
        lea eax, [ebp - 168h]
        push eax
        ; Exact mapped bytes E8 8C 02 FB FF: call 0x4ff99f
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        lea edx, [ebp - 168h]
        push edx
        mov ecx, dword ptr [ebp - 16ch]
        add ecx, 14h
        ; Exact mapped bytes E8 CB E3 F9 FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xe3
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 16ch]
        lea esp, [ebp - 174h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
