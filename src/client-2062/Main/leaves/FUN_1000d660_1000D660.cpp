// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000D660 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_1000d660_1000D660() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes FF 15 80 51 17 10: call dword ptr [0x10175180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esi + 68h]
        mov eax, dword ptr [esi + 50h]
        and edx, 0fffffffeh
        cmp eax, 4
        mov dword ptr [esi + 68h], edx
        ; Exact mapped bytes 74 4B: je 0x1000d6c5
        __asm _emit 0x74
        __asm _emit 0x4b
        cmp eax, 5
        ; Exact mapped bytes 74 46: je 0x1000d6c5
        __asm _emit 0x74
        __asm _emit 0x46
        cmp eax, 6
        ; Exact mapped bytes 74 41: je 0x1000d6c5
        __asm _emit 0x74
        __asm _emit 0x41
        cmp eax, 8
        ; Exact mapped bytes 74 0F: je 0x1000d698
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp eax, 9
        ; Exact mapped bytes 74 0A: je 0x1000d698
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp eax, 0ah
        ; Exact mapped bytes 74 05: je 0x1000d698
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [esi + 34h]
        pop esi
        ret
        mov ecx, dword ptr [esi + 30h]
        mov eax, dword ptr [esi + 5ch]
        test ecx, ecx
        mov dword ptr [esi + 58h], eax
        mov dword ptr [esi + 50h], 2
        ; Exact mapped bytes 74 42: je 0x1000d6ee
        __asm _emit 0x74
        __asm _emit 0x42
        mov dl, byte ptr [ecx + 24h]
        shr dl, 5
        test dl, 1
        ; Exact mapped bytes 74 37: je 0x1000d6ee
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ecx]
        push 0
        push 2
        push esi
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        xor eax, eax
        pop esi
        ret
        mov ecx, dword ptr [esi + 5ch]
        mov dword ptr [esi + 50h], 3
        mov dword ptr [esi + 58h], ecx
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x1000d6ee
        __asm _emit 0x74
        __asm _emit 0x15
        mov dl, byte ptr [ecx + 24h]
        shr dl, 5
        test dl, 1
        ; Exact mapped bytes 74 0A: je 0x1000d6ee
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        push 0
        push 2
        push esi
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        xor eax, eax
        pop esi
        ret
    }
}
