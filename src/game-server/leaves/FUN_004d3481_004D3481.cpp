// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D3481 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_004d3481_004D3481() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4d34ad
        __asm _emit 0x75
        __asm _emit 0x11
        push 2ah
        push 5c64b4h
        ; Exact mapped bytes E8 58 15 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d34ad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4d348b
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 43 B9 01 00: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        and eax, 0ah
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4d34d3
        __asm _emit 0x74
        __asm _emit 0x11
        push 2bh
        push 5c64b4h
        ; Exact mapped bytes E8 32 15 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x15
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d34d3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4d34b3
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 C0 1E 5E 00: call dword ptr [0x5e1ec0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
