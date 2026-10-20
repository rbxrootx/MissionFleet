// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10033080 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_10033080_10033080() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 80h]
        test eax, eax
        ; Exact mapped bytes 75 29: jne 0x100330b6
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, dword ptr [esi + 68h]
        mov dword ptr [esi + 80h], 1
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x100330a5
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 0A: je 0x100330b6
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [ecx]
        push 0
        push 3
        push esi
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov eax, dword ptr [esi + 7ch]
        test eax, eax
        ; Exact mapped bytes 75 2F: jne 0x100330ec
        __asm _emit 0x75
        __asm _emit 0x2f
        mov eax, dword ptr [esi + 0bch]
        mov dword ptr [esi + 7ch], 1
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x100330ec
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [esi + 60h]
        test ecx, ecx
        ; Exact mapped bytes 75 17: jne 0x100330ec
        __asm _emit 0x75
        __asm _emit 0x17
        mov dword ptr [esi + 54h], eax
        mov eax, dword ptr [esi + 0b4h]
        mov dword ptr [esi + 50h], 0
        mov dword ptr [eax + 50h], 0
        pop esi
        ret
    }
}
