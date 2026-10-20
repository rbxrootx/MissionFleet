// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EDD00 .. +0x1A6 bytes.
extern "C" __declspec(naked) void FUN_100edd00_100EDD00() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        push 1
        mov dword ptr [esi + 5c70h], 50000h
        ; Exact mapped bytes E8 5A C6 FF FF: call 0x100ea370
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        lea edi, [esi + 158h]
        mov ebx, 20h
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x100edd2c
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 EF: jne 0x100edd21
        __asm _emit 0x75
        __asm _emit 0xef
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov ecx, dword ptr [ecx + 104e0h]
        mov dword ptr [esi + 54h], ecx
        ; Exact mapped bytes E8 59 12 01 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5c70h]
        mov dword ptr [esi + 5c6ch], 0
        cmp eax, 40000h
        ; Exact mapped bytes 75 17: jne 0x100edd75
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [esi + 0f10h]
        mov eax, 0ffffffh
        mov dword ptr [edx + 60h], eax
        mov ecx, dword ptr [esi + 0f14h]
        mov dword ptr [ecx + 60h], eax
        mov eax, dword ptr [esi + 0efch]
        mov ecx, 0fffeh
        mov dword ptr [esi + 5c58h], 0
        xor edi, edi
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0f00h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 1008h]
        test eax, eax
        ; Exact mapped bytes 7E 28: jle 0x100eddcc
        __asm _emit 0x7e
        __asm _emit 0x28
        xor eax, eax
        mov eax, dword ptr [esi + eax*4 + 158h]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x100eddba
        __asm _emit 0x74
        __asm _emit 0x09
        push 0
        mov ecx, eax
        ; Exact mapped bytes E8 56 5C F5 FF: call 0x10043a10
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x5c
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 1008h]
        inc edi
        mov eax, edi
        and eax, 0ffffh
        cmp eax, ecx
        ; Exact mapped bytes 7C DA: jl 0x100edda6
        __asm _emit 0x7c
        __asm _emit 0xda
        mov ecx, dword ptr [esi + 5c04h]
        lea edi, [esi + 4]
        push edi
        push edi
        ; Exact mapped bytes E8 74 68 F2 FF: call 0x10014650
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [esi + 5c04h]
        mov ebx, 0fh
        push 0
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 5c04h]
        ; Exact mapped bytes E8 28 6C F2 FF: call 0x10014a20
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x6c
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 5c08h]
        push edi
        push edi
        ; Exact mapped bytes E8 4B 68 F2 FF: call 0x10014650
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x68
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [esi + 5c08h]
        push 0
        ; Exact mapped bytes 66 09 58 24: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 5c08h]
        ; Exact mapped bytes E8 04 6C F2 FF: call 0x10014a20
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x6c
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 4], esi
        ; Exact mapped bytes 75 64: jne 0x100ede8b
        __asm _emit 0x75
        __asm _emit 0x64
        mov ecx, esi
        ; Exact mapped bytes E8 C2 01 00 00: call 0x100edff0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5c04h]
        push 1
        ; Exact mapped bytes E8 E5 6B F2 FF: call 0x10014a20
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x6b
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 5c04h]
        push 0
        ; Exact mapped bytes E8 38 6C F2 FF: call 0x10014a80
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x6c
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 5c08h]
        push 1
        ; Exact mapped bytes E8 CB 6B F2 FF: call 0x10014a20
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x6b
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 5c08h]
        push 2
        ; Exact mapped bytes E8 1E 6C F2 FF: call 0x10014a80
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x6c
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1
        mov ecx, dword ptr [eax + 20b00h]
        ; Exact mapped bytes E8 7C 23 F5 FF: call 0x100401f0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x23
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        mov ecx, dword ptr [ecx + 20b00h]
        ; Exact mapped bytes E8 D9 25 F5 FF: call 0x10040460
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x25
        __asm _emit 0xf5
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ret
        mov eax, dword ptr [esi + 0e9ch]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x100edea2
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 5c04h]
        push 1
        ; Exact mapped bytes E8 DE 6B F2 FF: call 0x10014a80
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x6b
        __asm _emit 0xf2
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ret
    }
}
