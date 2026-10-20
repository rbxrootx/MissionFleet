// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D66F0 .. +0x159 bytes.
extern "C" __declspec(naked) void FUN_588d66f0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 12a8h]
        push edi
        xor edi, edi
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d670e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 12a8h], edi
        mov ecx, dword ptr [esi + 12ach]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d6726
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 12ach], edi
        mov ecx, dword ptr [esi + 12b0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d673e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 12b0h], edi
        mov ecx, dword ptr [esi + 12b4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d6756
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 12b4h], edi
        mov ecx, dword ptr [esi + 12d8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d676e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 12d8h], edi
        mov ecx, dword ptr [esi + 12dch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d6786
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 12dch], edi
        mov ecx, dword ptr [esi + 12bch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d679e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 12bch], edi
        mov ecx, dword ptr [esi + 12b8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d67b6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 12b8h], edi
        mov ecx, dword ptr [esi + 12e0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d67ce
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 12e0h], edi
        mov ecx, dword ptr [esi + 12e4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d67e6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 12e4h], edi
        mov ecx, dword ptr [esi + 12e8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d67fe
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 12e8h], edi
        mov ecx, dword ptr [esi + 12ech]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d6816
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 12ech], edi
        mov ecx, dword ptr [esi + 1448h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d682e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1448h], edi
        mov ecx, dword ptr [esi + 12fch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d6846
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 12fch], edi
        pop edi
        pop esi
        ret
    }
}
