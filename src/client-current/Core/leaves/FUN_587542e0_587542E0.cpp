// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587542E0 .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_587542e0_587542E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x587542fb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 7D 2F: jge 0x58754330
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 0b50h], 0
        ; Exact mapped bytes 74 1D: je 0x5875432e
        __asm _emit 0x74
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 0b50h]
        mov dword ptr [ebp - 0ch], edx
        push 0
        push -1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C3 64 DA FF: call 0x584fa7f0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x64
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C2: jmp 0x587542f2
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 48 BD FF FF: call 0x58750080
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8D D3 E1 FF: call 0x585716d0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xd3
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 06 18 02 00: call 0x58775b50
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DB 2D D8 FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x2d
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F4 76 F5 FF: call 0x586aba50
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x76
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
