// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5872ACE0 .. +0x21A bytes.
extern "C" __declspec(naked) void FUN_5872ace0_5872ACE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 FF 01 00 00: jne 0x5872aef2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 11ch]
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x5872ad9f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 8], eax
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 25 4B D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x4b
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 124h]
        mov dword ptr [ebp - 0ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0F 4B D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x4b
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov dword ptr [ebp - 10h], ecx
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F9 4A D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x4a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 14h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 83 B1 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb1
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6D B1 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb1
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 57 B1 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xb1
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0F FB FF FF: call 0x5872a8a0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B7 03 00 00: call 0x5872b150
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 53 01 00 00: jmp 0x5872aef2
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 120h]
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x5872ae4b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 124h]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 79 4A D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x4a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov dword ptr [ebp - 24h], ecx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 63 4A D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x4a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 28h], eax
        push 5
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 4D 4A D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x4a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 2ch], edx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D7 B0 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xb0
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 30h], ecx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 C1 B0 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xb0
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 AB B0 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xb0
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 63 FA FF FF: call 0x5872a8a0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0B 03 00 00: call 0x5872b150
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x5872aef2
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 124h]
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x5872aef2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov dword ptr [ebp - 38h], ecx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 CD 49 D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x49
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 3ch], eax
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 B7 49 D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x49
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 124h]
        mov dword ptr [ebp - 40h], edx
        push 5
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 A1 49 D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x49
        __asm _emit 0xd7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 44h], ecx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 2B B0 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xb0
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 48h], eax
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 15 B0 D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 4ch], edx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 FF AF D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xaf
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B7 F9 FF FF: call 0x5872a8a0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5F 02 00 00: call 0x5872b150
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
