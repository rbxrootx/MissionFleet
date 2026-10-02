// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903040 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_58903040() {
    __asm {
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        ; Exact mapped bytes A8 04: test al, 4
        __asm _emit 0xa8
        __asm _emit 0x04
        ; Exact mapped bytes 74 1E: je 0x58903069
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 8B 4F 3C: mov ecx, dword ptr [edi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x3c
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 17: je 0x58903069
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 71 38: mov esi, dword ptr [ecx + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x38
        ; Exact mapped bytes 8B 11: mov edx, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 8B 42 0C: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 77 3C: cmp esi, dword ptr [edi + 0x3c]
        __asm _emit 0x3b
        __asm _emit 0x77
        __asm _emit 0x3c
        ; Exact mapped bytes 74 0B: je 0x5890306b
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 EB: jne 0x58903053
        __asm _emit 0x75
        __asm _emit 0xeb
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
