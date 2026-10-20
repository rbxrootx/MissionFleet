// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005512CD .. +0x63 bytes.
extern "C" __declspec(naked) void _UpdateModifiedFlag_COleDocument__UAEXXZ_005512CD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 10fh
        push 5cf7b8h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 77 9E FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x9e
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 BC 00 00 00: call dword ptr [edx + 0xbc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 05 FC FF FF: call 0x550f0b
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1D: je 0x55132c
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C5 35 00 00: call 0x5548dc
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x55132a
        __asm _emit 0x74
        __asm _emit 0x0f
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        ; Exact mapped bytes EB 02: jmp 0x55132c
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB CE: jmp 0x5512fa
        __asm _emit 0xeb
        __asm _emit 0xce
        mov esp, ebp
        pop ebp
        ret
    }
}
