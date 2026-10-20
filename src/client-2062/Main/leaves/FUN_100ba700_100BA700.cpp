// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BA700 .. +0x311 bytes.
extern "C" __declspec(naked) void FUN_100ba700_100BA700() {
    __asm {
        push -1
        push 10172248h
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
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], 10176210h
        mov ecx, dword ptr [esi + 124h]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes 74 0C: je 0x100ba740
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 124h], ebp
        mov ecx, dword ptr [esi + 128h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba756
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 128h], ebp
        mov ecx, dword ptr [esi + 12ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba76c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 12ch], ebp
        mov ecx, dword ptr [esi + 144h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba782
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 144h], ebp
        mov ecx, dword ptr [esi + 148h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba798
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 148h], ebp
        mov ecx, dword ptr [esi + 14ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba7ae
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 14ch], ebp
        mov ecx, dword ptr [esi + 140h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba7c4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 140h], ebp
        mov ecx, dword ptr [esi + 64h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100ba7d4
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 64h], ebp
        mov ecx, dword ptr [esi + 118h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba7ea
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 118h], ebp
        mov ecx, dword ptr [esi + 114h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba800
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 114h], ebp
        mov ecx, dword ptr [esi + 150h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba816
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 150h], ebp
        mov ecx, dword ptr [esi + 154h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba82c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 154h], ebp
        mov ecx, dword ptr [esi + 158h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba842
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 158h], ebp
        mov ecx, dword ptr [esi + 15ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba858
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 15ch], ebp
        mov ecx, dword ptr [esi + 160h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba86e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 160h], ebp
        mov ecx, dword ptr [esi + 164h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba884
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 164h], ebp
        mov ecx, dword ptr [esi + 130h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba89a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 130h], ebp
        mov ecx, dword ptr [esi + 16ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba8b0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 16ch], ebp
        mov ecx, dword ptr [esi + 170h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba8c6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 170h], ebp
        mov ecx, dword ptr [esi + 168h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba8dc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 168h], ebp
        mov ecx, dword ptr [esi + 198h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba8f2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 198h], ebp
        mov ecx, dword ptr [esi + 19ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba908
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 19ch], ebp
        mov ecx, dword ptr [esi + 1a0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba91e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 1a0h], ebp
        push ebx
        push edi
        lea edi, [esi + 1a4h]
        mov ebx, 6
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100ba939
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi], ebp
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x100ba92b
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [esi + 194h]
        pop edi
        cmp ecx, ebp
        pop ebx
        ; Exact mapped bytes 74 0C: je 0x100ba957
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 194h], ebp
        mov ecx, dword ptr [esi + 184h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba96d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 184h], ebp
        mov ecx, dword ptr [esi + 188h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba983
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 188h], ebp
        mov ecx, dword ptr [esi + 18ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba999
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 18ch], ebp
        mov ecx, dword ptr [esi + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba9af
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 190h], ebp
        mov ecx, dword ptr [esi + 178h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba9c5
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 178h], ebp
        mov ecx, dword ptr [esi + 17ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba9db
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 17ch], ebp
        mov ecx, dword ptr [esi + 1c8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100ba9f1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 1c8h], ebp
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 A0 84 04 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        pop esi
        pop ebp
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
