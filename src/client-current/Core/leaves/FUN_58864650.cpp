// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58864650 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_58864650() {
    __asm {
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 8B 4D 08: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 38 01: cmp byte ptr [ecx], al
        __asm _emit 0x38
        __asm _emit 0x01
        ; Exact mapped bytes 74 0E: je 0x5886466c
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 55 0C: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 3B C2: cmp eax, edx
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 74 07: je 0x5886466c
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 80 3C 08 00: cmp byte ptr [eax + ecx], 0
        __asm _emit 0x80
        __asm _emit 0x3c
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 75 F5: jne 0x58864661
        __asm _emit 0x75
        __asm _emit 0xf5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
