// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587521A0 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_587521a0_587521A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 AC 00 00 00: je 0x5875225f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        movzx edx, byte ptr [ecx + 35ch]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 0F 87 92 00 00 00: ja 0x5875225f
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 24 85 6C 22 75 58: jmp dword ptr [eax*4 + 0x5875226c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0x22
        __asm _emit 0x75
        __asm _emit 0x58
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 91 11 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x11
        __asm _emit 0xd7
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 1
        ; Exact mapped bytes 74 11: je 0x587521f9
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 80 11 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0xd7
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 2
        ; Exact mapped bytes 75 04: jne 0x587521fd
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 67: jmp 0x58752264
        __asm _emit 0xeb
        __asm _emit 0x67
        ; Exact mapped bytes EB 60: jmp 0x5875225f
        __asm _emit 0xeb
        __asm _emit 0x60
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 69 11 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x11
        __asm _emit 0xd7
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 1
        ; Exact mapped bytes 75 06: jne 0x58752216
        __asm _emit 0x75
        __asm _emit 0x06
        xor eax, eax
        ; Exact mapped bytes EB 50: jmp 0x58752264
        __asm _emit 0xeb
        __asm _emit 0x50
        ; Exact mapped bytes EB 18: jmp 0x5875222e
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 52 11 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x11
        __asm _emit 0xd7
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 2
        ; Exact mapped bytes 75 07: jne 0x5875222e
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 2
        ; Exact mapped bytes EB 36: jmp 0x58752264
        __asm _emit 0xeb
        __asm _emit 0x36
        ; Exact mapped bytes EB 2F: jmp 0x5875225f
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 38 11 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x11
        __asm _emit 0xd7
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 1
        ; Exact mapped bytes 75 09: jne 0x5875224a
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, 2
        ; Exact mapped bytes EB 1C: jmp 0x58752264
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes EB 15: jmp 0x5875225f
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1E 11 D7 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x11
        __asm _emit 0xd7
        __asm _emit 0xff
        cmp dword ptr [eax + 170h], 2
        ; Exact mapped bytes 75 04: jne 0x5875225f
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x58752264
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 2
        mov esp, ebp
    }
}
