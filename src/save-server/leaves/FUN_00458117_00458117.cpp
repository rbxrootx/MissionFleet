// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00458117 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_00458117_00458117() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 74 1C: je 0x458140
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 38h]
        ; Exact mapped bytes E8 08 73 FF FF: call 0x44f43b
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x458140
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes EB 07: jmp 0x458147
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
