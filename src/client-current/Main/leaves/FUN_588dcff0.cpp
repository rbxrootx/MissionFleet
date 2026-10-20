// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DCFF0 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_588dcff0() {
    __asm {
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        sub esp, 0ch
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr [eax + 21c4ch]
        lea edx, [esp + 8]
        push edx
        lea edi, [esi + 4]
        push edi
        ; Exact mapped bytes E8 B0 A1 EA FF: call 0x587871c0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xa1
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 18h]
        test eax, eax
        ; Exact mapped bytes 74 70: je 0x588dd088
        __asm _emit 0x74
        __asm _emit 0x70
        mov eax, dword ptr [esi + 398h]
        xor eax, 0aaaaaaaah
        add eax, eax
        cmp eax, dword ptr [esi + 63c4h]
        ; Exact mapped bytes 7E 5B: jle 0x588dd088
        __asm _emit 0x7e
        __asm _emit 0x5b
        xor eax, eax
        lea edx, [esi + 63c8h]
        cmp dword ptr [edx], ecx
        ; Exact mapped bytes 74 09: je 0x588dd042
        __asm _emit 0x74
        __asm _emit 0x09
        inc eax
        add edx, 4
        cmp eax, 8
        ; Exact mapped bytes 7C F3: jl 0x588dd035
        __asm _emit 0x7c
        __asm _emit 0xf3
        mov edx, eax
        and edx, 80000001h
        ; Exact mapped bytes 79 05: jns 0x588dd051
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffeh
        inc edx
        mov edi, dword ptr [edi]
        imul edx, edx, 32h
        lea edx, [edx + edi - 19h]
        mov dword ptr [esp + 0ch], edx
        cdq
        sub eax, edx
        mov edx, dword ptr [esi + 8]
        sar eax, 1
        lea eax, [eax + eax*4]
        lea eax, [edx + eax*4 - 46h]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [esp + 10h], eax
        push edx
        lea eax, [esp + 10h]
        push eax
        ; Exact mapped bytes E8 50 56 EA FF: call 0x587826d0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x56
        __asm _emit 0xea
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E8 03 57 EA FF: call 0x58782790
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x57
        __asm _emit 0xea
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 0ch
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
