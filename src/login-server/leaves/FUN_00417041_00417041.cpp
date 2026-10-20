// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417041 .. +0x11B bytes.
extern "C" __declspec(naked) void FUN_00417041_00417041() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push edi
        mov edi, dword ptr [ebp + 8]
        mov eax, dword ptr [edi + 34h]
        test eax, eax
        ; Exact mapped bytes 0F 84 02 01 00 00: je 0x417157
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 2ch]
        neg eax
        sbb eax, eax
        test eax, eax
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x417117
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov ecx, dword ptr [edi + 34h]
        lea eax, [ebp + 8]
        push eax
        lea eax, [ebp - 8]
        push eax
        lea eax, [ebp - 4]
        push eax
        add ecx, 20h
        ; Exact mapped bytes E8 E1 67 01 00: call 0x42d860
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov esi, dword ptr [eax + 8ch]
        test esi, esi
        ; Exact mapped bytes 74 3A: je 0x4170c6
        __asm _emit 0x74
        __asm _emit 0x3a
        push dword ptr [ebp + 8]
        mov ecx, esi
        ; Exact mapped bytes E8 2D 61 00 00: call 0x41d1c3
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 04: mov ax, word ptr [esi + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 15: je 0x4170b4
        __asm _emit 0x74
        __asm _emit 0x15
        movzx eax, ax
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 27 70 01 00: call 0x42e0d1
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        push dword ptr [eax + 38h]
        mov ecx, esi
        ; Exact mapped bytes E8 18 61 00 00: call 0x41d1cc
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8ch]
        ; Exact mapped bytes E8 1E 61 00 00: call 0x41d1e0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x61
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        ; Exact mapped bytes EB C2: jmp 0x417088
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 80 90 00 00 00: mov ax, word ptr [eax + 0x90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 37: je 0x41710c
        __asm _emit 0x74
        __asm _emit 0x37
        movzx eax, ax
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 F1 6F 01 00: call 0x42e0d1
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [esi + 38h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 90 B0 00 00 00: call dword ptr [eax + 0xb0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [esi + 38h]
        push 1
        mov dword ptr [ecx + 90h], eax
        mov eax, dword ptr [esi + 38h]
        push dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 88h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 85 52 FF FF FF: jne 0x417068
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov eax, dword ptr [edi + 34h]
        mov eax, dword ptr [eax + 2ch]
        neg eax
        sbb eax, eax
        test eax, eax
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 74 2F: je 0x417157
        __asm _emit 0x74
        __asm _emit 0x2f
        mov ecx, dword ptr [edi + 34h]
        lea eax, [ebp + 8]
        push eax
        lea eax, [ebp - 8]
        push eax
        lea eax, [ebp - 4]
        push eax
        add ecx, 20h
        ; Exact mapped bytes E8 21 67 01 00: call 0x42d860
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 88h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x417151
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 D1: jne 0x417128
        __asm _emit 0x75
        __asm _emit 0xd1
        pop edi
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
