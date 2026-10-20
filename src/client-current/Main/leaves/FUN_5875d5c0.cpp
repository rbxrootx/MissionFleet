// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875D5C0 .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_5875d5c0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 D8 F7 FF FF: call 0x5875cda0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 60h]
        cmp eax, 2
        ; Exact mapped bytes 75 1E: jne 0x5875d5ee
        __asm _emit 0x75
        __asm _emit 0x1e
        cmp dword ptr [esi + 58h], 0
        ; Exact mapped bytes 75 0F: jne 0x5875d5e5
        __asm _emit 0x75
        __asm _emit 0x0f
        cmp dword ptr [esi + 5ch], 0
        ; Exact mapped bytes 75 09: jne 0x5875d5e5
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [esi + 60h], 6
        ; Exact mapped bytes EB 2A: jmp 0x5875d60f
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov dword ptr [esi + 60h], 5
        ; Exact mapped bytes EB 21: jmp 0x5875d60f
        __asm _emit 0xeb
        __asm _emit 0x21
        cmp eax, 1
        ; Exact mapped bytes 75 1C: jne 0x5875d60f
        __asm _emit 0x75
        __asm _emit 0x1c
        cmp dword ptr [esi + 58h], 0
        ; Exact mapped bytes 75 0F: jne 0x5875d608
        __asm _emit 0x75
        __asm _emit 0x0f
        cmp dword ptr [esi + 5ch], 0
        ; Exact mapped bytes 75 09: jne 0x5875d608
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [esi + 60h], 3
        ; Exact mapped bytes EB 07: jmp 0x5875d60f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [esi + 60h], 4
        mov eax, dword ptr [esi + 60h]
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x5875d624
        __asm _emit 0x75
        __asm _emit 0x0e
        mov dword ptr [esi + 70h], 2
        mov eax, 2
        pop esi
        ret
        cmp eax, 3
        ; Exact mapped bytes 74 3F: je 0x5875d668
        __asm _emit 0x74
        __asm _emit 0x3f
        cmp eax, 5
        ; Exact mapped bytes 74 3A: je 0x5875d668
        __asm _emit 0x74
        __asm _emit 0x3a
        cmp eax, 4
        ; Exact mapped bytes 74 0A: je 0x5875d63d
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp eax, 6
        ; Exact mapped bytes 74 05: je 0x5875d63d
        __asm _emit 0x74
        __asm _emit 0x05
        or eax, 0ffffffffh
        pop esi
        ret
        mov ecx, dword ptr [esi + 4]
        add eax, 1bh
        push eax
        ; Exact mapped bytes E8 67 41 FD FF: call 0x587317b0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x41
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 A1 E4 00 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 CA 53 00 00: call 0x58762a20
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        cmp dword ptr [esi + 6ch], eax
        sete al
        mov dword ptr [esi + 70h], eax
        mov eax, 1
        pop esi
        ret
        mov ecx, dword ptr [esi + 4]
        add eax, 1bh
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 13: jle 0x5875d689
        __asm _emit 0x7e
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 7C 0F: jl 0x5875d689
        __asm _emit 0x7c
        __asm _emit 0x0f
        mov ecx, dword ptr [ecx + 18ch]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x5875d689
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx + eax*4]
        ; Exact mapped bytes EB 02: jmp 0x5875d68b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push eax
        ; Exact mapped bytes E8 5F E4 00 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 88 53 00 00: call 0x58762a20
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        mov dword ptr [esi + 70h], ecx
        xor eax, eax
        pop esi
        ret
    }
}
