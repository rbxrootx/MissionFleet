// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00488E29 .. +0x218 bytes.
extern "C" __declspec(naked) void FUN_00488e29_00488E29() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57c464h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 2ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 38h]
        mov ecx, 0bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 30h], ecx
        mov eax, dword ptr [ebp - 30h]
        cmp dword ptr [eax + 0c8h], 0
        ; Exact mapped bytes 74 46: je 0x488eac
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 0c8h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 1A: je 0x488e98
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        cmp esi, esp
        ; Exact mapped bytes E8 4D F9 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x488e9f
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax + 0c8h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 62 01 00 00: je 0x489018
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 49 80 0A 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 1ch], 0
        lea ecx, [ebp - 18h]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 F4 F0 FF FF: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x488ef5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 63 80 0A 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x80
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 7D 1C: jge 0x488f1e
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 75 82 0A 00: call 0x531183
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x82
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE D0: movsx edx, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xd0
        imul edx, edx, 1dh
        mov eax, dword ptr [ebp - 1ch]
        add eax, edx
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB CE: jmp 0x488eec
        __asm _emit 0xeb
        __asm _emit 0xce
        mov ecx, dword ptr [ebp - 18h]
        imul ecx, ecx, 1fh
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx + 0d4h]
        imul eax, eax, 11h
        add eax, dword ptr [ebp - 1ch]
        add eax, ecx
        mov dword ptr [ebp - 1ch], eax
        push 98h
        ; Exact mapped bytes E8 7E 44 06 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 12: je 0x488f64
        __asm _emit 0x74
        __asm _emit 0x12
        push 800h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 51 3D 00 00: call 0x48ccb0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x488f6b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 28h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [edx + 0c8h], eax
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        mov ecx, dword ptr [edx + 0c8h]
        mov eax, dword ptr [ebp - 30h]
        mov edx, dword ptr [eax + 0c8h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 39 F8 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 0cch], 1
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [edx + 0d0h], 0
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 0c8h]
        ; Exact mapped bytes E8 01 03 00 00: call 0x4892d0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        mov eax, dword ptr [ebp - 1ch]
        xor edx, edx
        div ecx
        imul edx, edx, 0dh
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax + 0d8h], edx
        mov ecx, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ecx + 0c8h]
        ; Exact mapped bytes E8 DE 02 00 00: call 0x4892d0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        mov eax, dword ptr [ebp - 1ch]
        xor edx, edx
        div ecx
        imul edx, edx, 11h
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [eax + 0dch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 36 48 06 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x489025
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ecx + 0cch], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 38h
        cmp ebp, esp
        ; Exact mapped bytes E8 A5 F7 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
