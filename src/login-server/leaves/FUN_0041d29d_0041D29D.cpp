// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D29D .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_0041d29d_0041D29D() {
    __asm {
        mov eax, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x41d2a8
        __asm _emit 0x74
        __asm _emit 0x03
        and dword ptr [eax], 0
        mov ecx, dword ptr [ecx + 8ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x41d2cf
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [esp + 4]
        ; Exact mapped bytes 74 09: je 0x41d2c4
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes E8 20 FF FF FF: call 0x41d1e0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes EB EA: jmp 0x41d2ae
        __asm _emit 0xeb
        __asm _emit 0xea
        ; Exact mapped bytes E8 9E FF FF FF: call 0x41d267
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [ecx], eax
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
