// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58864FE0 .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_58864fe0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 0ch]
        sub esp, 20h
        xor eax, eax
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        cmp dword ptr [eax*8 + 588c4a30h], ecx
        ; Exact mapped bytes 74 49: je 0x58865042
        __asm _emit 0x74
        __asm _emit 0x49
        inc eax
        cmp eax, 1dh
        ; Exact mapped bytes 7C F1: jl 0x58864ff0
        __asm _emit 0x7c
        __asm _emit 0xf1
        mov dword ptr [ebp - 1ch], 0
        push 0ffffh
        push dword ptr [ebp + 28h]
        ; Exact mapped bytes E8 1D B1 00 00: call 0x58870130
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add esp, 8
        sub eax, 1
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x588650cd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes 74 09: je 0x58865030
        __asm _emit 0x74
        __asm _emit 0x09
        sub eax, 1
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x588650d8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 3A D4 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        fld qword ptr [ebp + 20h]
        mov dword ptr [eax], 22h
        mov esp, ebp
        pop ebp
        ret
        mov eax, dword ptr [eax*8 + 588c4a34h]
        mov dword ptr [ebp - 1ch], eax
        test eax, eax
        ; Exact mapped bytes 74 B6: je 0x58865006
        __asm _emit 0x74
        __asm _emit 0xb6
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp + 1ch]
        push esi
        mov esi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 20h]
        push 0ffffh
        push dword ptr [ebp + 28h]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 24h]
        mov dword ptr [ebp - 20h], esi
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 A8 B0 00 00: call 0x58870130
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 4F EE 00 00: call 0x58873ee0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 2D: jne 0x588650c5
        __asm _emit 0x75
        __asm _emit 0x2d
        sub esi, 1
        ; Exact mapped bytes 74 1D: je 0x588650ba
        __asm _emit 0x74
        __asm _emit 0x1d
        sub esi, 1
        ; Exact mapped bytes 74 05: je 0x588650a7
        __asm _emit 0x74
        __asm _emit 0x05
        sub esi, 1
        ; Exact mapped bytes 75 1E: jne 0x588650c5
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes E8 C3 D3 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov dword ptr [eax], 22h
        fld qword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
        ; Exact mapped bytes E8 B0 D3 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 21h
        fld qword ptr [ebp - 8]
        pop esi
        mov esp, ebp
        pop ebp
        ret
        ; Exact mapped bytes E8 9D D3 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 21h
        fld qword ptr [ebp + 20h]
        mov esp, ebp
        pop ebp
        ret
    }
}
