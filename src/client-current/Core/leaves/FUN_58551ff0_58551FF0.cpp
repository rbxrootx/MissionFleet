// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58551FF0 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_58551ff0_58551FF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 243ech], 2
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0f4h], 0
        ; Exact mapped bytes 74 09: je 0x5855201b
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 6
        ; Exact mapped bytes EB 07: jmp 0x58552022
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 7
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF 2A F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x2a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 244fch], eax
        push 9
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D9 2A F3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x2a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24500h], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
