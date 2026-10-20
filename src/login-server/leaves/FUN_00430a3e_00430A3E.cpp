// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430A3E .. +0xA4 bytes.
extern "C" __declspec(naked) void FUN_00430a3e_00430A3E() {
    __asm {
        mov eax, 43a8f0h
        ; Exact mapped bytes E8 C0 EB FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xeb
        __asm _emit 0xfe
        __asm _emit 0xff
        sub esp, 3ch
        push esi
        push edi
        push 0
        ; Exact mapped bytes E8 12 E8 FF FF: call 0x42f266
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 6C: je 0x430ac4
        __asm _emit 0x74
        __asm _emit 0x6c
        mov edi, dword ptr [ebp + 8]
        lea esi, [eax + 4]
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 13 CD FF FF: call 0x42d779
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 5E: jne 0x430ac8
        __asm _emit 0x75
        __asm _emit 0x5e
        push edi
        ; Exact mapped bytes FF 15 08 C5 43 00: call dword ptr [0x43c508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 00 CD FF FF: call 0x42d779
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x430ac4
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x430ac4
        __asm _emit 0x74
        __asm _emit 0x40
        push edi
        lea ecx, [eax + 20h]
        ; Exact mapped bytes E8 EC CC FF FF: call 0x42d779
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 31: je 0x430ac4
        __asm _emit 0x74
        __asm _emit 0x31
        push edi
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 59 E4 FF FF: call 0x42eef5
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp + 0ch]
        and dword ptr [ebp - 4], 0
        lea ecx, [ebp - 48h]
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes E8 63 FF FF FF: call 0x430a11
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [ebp - 2ch], 0
        or dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 48h]
        mov esi, eax
        ; Exact mapped bytes E8 8A EE FF FF: call 0x42f94a
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes EB 0E: jmp 0x430ad2
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor eax, eax
        ; Exact mapped bytes EB 0A: jmp 0x430ad2
        __asm _emit 0xeb
        __asm _emit 0x0a
        push dword ptr [ebp + 0ch]
        mov ecx, eax
        ; Exact mapped bytes E8 3F FF FF FF: call 0x430a11
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
