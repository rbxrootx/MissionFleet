// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879F250 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_5879f250_5879F250() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov esi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 48h], esi
        test esi, esi
        ; Exact mapped bytes 74 5E: je 0x5879f2c9
        __asm _emit 0x74
        __asm _emit 0x5e
        mov eax, dword ptr [esi + 44h]
        mov dword ptr [ebp - 4ch], eax
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x5879f2b4
        __asm _emit 0x74
        __asm _emit 0x3f
        cmp dword ptr [esi + 48h], 0
        ; Exact mapped bytes 76 39: jbe 0x5879f2b4
        __asm _emit 0x76
        __asm _emit 0x39
        cmp eax, esi
        ; Exact mapped bytes 74 35: je 0x5879f2b4
        __asm _emit 0x74
        __asm _emit 0x35
        lea eax, [ebp - 44h]
        push 0
        push eax
        ; Exact mapped bytes E8 26 FA 0A 00: call 0x5884ecb0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xfa
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 48h]
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x5879f2b4
        __asm _emit 0x75
        __asm _emit 0x20
        push dword ptr [ebp - 4ch]
        lea eax, [ebp - 44h]
        mov dword ptr [esi + 44h], eax
        mov dword ptr [esi + 48h], 0
        push esi
        mov dword ptr [esi + 40h], 5884ec9bh
        ; Exact mapped bytes E8 1F 77 00 00: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [esi + 48h], 0
        mov dword ptr [esi + 44h], 0
        mov dword ptr [esi + 40h], 0
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 7C 1D 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x1d
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
