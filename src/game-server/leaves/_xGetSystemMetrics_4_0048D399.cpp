// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048D399 .. +0x63 bytes.
extern "C" __declspec(naked) void _xGetSystemMetrics_4_0048D399() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes E8 AE FE FF FF: call 0x48d250
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x48d3b2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 00 E5 5D 00: call dword ptr [0x5de500]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xe5
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes EB 44: jmp 0x48d3f6
        __asm _emit 0xeb
        __asm _emit 0x44
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        sub edx, 4ch
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 77 25: ja 0x48d3ec
        __asm _emit 0x77
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 24 85 FC D3 48 00: jmp dword ptr [eax*4 + 0x48d3fc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0xd3
        __asm _emit 0x48
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 1E: jmp 0x48d3f6
        __asm _emit 0xeb
        __asm _emit 0x1e
        xor eax, eax
        ; Exact mapped bytes EB 1A: jmp 0x48d3f6
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov dword ptr [ebp + 8], 0
        ; Exact mapped bytes EB 07: jmp 0x48d3ec
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
