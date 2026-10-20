// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885051C .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_5885051c_5885051C() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 81 3D 9C 45 89 58 C0 AB 7A 58: cmp dword ptr [0x5889459c], 0x587aabc0
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0xc0
        __asm _emit 0xab
        __asm _emit 0x7a
        __asm _emit 0x58
        ; Exact mapped bytes 74 1C: je 0x58850547
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 64 8B 0D 18 00 00 00: mov ecx, dword ptr fs:[0x18]
        __asm _emit 0x64
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 10h]
        cmp eax, dword ptr [ecx + 8]
        ; Exact mapped bytes 72 05: jb 0x58850542
        __asm _emit 0x72
        __asm _emit 0x05
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 76 05: jbe 0x58850547
        __asm _emit 0x76
        __asm _emit 0x05
        push 0dh
        pop ecx
        int 29h
        pop ebp
        ret
    }
}
