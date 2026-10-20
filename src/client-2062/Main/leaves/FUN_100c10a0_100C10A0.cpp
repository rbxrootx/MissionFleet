// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C10A0 .. +0x13D bytes.
extern "C" __declspec(naked) void FUN_100c10a0_100C10A0() {
    __asm {
        push -1
        push 101724f8h
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
        mov dword ptr [ebx], 10176298h
        mov dword ptr [esp + 1ch], 0
        lea esi, [ebx + 64h]
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100c10e8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], 0
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E8: jne 0x100c10d6
        __asm _emit 0x75
        __asm _emit 0xe8
        lea esi, [ebx + 74h]
        mov ebp, 9
        mov ebx, 20h
        mov edi, 2
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100c1112
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], 0
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 E8: jne 0x100c1100
        __asm _emit 0x75
        __asm _emit 0xe8
        dec ebx
        ; Exact mapped bytes 75 E0: jne 0x100c10fb
        __asm _emit 0x75
        __asm _emit 0xe0
        dec ebp
        ; Exact mapped bytes 75 D8: jne 0x100c10f6
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ebp, dword ptr [esp + 10h]
        mov ebx, 20h
        lea esi, [ebp + 0a74h]
        mov edi, 2
        mov ecx, dword ptr [esi - 100h]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x100c114c
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi - 100h], 0
        mov ecx, dword ptr [esi]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x100c115e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], 0
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 CE: jne 0x100c1132
        __asm _emit 0x75
        __asm _emit 0xce
        dec ebx
        ; Exact mapped bytes 75 C6: jne 0x100c112d
        __asm _emit 0x75
        __asm _emit 0xc6
        mov ecx, dword ptr [ebp + 0b80h]
        xor esi, esi
        cmp ecx, esi
        ; Exact mapped bytes 74 0C: je 0x100c117f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 0b80h], esi
        mov ecx, dword ptr [ebp + 0b84h]
        cmp ecx, esi
        ; Exact mapped bytes 74 0C: je 0x100c1195
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 0b84h], esi
        mov ecx, dword ptr [ebp + 0b88h]
        cmp ecx, esi
        ; Exact mapped bytes 74 0C: je 0x100c11ab
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp + 0b88h], esi
        mov ecx, dword ptr [ebp + 60h]
        cmp ecx, esi
        ; Exact mapped bytes 74 09: je 0x100c11bb
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp + 60h], esi
        mov ecx, ebp
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 D6 1C 04 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x1c
        __asm _emit 0x04
        __asm _emit 0x00
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
