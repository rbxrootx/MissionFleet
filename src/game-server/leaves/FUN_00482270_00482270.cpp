// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00482270 .. +0x23B bytes.
extern "C" __declspec(naked) void FUN_00482270_00482270() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c3d0h
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
        sub esp, 40h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 4ch]
        mov ecx, 10h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [eax], 581df0h
        mov dword ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 20ch], 0
        ; Exact mapped bytes 74 46: je 0x482303
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 20ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 1A: je 0x4822ef
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 F6 64 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4822f6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ecx + 20ch], 0
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 210h], 0
        ; Exact mapped bytes 74 47: je 0x482356
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 210h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 1B: je 0x482342
        __asm _emit 0x74
        __asm _emit 0x1b
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 A3 64 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x482349
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [eax + 210h], 0
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 18ech], 0
        ; Exact mapped bytes 74 46: je 0x4823a8
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 18ech]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 1A: je 0x482394
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 51 64 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 07: jmp 0x48239b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 44h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ecx + 18ech], 0
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 214h], 0
        ; Exact mapped bytes 74 46: je 0x4823fa
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 214h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 1A: je 0x4823e6
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 FF 63 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 07: jmp 0x4823ed
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 48h], 0
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [eax + 214h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 18f8h]
        ; Exact mapped bytes E8 77 70 06 00: call 0x4e947f
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 18f8h], 0
        ; Exact mapped bytes 74 47: je 0x48245b
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 18f8h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 1B: je 0x482447
        __asm _emit 0x74
        __asm _emit 0x1b
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 30h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 9E 63 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB 07: jmp 0x48244e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [eax + 18f8h], 0
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 18fch
        ; Exact mapped bytes E8 D3 EA F8 FF: call 0x410f40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xea
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 18d0h
        ; Exact mapped bytes E8 E1 39 00 00: call 0x485e60
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 4
        ; Exact mapped bytes E8 BB B3 06 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xb3
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 4ch
        cmp ebp, esp
        ; Exact mapped bytes E8 39 63 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
