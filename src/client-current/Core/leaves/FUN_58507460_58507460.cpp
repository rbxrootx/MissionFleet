// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58507460 .. +0x146 bytes.
extern "C" __declspec(naked) void FUN_58507460_58507460() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff8h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        push -1
        push 588806a5h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ebx
        push ecx
        sub esp, 64h
        push esi
        push edi
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
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 20h]
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 9A F7 FF FF: call 0x58506c50
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 BB 02 00 00: call 0x58507780
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 0D 01 00 00: je 0x585075dd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        add ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 28h], ecx
        lea edx, [ebp - 68h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 66 3E 00 00: call 0x5850b350
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes E8 00 E7 FF FF: call 0x58505c00
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 68h]
        ; Exact mapped bytes E8 2E FE FF FF: call 0x58507340
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        add ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 19 3C 00 00: call 0x5850b140
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 19h], al
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 20h]
        add eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 20h]
        add ecx, dword ptr [edx + 4]
        ; Exact mapped bytes E8 98 47 00 00: call 0x5850bce0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 8F F1 FF FF: call 0x585066e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 50h], ecx
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 58h], eax
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebx + 8]
        push edx
        movzx eax, byte ptr [ebp - 19h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 54h]
        push edx
        mov eax, dword ptr [ebp - 58h]
        push eax
        lea ecx, [ebp - 78h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 17 47 00 00: call 0x5850bca0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 1C 3B 00 00: call 0x5850b0b0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x585075a4
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        or eax, 4
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 24: jmp 0x585075ca
        __asm _emit 0xeb
        __asm _emit 0x24
    }
}
