// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005435ED .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_005435ed_005435ED() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 74 0F: je 0x543612
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        cmp dword ptr [edx + 10h], 5
        ; Exact mapped bytes 74 16: je 0x543628
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes E8 2C 1E 00 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 75 08: jne 0x543628
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5C FF FF FF: call 0x543584
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0c0h], 0
        ; Exact mapped bytes 74 31: je 0x543665
        __asm _emit 0x74
        __asm _emit 0x31
        ; Exact mapped bytes E8 0A 1E 00 00: call 0x545443
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x543656
        __asm _emit 0x74
        __asm _emit 0x14
        push 179h
        push 5c5db4h
        ; Exact mapped bytes E8 AF 13 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x543656
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x543634
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 C0 00 00 00: call dword ptr [eax + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 3ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
