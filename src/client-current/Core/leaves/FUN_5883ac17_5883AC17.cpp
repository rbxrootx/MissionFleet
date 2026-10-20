// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883AC17 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_5883ac17_5883AC17() {
    __asm {
        mov edx, dword ptr [ecx]
        cmp byte ptr [edx + 0dh], 0
        ; Exact mapped bytes 74 05: je 0x5883ac24
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes EB 15: jmp 0x5883ac39
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [edx]
        cmp byte ptr [eax + 0dh], 0
        ; Exact mapped bytes 75 19: jne 0x5883ac45
        __asm _emit 0x75
        __asm _emit 0x19
        ; Exact mapped bytes EB 02: jmp 0x5883ac30
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, edx
        mov edx, dword ptr [eax + 8]
        cmp byte ptr [edx + 0dh], 0
        ; Exact mapped bytes 74 F5: je 0x5883ac2e
        __asm _emit 0x74
        __asm _emit 0xf5
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 1B: jmp 0x5883ac58
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ecx]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 75 0B: jne 0x5883ac4e
        __asm _emit 0x75
        __asm _emit 0x0b
        mov dword ptr [ecx], edx
        mov edx, dword ptr [edx + 4]
        cmp byte ptr [edx + 0dh], 0
        ; Exact mapped bytes 74 EF: je 0x5883ac3d
        __asm _emit 0x74
        __asm _emit 0xef
        mov eax, dword ptr [ecx]
        cmp byte ptr [eax + 0dh], 0
        ; Exact mapped bytes 75 02: jne 0x5883ac58
        __asm _emit 0x75
        __asm _emit 0x02
        mov dword ptr [ecx], edx
        mov eax, ecx
        ret
    }
}
