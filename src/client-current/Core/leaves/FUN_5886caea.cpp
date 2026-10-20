// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886CAEA .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_5886caea() {
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
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes A8 40: test al, 0x40
        __asm _emit 0xa8
        __asm _emit 0x40
        ; Exact mapped bytes 74 04: je 0x5886cafc
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 32 C0: xor al, al
        __asm _emit 0x32
        __asm _emit 0xc0
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 83 C8 40: or eax, 0x40
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x40
        ; Exact mapped bytes 89 01: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        ; Exact mapped bytes B0 01: mov al, 1
        __asm _emit 0xb0
        __asm _emit 0x01
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
