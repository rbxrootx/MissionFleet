// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B4430 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_588b4430() {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        test ebp, ebp
        ; Exact mapped bytes 0F 84 B3 00 00 00: je 0x588b44f3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [ebp + 354h]
        cmp eax, dword ptr [esi + 0d0h]
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x588b44f3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 100ch]
        movzx edx, word ptr [ecx + 4]
        push ebx
        push edi
        and edx, 1fh
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 66 ED FF FF: call 0x588b31d0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 EC F5 FF FF: call 0x588b3a60
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + edi*8 + 7ch]
        mov ebx, eax
        cmp ebx, dword ptr [ecx + 64h]
        ; Exact mapped bytes 74 72: je 0x588b44f1
        __asm _emit 0x74
        __asm _emit 0x72
        push ebx
        ; Exact mapped bytes E8 DB 2E 05 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x2e
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + edi*4 + 0b4h]
        push ebx
        ; Exact mapped bytes E8 CE 2E 05 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x2e
        __asm _emit 0x05
        __asm _emit 0x00
        xor eax, eax
        mov dword ptr [esi + edi*4 + 104h], eax
        mov dword ptr [esi + 120h], eax
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx eax, word ptr [eax + 105f0h]
        ; Exact mapped bytes 66 83 F8 08: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x08
        ; Exact mapped bytes 74 1D: je 0x588b44d0
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 66 83 F8 09: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x09
        ; Exact mapped bytes 74 17: je 0x588b44d0
        __asm _emit 0x74
        __asm _emit 0x17
        xor ecx, ecx
        ; Exact mapped bytes 66 83 F8 07: cmp ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x07
        setne cl
        mov dword ptr [esi + edi*4 + 0e8h], ecx
        pop edi
        pop ebx
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        mov cl, byte ptr [eax + 354h]
        xor edx, edx
        cmp cl, byte ptr [ebp + 354h]
        sete dl
        mov dword ptr [esi + edi*4 + 0e8h], edx
        pop edi
        pop ebx
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
