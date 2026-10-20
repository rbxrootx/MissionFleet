// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586822F0 .. +0x2FD bytes.
extern "C" __declspec(naked) void FUN_586822f0_586822F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 138h], 4
        ; Exact mapped bytes 0F 84 D2 02 00 00: je 0x586825e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 138h], 2
        ; Exact mapped bytes 0F 84 B8 02 00 00: je 0x586825e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0f8h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*4 + 0f8h]
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7F B7 EC FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xb7
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 0f8h], 0
        ; Exact mapped bytes 74 05: je 0x5868237d
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 69 02 00 00: jmp 0x586825e6
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 9a0h], 0
        ; Exact mapped bytes 0F 85 4F 02 00 00: jne 0x586825e6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 138h], 0
        ; Exact mapped bytes 0F 84 35 02 00 00: je 0x586825e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 138h], 8
        ; Exact mapped bytes 0F 84 1B 02 00 00: je 0x586825e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 198h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        xor ecx, 3a9e2b0dh
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0f4h]
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax*8 + 198h]
        mov dword ptr [eax + edx], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 A9 00 00 00: jne 0x586824c0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 90ch], 0
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x586824bb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 908h], 0
        ; Exact mapped bytes 75 7E: jne 0x586824bb
        __asm _emit 0x75
        __asm _emit 0x7e
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + ecx*8 + 158h]
        mov edx, dword ptr [ecx + edx]
        add edx, 1
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0f4h]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 158h]
        mov dword ptr [ecx + eax], edx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + ecx*8 + 198h]
        mov edx, dword ptr [ecx + edx]
        add edx, 1
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0f4h]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 198h]
        mov dword ptr [ecx + eax], edx
        ; Exact mapped bytes E9 A9 00 00 00: jmp 0x58682569
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 0F 85 9F 00 00 00: jne 0x58682569
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 158h]
        mov eax, 4
        shl eax, 0
        cmp dword ptr [edx + eax], 0
        ; Exact mapped bytes 74 7E: je 0x58682569
        __asm _emit 0x74
        __asm _emit 0x7e
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + eax*8 + 158h]
        mov ecx, dword ptr [eax + ecx]
        sub ecx, 1
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0f4h]
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax*8 + 158h]
        mov dword ptr [eax + edx], ecx
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + eax*8 + 198h]
        mov ecx, dword ptr [eax + ecx]
        sub ecx, 1
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 0f4h]
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax*8 + 198h]
        mov dword ptr [eax + edx], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 198h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        xor eax, 3a9e2b0dh
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 0f4h]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 198h]
        mov dword ptr [edx + ecx], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a48h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 158h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B3 8B 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x8b
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EB 00 00 00: call 0x586826d0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
