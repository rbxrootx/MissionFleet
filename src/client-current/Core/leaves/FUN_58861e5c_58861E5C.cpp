// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58861E5C .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_58861e5c_58861E5C() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 80 99 96 58 00: cmp dword ptr [0x58969980], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 10: je 0x58861e7a
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EC FD FF FF: call 0x58861c60
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov ecx, eax
        ; Exact mapped bytes EB 0E: jmp 0x58861e88
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        lea eax, [ecx - 41h]
        cmp eax, 19h
        ; Exact mapped bytes 77 03: ja 0x58861e88
        __asm _emit 0x77
        __asm _emit 0x03
        add ecx, 20h
        mov eax, ecx
        pop ebp
        ret
    }
}
