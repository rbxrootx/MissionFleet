// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005454BB .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_005454bb_005454BB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 7F 14: jg 0x5454e2
        __asm _emit 0x7f
        __asm _emit 0x14
        push 106h
        push 5c7448h
        ; Exact mapped bytes E8 23 F5 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5454e2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5454c5
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        add edx, 20h
        push edx
        ; Exact mapped bytes FF 15 E4 23 5E 00: call dword ptr [0x5e23e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 4A: jne 0x545543
        __asm _emit 0x75
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 1C: je 0x54551e
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1ch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 1C: je 0x545543
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], 0
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
