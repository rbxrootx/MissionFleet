// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C6F60 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_587c6f60_587C6F60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 114h], 3e8h
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x587c7029
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov esi, dword ptr [ecx + 4]
        mov edx, dword ptr [ebp - 18h]
        add esi, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 25 FA CB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xfa
        __asm _emit 0xcb
        __asm _emit 0xff
        sub esi, eax
        mov eax, dword ptr [ebp + 10h]
        add esi, dword ptr [eax]
        mov dword ptr [ebp - 1ch], esi
        mov ecx, dword ptr [ebp - 18h]
        mov esi, dword ptr [ecx + 8]
        mov edx, dword ptr [ebp - 18h]
        add esi, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F7 50 CC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x50
        __asm _emit 0xcc
        __asm _emit 0xff
        sub esi, eax
        mov eax, dword ptr [ebp + 10h]
        add esi, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], esi
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F8 E8 CC FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xff
        add eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 CA E8 CC FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xff
        add eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0C 3F DA FF: call 0x5856af00
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x3f
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        push 0
        push 1000000h
        mov eax, dword ptr [ebp - 18h]
        add eax, 11ch
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 EB 3E DA FF: call 0x5856af00
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x3e
        __asm _emit 0xda
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 1C A0 06 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
