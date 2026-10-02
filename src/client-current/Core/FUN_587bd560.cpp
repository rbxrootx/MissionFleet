// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BD560 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_587bd560() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 0C: je 0x587bd57c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 B5 B3 00 00: call 0x587c8930
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 68h], 0
        ; Exact mapped bytes 74 0C: je 0x587bd591
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes E8 A0 B3 00 00: call 0x587c8930
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 6ch], 0
        ; Exact mapped bytes 74 0C: je 0x587bd5a6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 8B B3 00 00: call 0x587c8930
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
