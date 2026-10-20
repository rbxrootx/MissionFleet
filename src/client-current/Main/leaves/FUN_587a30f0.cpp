// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A30F0 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_587a30f0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 75 69: jne 0x587a3164
        __asm _emit 0x75
        __asm _emit 0x69
        mov eax, dword ptr [esi + 3f0h]
        test eax, eax
        ; Exact mapped bytes 74 5F: je 0x587a3164
        __asm _emit 0x74
        __asm _emit 0x5f
        cmp dword ptr [eax + 606ch], 0
        ; Exact mapped bytes 74 56: je 0x587a3164
        __asm _emit 0x74
        __asm _emit 0x56
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 4]
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x587a3129
        __asm _emit 0x74
        __asm _emit 0x0e
        mov dl, byte ptr [eax + 354h]
        cmp dl, byte ptr [ecx + 354h]
        ; Exact mapped bytes 75 3B: jne 0x587a3164
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [esi + 8]
        mov ecx, dword ptr [eax + 10524h]
        mov eax, dword ptr [esi + 4]
        push edx
        push eax
        ; Exact mapped bytes E8 1F 0C 02 00: call 0x587c3d60
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x0c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x587a3164
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 1A: jne 0x587a3164
        __asm _emit 0x75
        __asm _emit 0x1a
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 9D E4 F8 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xe4
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 3e8h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x587a3164
        __asm _emit 0x74
        __asm _emit 0x07
        push 1
        ; Exact mapped bytes E8 8C E4 F8 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe4
        __asm _emit 0xf8
        __asm _emit 0xff
        pop esi
        ret
    }
}
