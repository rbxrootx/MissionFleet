// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58798B90 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_58798b90_58798B90() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588916f3h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0bch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [ebp - 2ch], esi
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 30h], esi
        mov byte ptr [esi + 8], 4
        or dword ptr [esi + 8], 100h
        mov dword ptr [esi + 0ch], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [esi + 10h], 0
        mov dword ptr [esi + 14h], 0
        test edx, edx
        ; Exact mapped bytes 74 39: je 0x58798c2c
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, edx
        lea edi, [ecx + 1]
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x58798bf8
        __asm _emit 0x75
        __asm _emit 0xf9
        sub ecx, edi
        push ecx
        push edx
        ; Exact mapped bytes E8 B8 15 00 00: call 0x5879a1c0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi], eax
        add esp, 8
        mov eax, esi
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
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 2A 84 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 1
        lea ecx, [ebp - 0c8h]
        ; Exact mapped bytes E8 C7 47 D8 FF: call 0x5851d400
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x47
        __asm _emit 0xd8
        __asm _emit 0xff
        lea eax, [ebp - 0c8h]
        mov byte ptr [ebp - 4], 3
        push 588b6dc4h
        push eax
        ; Exact mapped bytes E8 A2 B9 D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xb9
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 28h]
        lea ecx, [ebp - 0c8h]
        push eax
        ; Exact mapped bytes E8 A0 55 D8 FF: call 0x5851e200
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x55
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        mov byte ptr [ebp - 4], 4
        ; Exact mapped bytes E8 C6 20 00 00: call 0x5879ad30
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
