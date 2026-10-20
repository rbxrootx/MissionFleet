// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1001D690 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_1001d690_1001D690() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 64h]
        and eax, 0e1ffh
        mov dword ptr [esi + 6ch], 0
        or eax, 105h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes E8 FC B1 FF FF: call 0x100188b0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 68h]
        ; Exact mapped bytes E8 F4 B1 FF FF: call 0x100188b0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 58h], 100h
        ; Exact mapped bytes 8B 0D C8 58 1C 10: mov ecx, dword ptr [0x101c58c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push 12ch
        ; Exact mapped bytes E8 2D 4F 0C 00: call 0x100e2600
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x4f
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 28h
        ; Exact mapped bytes 7E 12: jle 0x1001d6f3
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1001d6f3
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax + 0a0h]
        ; Exact mapped bytes EB 02: jmp 0x1001d6f5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes A1 E4 56 1C 10: mov eax, dword ptr [0x101c56e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 64h
        push esi
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        pop esi
        ret
    }
}
