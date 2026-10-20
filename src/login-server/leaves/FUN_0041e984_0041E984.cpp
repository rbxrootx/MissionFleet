// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E984 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_0041e984_0041E984() {
    __asm {
        push esi
        ; Exact mapped bytes E8 D1 28 00 00: call 0x42125b
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 35 90 11 45 00: push dword ptr [0x451190]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes E8 53 2D 00 00: call 0x4216e8
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 90 11 45 00: mov edx, dword ptr [0x451190]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        pop ecx
        ; Exact mapped bytes 8B 0D 8C 11 45 00: mov ecx, dword ptr [0x45118c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        mov esi, ecx
        sub esi, edx
        add esi, 4
        cmp eax, esi
        ; Exact mapped bytes 73 3D: jae 0x41e9ea
        __asm _emit 0x73
        __asm _emit 0x3d
        push edx
        ; Exact mapped bytes E8 35 2D 00 00: call 0x4216e8
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 10h
        push eax
        ; Exact mapped bytes FF 35 90 11 45 00: push dword ptr [0x451190]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes E8 76 2E 00 00: call 0x421838
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x41e9cd
        __asm _emit 0x75
        __asm _emit 0x04
        xor esi, esi
        ; Exact mapped bytes EB 2C: jmp 0x41e9f9
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D 8C 11 45 00: mov ecx, dword ptr [0x45118c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 2B 0D 90 11 45 00: sub ecx, dword ptr [0x451190]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes A3 90 11 45 00: mov dword ptr [0x451190], eax
        __asm _emit 0xa3
        __asm _emit 0x90
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        sar ecx, 2
        lea ecx, [eax + ecx*4]
        ; Exact mapped bytes 89 0D 8C 11 45 00: mov dword ptr [0x45118c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        mov eax, dword ptr [esp + 8]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes 83 05 8C 11 45 00 04: add dword ptr [0x45118c], 4
        __asm _emit 0x83
        __asm _emit 0x05
        __asm _emit 0x8c
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x04
        mov esi, eax
        ; Exact mapped bytes E8 66 28 00 00: call 0x421264
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop esi
        ret
    }
}
