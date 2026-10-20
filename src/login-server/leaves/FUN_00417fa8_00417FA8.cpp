// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417FA8 .. +0xDE bytes.
extern "C" __declspec(naked) void FUN_00417fa8_00417FA8() {
    __asm {
        mov eax, 43acb7h
        ; Exact mapped bytes E8 56 76 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 10h
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [ebp - 1ch], esi
        mov dword ptr [esi], 43eb4ch
        mov eax, dword ptr [esi + 2ch]
        mov dword ptr [ebp - 4], 1
        neg eax
        sbb eax, eax
        test eax, eax
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 74 40: je 0x418017
        __asm _emit 0x74
        __asm _emit 0x40
        lea edi, [esi + 20h]
        lea eax, [ebp - 14h]
        mov ecx, edi
        push eax
        lea eax, [ebp - 18h]
        push eax
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 73 58 01 00: call 0x42d860
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 75 18: jne 0x418011
        __asm _emit 0x75
        __asm _emit 0x18
        push dword ptr [ebp - 18h]
        mov ecx, edi
        ; Exact mapped bytes E8 1B 58 01 00: call 0x42d81e
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x418011
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 C3: jne 0x417fda
        __asm _emit 0x75
        __asm _emit 0xc3
        mov eax, dword ptr [esi + 2ch]
        neg eax
        sbb eax, eax
        test eax, eax
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 74 2A: je 0x41804f
        __asm _emit 0x74
        __asm _emit 0x2a
        lea edi, [esi + 20h]
        lea eax, [ebp - 14h]
        mov ecx, edi
        push eax
        lea eax, [ebp - 18h]
        push eax
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 25 58 01 00: call 0x42d860
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x418049
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 D9: jne 0x418028
        __asm _emit 0x75
        __asm _emit 0xd9
        lea edi, [esi + 20h]
        mov ecx, edi
        ; Exact mapped bytes E8 34 56 01 00: call 0x42d68d
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [esi + 44h]
        push eax
        ; Exact mapped bytes E8 FC F7 01 00: call 0x43785e
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        and byte ptr [ebp - 4], 0
        mov ecx, edi
        ; Exact mapped bytes E8 4B 56 01 00: call 0x42d6b8
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        mov ecx, esi
        ; Exact mapped bytes E8 CE 98 01 00: call 0x431946
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
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
        ret
    }
}
