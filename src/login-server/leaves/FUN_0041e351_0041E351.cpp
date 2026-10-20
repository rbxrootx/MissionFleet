// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041E351 .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_0041e351_0041E351() {
    __asm {
        push esi
        push edi
        ; Exact mapped bytes E8 5B 79 01 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        push 0bh
        mov esi, eax
        ; Exact mapped bytes E8 42 8C 01 00: call 0x436fa3
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        lea edi, [esi + 103ch]
        mov esi, dword ptr [edi]
        test esi, esi
        ; Exact mapped bytes 74 16: je 0x41e383
        __asm _emit 0x74
        __asm _emit 0x16
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E2 85 01 00: call 0x436957
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 EE: je 0x41e367
        __asm _emit 0x74
        __asm _emit 0xee
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        ; Exact mapped bytes EB E4: jmp 0x41e367
        __asm _emit 0xeb
        __asm _emit 0xe4
        push 0bh
        ; Exact mapped bytes E8 89 8C 01 00: call 0x437013
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        ret
    }
}
