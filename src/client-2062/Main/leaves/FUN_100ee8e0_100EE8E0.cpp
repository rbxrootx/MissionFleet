// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EE8E0 .. +0xFB bytes.
extern "C" __declspec(naked) void FUN_100ee8e0_100EE8E0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov ecx, dword ptr [esi + 0eech]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100ee8fc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0eech], edi
        mov ecx, dword ptr [esi + 0ef0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100ee912
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0ef0h], edi
        mov ecx, dword ptr [esi + 0ef4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100ee928
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0ef4h], edi
        mov ecx, dword ptr [esi + 0ef8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100ee93e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0ef8h], edi
        mov ecx, dword ptr [esi + 0f00h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100ee954
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0f00h], edi
        mov ecx, dword ptr [esi + 0efch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100ee96a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0efch], edi
        mov ecx, dword ptr [esi + 0f0ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100ee980
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0f0ch], edi
        mov ecx, dword ptr [esi + 0f10h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100ee996
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0f10h], edi
        mov ecx, dword ptr [esi + 0f14h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100ee9ac
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0f14h], edi
        mov ecx, dword ptr [esi + 1034h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100ee9c2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 1034h], edi
        mov ecx, dword ptr [esi + 0f24h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100ee9d8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0f24h], edi
        pop edi
        pop esi
        ret
    }
}
