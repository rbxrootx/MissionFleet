// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5863DC90 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_5863dc90_5863DC90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 0F BF 05 38 05 96 58: movsx eax, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, 6
        ; Exact mapped bytes 75 2B: jne 0x5863dcd0
        __asm _emit 0x75
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 6ch], 0
        ; Exact mapped bytes 74 22: je 0x5863dcd0
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes E8 77 FF EC FF: call 0x5850dc30
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 21 09 F4 FF: call 0x5857e5f0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x09
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
