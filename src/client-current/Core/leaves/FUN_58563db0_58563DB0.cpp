// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58563DB0 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_58563db0_58563DB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 2B F2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x2b
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 88h], eax
        ; Exact mapped bytes 75 20: jne 0x58563def
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 104h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 104h
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 9C FE FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 104h]
        xor eax, 55555555h
        cmp eax, 40000000h
        ; Exact mapped bytes 74 15: je 0x58563e19
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0f4h], 0
        ; Exact mapped bytes 74 09: je 0x58563e19
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 07: jmp 0x58563e20
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
