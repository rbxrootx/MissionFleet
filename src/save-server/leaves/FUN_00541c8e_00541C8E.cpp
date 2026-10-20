// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00541C8E .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_00541c8e_00541C8E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 14dh
        push 675764h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 B6 85 F9 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 64h]
        and eax, 200h
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x541ccb
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 2B 0D C4 6D 68 00: sub ecx, dword ptr [0x686dc4]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 64h]
        and eax, 800h
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x541ce6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 2B 0D C4 6D 68 00: sub ecx, dword ptr [0x686dc4]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp + 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [edx + 94h]
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4ch], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [edx + 94h]
        mov ecx, dword ptr [ebp - 8]
        sub eax, dword ptr [ecx + 4ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 48h], eax
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 7D 2D: jge 0x541d4b
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 6757bch
        ; Exact mapped bytes E8 E9 E8 F5 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4ch]
        mov ecx, dword ptr [ebp - 8]
        add eax, dword ptr [ecx + 48h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 4ch], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 48h], 0
        push 37h
        push 0
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C1 49 F9 FF: call 0x4d6720
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x49
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 46 A2 FE FF: call 0x52bfaf
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
