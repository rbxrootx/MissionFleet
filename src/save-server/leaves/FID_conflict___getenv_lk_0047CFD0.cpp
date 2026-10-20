// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047CFD0 .. +0xC6 bytes.
extern "C" __declspec(naked) void FID_conflict___getenv_lk_0047CFD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes A1 54 72 68 00: mov eax, dword ptr [0x687254]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 83 3D A8 8D 68 00 00: cmp dword ptr [0x688da8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x47cfee
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x47d092
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 22: jne 0x47d016
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes 83 3D 5C 72 68 00 00: cmp dword ptr [0x68725c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 19: je 0x47d016
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes E8 CE 47 00 00: call 0x4817d0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x47d00d
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 85 00 00 00: jmp 0x47d092
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 54 72 68 00: mov ecx, dword ptr [0x687254]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 74: je 0x47d090
        __asm _emit 0x74
        __asm _emit 0x74
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 6E: je 0x47d090
        __asm _emit 0x74
        __asm _emit 0x6e
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 15 87 FE FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 57: je 0x47d090
        __asm _emit 0x74
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 FC 86 FE FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 76 39: jbe 0x47d085
        __asm _emit 0x76
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 04 11: movsx eax, byte ptr [ecx + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x11
        cmp eax, 3dh
        ; Exact mapped bytes 75 28: jne 0x47d085
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 10 47 00 00: call 0x481780
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x47d085
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        lea eax, [eax + ecx + 1]
        ; Exact mapped bytes EB 0D: jmp 0x47d092
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 8]
        add edx, 4
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB A1: jmp 0x47d031
        __asm _emit 0xeb
        __asm _emit 0xa1
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
