// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EE9E0 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_100ee9e0_100EE9E0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov ecx, dword ptr [esi + 5c04h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100ee9fc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 5c04h], edi
        mov ecx, dword ptr [esi + 5c08h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100eea12
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 5c08h], edi
        mov ecx, dword ptr [esi + 218h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100eea28
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 218h], edi
        mov ecx, dword ptr [esi + 5c0ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x100eea3e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 5c0ch], edi
        pop edi
        pop esi
        ret
    }
}
