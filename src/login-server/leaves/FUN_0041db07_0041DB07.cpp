// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041DB07 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_0041db07_0041DB07() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov ecx, esi
        ; Exact mapped bytes E8 3B 08 01 00: call 0x42e34e
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x41db29
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [esi + 38h]
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x41db29
        __asm _emit 0x74
        __asm _emit 0x0b
        test byte ptr [eax + 71h], 20h
        ; Exact mapped bytes 74 05: je 0x41db29
        __asm _emit 0x74
        __asm _emit 0x05
        push 1
        pop eax
        pop esi
        ret
        xor eax, eax
        pop esi
        ret
    }
}
