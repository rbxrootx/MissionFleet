// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C17B0 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_587c17b0_587C17B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 74 63: je 0x587c1829
        __asm _emit 0x74
        __asm _emit 0x63
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E2 40 CD FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x40
        __asm _emit 0xcd
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D8 32 D7 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x32
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        sub eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 26: jle 0x587c181d
        __asm _emit 0x7e
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E1 31 CC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x31
        __asm _emit 0xcc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x587c1810
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D5 31 CC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x31
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 02: jmp 0x587c1812
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 0B: jmp 0x587c181d
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB D4: jmp 0x587c17f1
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 84h], eax
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
