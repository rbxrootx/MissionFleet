// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58740050 .. +0x297 bytes.
extern "C" __declspec(naked) void FUN_58740050_58740050() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5874006b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 1A: jge 0x5874008b
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 70h]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B8 F7 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf7
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x58740062
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5874009d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 1A: jge 0x587400bd
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 7ch]
        mov dword ptr [ebp - 18h], ecx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 86 F7 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xf7
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x58740094
        __asm _emit 0xeb
        __asm _emit 0xd7
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 0F 87 14 02 00 00: ja 0x587402e1
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 24 85 E8 02 74 58: jmp dword ptr [eax*4 + 0x587402e8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 87h], 5
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 70h]
        mov dword ptr [ebp - 1ch], edx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 40 F7 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xf7
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 70h]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 25 F7 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xf7
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 7ch]
        mov dword ptr [ebp - 24h], eax
        push 5
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 09 F7 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xf7
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 28h], eax
        push 0
        push 2
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 70h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        nop
        ; Exact mapped bytes E9 7F 01 00 00: jmp 0x587402e1
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 87h], 0ah
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 70h]
        mov dword ptr [ebp - 2ch], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B5 F6 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf6
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 70h]
        mov dword ptr [ebp - 30h], eax
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 99 F6 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xf6
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 7ch]
        mov dword ptr [ebp - 34h], eax
        push 5
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 7D F6 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf6
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 38h], eax
        push 0
        push 2
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 70h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 C8: call dword ptr [ebp - 0x38]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xc8
        nop
        ; Exact mapped bytes E9 F3 00 00 00: jmp 0x587402e1
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov byte ptr [eax + 87h], 0fh
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 70h]
        mov dword ptr [ebp - 3ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 29 F6 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf6
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 70h]
        mov dword ptr [ebp - 40h], ecx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 0D F6 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xf6
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 7ch]
        mov dword ptr [ebp - 44h], ecx
        push 5
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 F2 F5 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf5
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [ebp - 48h], ecx
        push 0
        push 2
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 70h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 B8: call dword ptr [ebp - 0x48]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb8
        nop
        ; Exact mapped bytes EB 6B: jmp 0x587402e1
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 87h], 14h
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 70h]
        mov dword ptr [ebp - 4ch], edx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 A1 F5 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf5
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 7ch]
        mov dword ptr [ebp - 50h], eax
        push 5
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 85 F5 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf5
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 54h], eax
        push 0
        push 2
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 70h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 AC: call dword ptr [ebp - 0x54]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xac
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
