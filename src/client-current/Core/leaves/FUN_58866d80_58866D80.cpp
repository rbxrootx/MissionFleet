// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58866D80 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_58866d80_58866D80() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0F: je 0x58866d9a
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 09: je 0x58866d9a
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 10h], 7fffffffh
        ; Exact mapped bytes 76 10: jbe 0x58866daa
        __asm _emit 0x76
        __asm _emit 0x10
        ; Exact mapped bytes E8 D0 B6 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 01 A2 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xa2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, 7fffffffh
        pop ebp
        ret
    }
}
