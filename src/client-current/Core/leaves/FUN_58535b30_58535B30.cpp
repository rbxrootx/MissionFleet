// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58535B30 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_58535b30_58535B30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 7ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 80h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0c4h], 0
        ; Exact mapped bytes 74 7A: je 0x58535bd6
        __asm _emit 0x74
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C4 9C F6 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x9c
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 64h], 40000000h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 40000000h
        ; Exact mapped bytes 75 0A: jne 0x58535b9c
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [eax + 54h], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 88h], 0
        ; Exact mapped bytes 74 1F: je 0x58535bd6
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8B 10 F5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x10
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
