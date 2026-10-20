// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F3640 .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_100f3640_100F3640() {
    __asm {
        push -1
        push 101740feh
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
        mov dword ptr [ebx], 101765f4h
        mov ecx, dword ptr [ebx + 1438h]
        xor edi, edi
        cmp ecx, edi
        mov dword ptr [esp + 1ch], edi
        ; Exact mapped bytes 74 0C: je 0x100f3682
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 1438h], edi
        mov ecx, dword ptr [ebx + 143ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100f3698
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 143ch], edi
        lea esi, [ebx + 0c08h]
        mov ebp, 100h
        mov ecx, dword ptr [esi - 400h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100f36b9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi - 400h], edi
        mov ecx, dword ptr [esi]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x100f36c7
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], edi
        mov ecx, dword ptr [esi + 41ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100f36dd
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 41ch], edi
        add esi, 4
        dec ebp
        ; Exact mapped bytes 75 C0: jne 0x100f36a3
        __asm _emit 0x75
        __asm _emit 0xc0
        mov ecx, dword ptr [ebx + 101ch]
        mov dword ptr [ebx + 1008h], 101765f8h
        push ecx
        ; Exact mapped bytes E8 8B 90 07 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        add esp, 4
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
        pop ebp
        pop ebx
        add esp, 10h
        ret
    }
}
