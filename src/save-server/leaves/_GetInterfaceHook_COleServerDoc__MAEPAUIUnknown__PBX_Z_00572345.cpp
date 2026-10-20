// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00572345 .. +0xAB bytes.
extern "C" __declspec(naked) void _GetInterfaceHook_COleServerDoc__MAEPAUIUnknown__PBX_Z_00572345() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0d0h], 0
        ; Exact mapped bytes 74 71: je 0x5723d2
        __asm _emit 0x74
        __asm _emit 0x71
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes A1 30 0D 64 00: mov eax, dword ptr [0x640d30]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 33: jne 0x5723a6
        __asm _emit 0x75
        __asm _emit 0x33
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 3B 15 34 0D 64 00: cmp edx, dword ptr [0x640d34]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 75 25: jne 0x5723a6
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 3B 0D 38 0D 64 00: cmp ecx, dword ptr [0x640d38]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 75 17: jne 0x5723a6
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 3B 05 3C 0D 64 00: cmp eax, dword ptr [0x640d3c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x3c
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x5723a6
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 07: jmp 0x5723ad
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 04: je 0x5723bd
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 2D: jmp 0x5723ea
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0d0h]
        ; Exact mapped bytes E8 D5 86 FD FF: call 0x54aaa4
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x86
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0F: jne 0x5723e7
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CD 53 F6 FF: call 0x4d77b1
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x53
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
