// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58555090 .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_58555090_58555090() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 85 CA 00 00 00: jne 0x5855517a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3f0h], 0
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x5855517a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 3f0h]
        ; Exact mapped bytes E8 D2 09 F4 FF: call 0x58495aa0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x09
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x5855517a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DF 18 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x18
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x5855510b
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 3f0h]
        ; Exact mapped bytes E8 BD 7E F3 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x7e
        __asm _emit 0xf3
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 18 F3 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x18
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A9 7E F3 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x7e
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 6F: jne 0x5855517a
        __asm _emit 0x75
        __asm _emit 0x6f
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CA 18 F3 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x18
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 55 F3 02 00: call 0x58584490
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 36: je 0x5855517a
        __asm _emit 0x74
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 2E: jne 0x5855517a
        __asm _emit 0x75
        __asm _emit 0x2e
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8A 0D F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x0d
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3e8h], 0
        ; Exact mapped bytes 74 17: je 0x5855517a
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3e8h]
        mov dword ptr [ebp - 18h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 67 0D F3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x0d
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
