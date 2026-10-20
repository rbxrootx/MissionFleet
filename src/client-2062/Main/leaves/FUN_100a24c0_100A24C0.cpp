// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A24C0 .. +0x215 bytes.
extern "C" __declspec(naked) void FUN_100a24c0_100A24C0() {
    __asm {
        push -1
        push 10171268h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 10h], ebx
        mov dword ptr [ebx], 10176018h
        xor edi, edi
        lea esi, [ebx + 0b0h]
        mov dword ptr [esp + 1ch], edi
        mov ebp, 2
        mov ecx, dword ptr [esi - 8]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x100a2507
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi - 8], edi
        mov ecx, dword ptr [esi]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x100a2515
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], edi
        mov ecx, dword ptr [esi + 8]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x100a2525
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 8], edi
        mov ecx, dword ptr [esi + 10h]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x100a2535
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 10h], edi
        mov ecx, dword ptr [esi + 18h]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x100a2545
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 18h], edi
        mov ecx, dword ptr [esi + 20h]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x100a2555
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 20h], edi
        mov ecx, dword ptr [esi + 28h]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x100a2565
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 28h], edi
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x100a2575
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 30h], edi
        add esi, 4
        dec ebp
        ; Exact mapped bytes 0F 85 78 FF FF FF: jne 0x100a24f7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 0e8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100a2595
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 0e8h], edi
        mov ecx, dword ptr [ebx + 0ech]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100a25ab
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 0ech], edi
        mov ecx, dword ptr [ebx + 0f0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100a25c1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 0f0h], edi
        mov ecx, dword ptr [ebx + 0f4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100a25d7
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 0f4h], edi
        mov ecx, dword ptr [ebx + 0f8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100a25ed
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 0f8h], edi
        mov ecx, dword ptr [ebx + 0fch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100a2603
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 0fch], edi
        mov ecx, dword ptr [ebx + 100h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100a2619
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 100h], edi
        mov ecx, dword ptr [ebx + 104h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100a262f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 104h], edi
        mov ecx, dword ptr [ebx + 108h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100a2645
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 108h], edi
        mov ecx, dword ptr [ebx + 10ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100a265b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 10ch], edi
        mov ecx, dword ptr [ebx + 110h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100a2671
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 110h], edi
        mov ecx, dword ptr [ebx + 114h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100a2687
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 114h], edi
        mov ecx, dword ptr [ebx + 118h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100a269d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 118h], edi
        mov ecx, dword ptr [ebx + 11ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100a26b3
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 11ch], edi
        mov ecx, ebx
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 5E C4 FF FF: call 0x1009eb20
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 14h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
