// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588EA390 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_588ea390() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        ; Exact mapped bytes 74 18: je 0x588ea3b1
        __asm _emit 0x74
        __asm _emit 0x18
        cmp dword ptr [esi + 164h], 0
        ; Exact mapped bytes 7E 2F: jle 0x588ea3d1
        __asm _emit 0x7e
        __asm _emit 0x2f
        mov eax, dword ptr [esi + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x588ea3d1
        __asm _emit 0x74
        __asm _emit 0x25
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 20: je 0x588ea3d1
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x588ea3f1
        __asm _emit 0x74
        __asm _emit 0x38
        cmp dword ptr [eax + 164h], 0
        ; Exact mapped bytes 7E 0F: jle 0x588ea3d1
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov edx, dword ptr [eax + 18ch]
        test edx, edx
        ; Exact mapped bytes 74 05: je 0x588ea3d1
        __asm _emit 0x74
        __asm _emit 0x05
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 20: jne 0x588ea3f1
        __asm _emit 0x75
        __asm _emit 0x20
        push 0
        push 0
        push 0
        push 12eh
        ; Exact mapped bytes E8 0F 17 E8 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x17
        __asm _emit 0xe8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 48 A9 E7 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xa9
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, 1
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 482ch]
        mov dword ptr [ecx + edx*4 + 808h], esi
        mov edx, dword ptr [ecx + 482ch]
        mov dword ptr [ecx + edx*4 + 1008h], eax
        mov eax, 1
        mov dword ptr [ecx + 4828h], eax
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
