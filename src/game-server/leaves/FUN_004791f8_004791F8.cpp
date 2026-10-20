// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004791F8 .. +0x1B4 bytes.
extern "C" __declspec(naked) void FUN_004791f8_004791F8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 40h]
        mov ecx, 10h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [eax], 581cbch
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 40: je 0x479266
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1A: je 0x479255
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 90 F5 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x47925c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 10h], 0
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 74 40: je 0x4792af
        __asm _emit 0x74
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1A: je 0x47929e
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 47 F5 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf5
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x4792a5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 14h], 0
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 74 40: je 0x4792f8
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1A: je 0x4792e7
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 FE F4 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x4792ee
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 18h], 0
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 0c20h], 0
        ; Exact mapped bytes 74 46: je 0x47934a
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 0c20h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 1A: je 0x479336
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov eax, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 AF F4 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x47933d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 0c20h], 0
        mov ecx, dword ptr [ebp - 2ch]
        cmp dword ptr [ecx + 0c2ch], 0
        ; Exact mapped bytes 74 46: je 0x47939c
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 0c2ch]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 1A: je 0x479388
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 5D F4 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x47938f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 0c2ch], 0
        pop edi
        pop esi
        add esp, 40h
        cmp ebp, esp
        ; Exact mapped bytes E8 38 F4 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf4
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
