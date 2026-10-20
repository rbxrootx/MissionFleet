// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587852B0 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_587852b0() {
    __asm {
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax + 21c48h]
        mov eax, dword ptr [esi + 80h]
        lea edx, [esi + 88h]
        push edx
        push eax
        lea edx, [esi + 4]
        push edx
        ; Exact mapped bytes E8 6B 0B FF FF: call 0x58775e40
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x587852f8
        __asm _emit 0x74
        __asm _emit 0x1f
        xor ecx, ecx
        lea edx, [esi + 8ch]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 74 0B: je 0x587852f1
        __asm _emit 0x74
        __asm _emit 0x0b
        inc ecx
        add edx, 4
        cmp ecx, 8
        ; Exact mapped bytes 7C F2: jl 0x587852e1
        __asm _emit 0x7c
        __asm _emit 0xf2
        pop esi
        ret
        mov dword ptr [esi + ecx*4 + 8ch], eax
        pop esi
        ret
    }
}
