// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58861E8C .. +0x30 bytes.
extern "C" __declspec(naked) void FUN_58861e8c_58861E8C() {
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
        ; Exact mapped bytes 74 10: je 0x58861eaa
        __asm _emit 0x74
        __asm _emit 0x10
        push 0
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BA FE FF FF: call 0x58861d5e
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov ecx, eax
        ; Exact mapped bytes EB 0E: jmp 0x58861eb8
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        lea eax, [ecx - 61h]
        cmp eax, 19h
        ; Exact mapped bytes 77 03: ja 0x58861eb8
        __asm _emit 0x77
        __asm _emit 0x03
        add ecx, -20h
        mov eax, ecx
        pop ebp
        ret
    }
}
