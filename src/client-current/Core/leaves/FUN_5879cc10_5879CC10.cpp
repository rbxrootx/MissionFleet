// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879CC10 .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_5879cc10_5879CC10() {
    __asm {
        sub esp, 28h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 24h], eax
        mov ecx, dword ptr [esp + 30h]
        lea eax, [esp + 21h]
        push esi
        mov esi, dword ptr [esp + 30h]
        mov dword ptr [esp + 4], esi
        mov dword ptr [esp + 4], eax
        mov eax, dword ptr [esp + 38h]
        push edi
        test ecx, ecx
        ; Exact mapped bytes 75 25: jne 0x5879cc61
        __asm _emit 0x75
        __asm _emit 0x25
        cmp eax, 80000000h
        ; Exact mapped bytes 75 1E: jne 0x5879cc61
        __asm _emit 0x75
        __asm _emit 0x1e
        lea eax, [esp + 8]
        push eax
        push 80000000h
        push 0
        ; Exact mapped bytes E8 EC F4 FF FF: call 0x5879c140
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 14h]
        add esp, 0ch
        dec edx
        mov byte ptr [edx], 2dh
        ; Exact mapped bytes EB 3D: jmp 0x5879cc9e
        __asm _emit 0xeb
        __asm _emit 0x3d
        test eax, eax
        ; Exact mapped bytes 7F 26: jg 0x5879cc8b
        __asm _emit 0x7f
        __asm _emit 0x26
        ; Exact mapped bytes 7C 04: jl 0x5879cc6b
        __asm _emit 0x7c
        __asm _emit 0x04
        test ecx, ecx
        ; Exact mapped bytes 73 20: jae 0x5879cc8b
        __asm _emit 0x73
        __asm _emit 0x20
        neg ecx
        lea edx, [esp + 8]
        push edx
        adc eax, 0
        neg eax
        push eax
        push ecx
        ; Exact mapped bytes E8 C2 F4 FF FF: call 0x5879c140
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 14h]
        add esp, 0ch
        dec edx
        mov byte ptr [edx], 2dh
        ; Exact mapped bytes EB 13: jmp 0x5879cc9e
        __asm _emit 0xeb
        __asm _emit 0x13
        lea edx, [esp + 8]
        push edx
        push eax
        push ecx
        ; Exact mapped bytes E8 A9 F4 FF FF: call 0x5879c140
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 14h]
        add esp, 0ch
        mov ecx, edx
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 11 06: movups xmmword ptr [esi], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x06
        mov dword ptr [esi + 10h], 0
        mov dword ptr [esi + 14h], 0
        lea edi, [ecx + 1]
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x5879ccb7
        __asm _emit 0x75
        __asm _emit 0xf9
        sub ecx, edi
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 07 C5 D0 FF: call 0x584a91d0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xc5
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 2ch]
        mov eax, esi
        pop edi
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 78 43 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x43
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 28h
        ret
    }
}
