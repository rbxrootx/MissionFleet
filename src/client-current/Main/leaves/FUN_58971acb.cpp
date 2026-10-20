// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58971ACB .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_58971acb() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 C6 FF FF FF: call 0x58971aa4
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 1ch]
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x58971af4
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edi, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 55 B1 00 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov eax, edi
        test edi, edi
        ; Exact mapped bytes 75 F1: jne 0x58971ae5
        __asm _emit 0x75
        __asm _emit 0xf1
        mov eax, dword ptr [esi + 20h]
        and dword ptr [esi + 1ch], 0
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x58971b0e
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edi, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 3B B1 00 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
    }
}
