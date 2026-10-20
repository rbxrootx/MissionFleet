// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00551254 .. +0x79 bytes.
extern "C" __declspec(naked) void _HasBlankItems_COleDocument__QBEHXZ_00551254() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        push 100h
        push 5cf7b8h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 F0 9E FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf0
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
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 40: je 0x5512c7
        __asm _emit 0x74
        __asm _emit 0x40
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 C0 00 00 00: call dword ptr [edx + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 106h
        push 5cf7b8h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 B1 9E FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x9e
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 58: call dword ptr [edx + 0x58]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5512c5
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x5512c9
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB BA: jmp 0x551281
        __asm _emit 0xeb
        __asm _emit 0xba
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
