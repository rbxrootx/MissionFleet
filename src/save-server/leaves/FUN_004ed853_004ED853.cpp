// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED853 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_004ed853_004ED853() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 0e150h
        ; Exact mapped bytes 74 20: je 0x4ed88b
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4], 0e151h
        ; Exact mapped bytes 74 14: je 0x4ed88b
        __asm _emit 0x74
        __asm _emit 0x14
        push 189h
        push 677b4ch
        ; Exact mapped bytes E8 BA B4 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xb4
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ed88b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CE: jne 0x4ed85f
        __asm _emit 0x75
        __asm _emit 0xce
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 C5 FD FF FF: call 0x4ed661
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 2B: je 0x4ed8d0
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp + 8]
        xor edx, edx
        cmp dword ptr [ecx + 4], 0e151h
        sete dl
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 F0 00 00 00: call dword ptr [edx + 0xf0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4ed8d0
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 07: jmp 0x4ed8d7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
