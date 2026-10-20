// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58597B20 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_58597b20_58597B20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 114h], 0
        ; Exact mapped bytes 74 52: je 0x58597b87
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 778h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a04h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a06h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 11 AF F8 FF: call 0x58522a70
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xaf
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1F: je 0x58597b87
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 114h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 46 8F F1 FF: call 0x584b0ac0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x8f
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 114h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
