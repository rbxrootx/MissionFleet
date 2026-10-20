// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D4AD0 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_585d4ad0_585D4AD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 20f2ch]
        ; Exact mapped bytes E8 D2 1E EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x1e
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 0B: jmp 0x585d4afe
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B5 75 EB FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x75
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3D: je 0x585d4b41
        __asm _emit 0x74
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D4 73 EB FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x73
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 2A: je 0x585d4b3f
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0B FF FF FF: call 0x585d4a30
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x585d4b3f
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EF 5B F9 FF: call 0x5856a720
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x5b
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], eax
        ; Exact mapped bytes 7E 09: jle 0x585d4b3f
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 02: jmp 0x585d4b41
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B2: jmp 0x585d4af3
        __asm _emit 0xeb
        __asm _emit 0xb2
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
