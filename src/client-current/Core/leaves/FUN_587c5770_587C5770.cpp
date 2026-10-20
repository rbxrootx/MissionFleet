// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C5770 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_587c5770_587C5770() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588be574h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 104h], 0
        ; Exact mapped bytes 74 27: je 0x587c57b5
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 104h]
        mov dword ptr [ebp - 8], eax
        push 4
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 8F B8 06 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 104h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 108h], 0
        ; Exact mapped bytes 74 27: je 0x587c57e8
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 108h]
        mov dword ptr [ebp - 0ch], edx
        push 4
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 5C B8 06 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 108h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E0 90 FF FF: call 0x587be8d0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
