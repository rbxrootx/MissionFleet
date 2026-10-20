// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58868C7D .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_58868c7d_58868C7D() {
    __asm {
        push 0
        mov eax, 58892dceh
        ; Exact mapped bytes E8 AF 98 FC FF: call 0x58832538
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes A1 58 74 90 58: mov eax, dword ptr [0x58907458]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        xor esi, esi
        mov dword ptr [ebp - 4], esi
        cmp eax, -1
        ; Exact mapped bytes 74 0F: je 0x58868ca7
        __asm _emit 0x74
        __asm _emit 0x0f
        push eax
        ; Exact mapped bytes E8 02 6B 00 00: call 0x5886f7a0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x58868ca7
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, -1
        ; Exact mapped bytes EB 07: jmp 0x58868cae
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E8 BD FD FF FF: call 0x58868a69
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x58868cb9
        __asm _emit 0x74
        __asm _emit 0x09
        imul esi, dword ptr [ebp + 0ch], 364h
        add esi, eax
        mov eax, esi
        ; Exact mapped bytes E8 55 98 FC FF: call 0x58832515
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0xff
        ret
    }
}
