// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B8A10 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_004b8a10_004B8A10() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 27: je 0x4b8a44
        __asm _emit 0x74
        __asm _emit 0x27
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 74 21: je 0x4b8a44
        __asm _emit 0x74
        __asm _emit 0x21
        push 58c8f0h
        push 0
        push 0a1h
        push 58c8e4h
        push 2
        ; Exact mapped bytes E8 F5 80 FF FF: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4b8a44
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CD: jne 0x4b8a17
        __asm _emit 0x75
        __asm _emit 0xcd
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 47: je 0x4b8a9d
        __asm _emit 0x74
        __asm _emit 0x47
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        and eax, 1000h
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x4b8a9d
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 32 FC FF FF: call 0x4b86a0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        and ah, 0eeh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
