// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009CBF0 .. +0x12B bytes.
extern "C" __declspec(naked) void FUN_1009cbf0_1009CBF0() {
    __asm {
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        xor ebp, ebp
        mov eax, dword ptr [ebx + 2a0h]
        mov dword ptr [ebx + 2ach], 0ffffffffh
        mov dword ptr [ebx + 2bch], ebp
        mov dword ptr [ebx + 2b8h], ebp
        mov dword ptr [ebx + 2b4h], ebp
        push esi
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [ebx + 2a4h]
        push edi
        ; Exact mapped bytes E8 07 28 FB FF: call 0x1004f430
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x28
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 298h]
        ; Exact mapped bytes E8 9C 59 F9 FF: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x59
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebx + 29ch]
        ; Exact mapped bytes E8 91 59 F9 FF: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x59
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, 20h
        xor eax, eax
        lea edi, [ebx + 190h]
        lea esi, [ebx + 0f0h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov edi, 20h
        mov ecx, dword ptr [esi]
        push 0fffffe70h
        ; Exact mapped bytes E8 EB 20 06 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        add esi, 4
        dec edi
        mov dword ptr [ecx + 50h], ebp
        ; Exact mapped bytes 75 E9: jne 0x1009cc59
        __asm _emit 0x75
        __asm _emit 0xe9
        lea esi, [ebx + 180h]
        mov dword ptr [esp + 10h], 2
        mov edi, 2
        mov edx, dword ptr [esi - 10h]
        push ebp
        mov dword ptr [edx + 50h], ebp
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 8F 2A 06 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x2a
        __asm _emit 0x06
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x1009cc83
        __asm _emit 0x75
        __asm _emit 0xec
        mov eax, dword ptr [esp + 10h]
        dec eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 75 DC: jne 0x1009cc7e
        __asm _emit 0x75
        __asm _emit 0xdc
        xor edi, edi
        lea esi, [ebx + 7ch]
        lea ebp, [ebx + 0e0h]
        xor eax, eax
        mov dword ptr [ebp], eax
        push eax
        mov dword ptr [esi + 44h], eax
        push eax
        mov dword ptr [esi + 48h], eax
        mov ecx, dword ptr [esi]
        push eax
        push edi
        ; Exact mapped bytes E8 CD 1E 00 00: call 0x1009eb90
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        push 0
        push 0
        push 0
        push edi
        ; Exact mapped bytes E8 BE 1E 00 00: call 0x1009eb90
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push 0
        push 0
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 20: call dword ptr [eax + 0x20]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x20
        mov ecx, dword ptr [esi + 4]
        push 0
        push 0
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        mov ecx, dword ptr [esi]
        push 0
        push 0
        ; Exact mapped bytes E8 CC 3F 00 00: call 0x100a0cc0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        push 0
        ; Exact mapped bytes E8 F2 67 00 00: call 0x100a34f0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        inc edi
        add ebp, 4
        add esi, 8
        cmp edi, 4
        ; Exact mapped bytes 7C A3: jl 0x1009ccad
        __asm _emit 0x7c
        __asm _emit 0xa3
        mov ecx, dword ptr [ebx + 9ch]
        ; Exact mapped bytes E8 BB 2F 00 00: call 0x1009fcd0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
