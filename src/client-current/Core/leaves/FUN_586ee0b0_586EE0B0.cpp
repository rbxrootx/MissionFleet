// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586EE0B0 .. +0x3D9 bytes.
extern "C" __declspec(naked) void FUN_586ee0b0_586EE0B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0b75h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 0F 87 AC 03 00 00: ja 0x586ee485
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xac
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 24 85 8C E4 6E 58: jmp dword ptr [eax*4 + 0x586ee48c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0xe4
        __asm _emit 0x6e
        __asm _emit 0x58
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ee0f5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586ee19a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 974h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx*4 + 0fh]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9A 69 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x69
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1B 8B D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x8b
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 974h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 1ch], eax
        push 4fh
        push 88h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B1 74 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x74
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 974h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 20h], eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 4C 7D D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x7d
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586ee0ec
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ee1ac
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586ee251
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 974h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax*4 + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E3 68 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x68
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 64 8A D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x8a
        __asm _emit 0xd9
        __asm _emit 0xff
        mov eax, 8
        shl eax, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 974h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 30h], ecx
        push 46h
        push 22eh
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 FA 73 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x73
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 974h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 34h], eax
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 95 7C D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586ee1a3
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2F 02 00 00: jmp 0x586ee485
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ee268
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586ee30d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 0a74h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx*4 + 7]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 27 68 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x68
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 A8 89 D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x89
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 0a74h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 44h], eax
        push 4fh
        push 88h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 3E 73 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x73
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 0a74h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 48h], eax
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 D9 7B D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x7b
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586ee25f
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 73 01 00 00: jmp 0x586ee485
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ee324
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586ee3c9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 974h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx*4 + 0fh]
        push edx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 6B 67 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x67
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 EC 88 D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x88
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 974h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 58h], eax
        push 4fh
        push 19dh
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 82 72 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x72
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 974h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 5ch], eax
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 1D 7B D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x7b
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586ee31b
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 B7 00 00 00: jmp 0x586ee485
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586ee3e0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x586ee485
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 0a74h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx*4 + 8]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 AF 66 D9 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x66
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov eax, dword ptr [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 30 88 D9 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x88
        __asm _emit 0xd9
        __asm _emit 0xff
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 0a74h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 6ch], eax
        push 46h
        push 22eh
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 C6 71 0C 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x71
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 0a74h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 70h], eax
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 61 7A D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x7a
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x586ee3d7
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
