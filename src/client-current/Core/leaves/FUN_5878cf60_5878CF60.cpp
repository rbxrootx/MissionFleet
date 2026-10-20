// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878CF60 .. +0x150 bytes.
extern "C" __declspec(naked) void FUN_5878cf60_5878CF60() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58890f4ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 24h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], ecx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C7 52 CF FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x52
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 588b694ch
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5878cfcb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 0F 8D C0 00 00 00: jge 0x5878d095
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 54h
        ; Exact mapped bytes E8 28 40 0A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x40
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 3D: je 0x5878d029
        __asm _emit 0x74
        __asm _emit 0x3d
        push 13h
        ; Exact mapped bytes 8B 0D A8 07 96 58: mov ecx, dword ptr [0x589607a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 7B CF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x7b
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        movzx edx, word ptr [ebp + 1ch]
        push edx
        imul eax, dword ptr [ebp - 10h], 0a6h
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax - 1]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FC 52 CF FF: call 0x58482320
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x52
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5878d030
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [edx + ecx*4 + 60h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 60h]
        mov dword ptr [ebp - 28h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 4F 85 02 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 60h]
        mov dword ptr [ebp - 2ch], eax
        push 64h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C8 84 02 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 60h]
        mov dword ptr [ebp - 30h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 51 8E CF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x8e
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2D FF FF FF: jmp 0x5878cfc2
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
