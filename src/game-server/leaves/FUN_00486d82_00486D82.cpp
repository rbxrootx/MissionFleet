// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00486D82 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_00486d82_00486D82() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax], 581e08h
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 4], -1
        ; Exact mapped bytes 74 43: je 0x486df6
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 9B 02 00 00: call 0x487056
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 48h], 0
        ; Exact mapped bytes 74 12: je 0x486dd6
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + 48h]
        ; Exact mapped bytes E8 B8 46 00 00: call 0x48b48e
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 58 29 5E 00: call dword ptr [0x5e2958]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F4 19 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 4], 0ffffffffh
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 74 1F: je 0x486e1e
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 34h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 F8 65 06 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x65
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 34h], 0
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 1F: je 0x486e46
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 D0 65 06 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x65
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 1ch], 0
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 8F 19 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
