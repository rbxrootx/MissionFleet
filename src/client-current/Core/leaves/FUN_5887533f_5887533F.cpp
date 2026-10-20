// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887533F .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_5887533f_5887533F() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 83 EC 10: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x10
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 8D 4D F0: lea ecx, [ebp - 0x10]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes E8 85 29 FE FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 0F B6 55 0C: movzx edx, byte ptr [ebp + 0xc]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 8A 4D 14: mov cl, byte ptr [ebp + 0x14]
        __asm _emit 0x8a
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 84 4C 10 19: test byte ptr [eax + edx + 0x19], cl
        __asm _emit 0x84
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x19
        ; Exact mapped bytes 75 18: jne 0x5887537a
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4D 10: mov ecx, dword ptr [ebp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x10
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 0D: je 0x58875376
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 45 F4: mov eax, dword ptr [ebp - 0xc]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 04 50: movzx eax, word ptr [eax + edx*2]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x04
        __asm _emit 0x50
        ; Exact mapped bytes 85 C1: test ecx, eax
        __asm _emit 0x85
        __asm _emit 0xc1
        ; Exact mapped bytes 75 04: jne 0x5887537a
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes EB 03: jmp 0x5887537d
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 80 7D FC 00: cmp byte ptr [ebp - 4], 0
        __asm _emit 0x80
        __asm _emit 0x7d
        __asm _emit 0xfc
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x5887538d
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 4D F0: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 83 A1 50 03 00 00 FD: and dword ptr [ecx + 0x350], 0xfffffffd
        __asm _emit 0x83
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xfd
        ; Exact mapped bytes C9: leave
        __asm _emit 0xc9
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
