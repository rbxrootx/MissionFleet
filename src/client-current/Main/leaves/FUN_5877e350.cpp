// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5877E350 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_5877e350() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 74 5B: je 0x5877e3b6
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, dword ptr [esi + 78h]
        imul ecx, dword ptr [esi + 74h]
        mov eax, dword ptr [esi + 6ch]
        lea edx, [eax + 1]
        cmp edx, ecx
        ; Exact mapped bytes 7D 04: jge 0x5877e370
        __asm _emit 0x7d
        __asm _emit 0x04
        test eax, eax
        ; Exact mapped bytes 7F 10: jg 0x5877e380
        __asm _emit 0x7f
        __asm _emit 0x10
        mov eax, dword ptr [esi + 68h]
        mov ecx, dword ptr [esi + 70h]
        neg eax
        neg ecx
        mov dword ptr [esi + 68h], eax
        mov dword ptr [esi + 70h], ecx
        mov edx, dword ptr [esi + 70h]
        add edx, dword ptr [esi + 68h]
        mov ecx, dword ptr [esi + 58h]
        add dword ptr [esi + 6ch], edx
        mov eax, dword ptr [esi + 6ch]
        add ecx, eax
        mov dword ptr [esi + 50h], ecx
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x5877e3b6
        __asm _emit 0x74
        __asm _emit 0x1b
        push edi
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5877e3b8
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x5877e3a0
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
