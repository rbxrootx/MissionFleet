// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5872B150 .. +0x1BD bytes.
extern "C" __declspec(naked) void FUN_5872b150_5872B150() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 138h]
        ; Exact mapped bytes E8 80 E5 DF FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xe5
        __asm _emit 0xdf
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 8E 5C 01 00 00: jle 0x5872b2d4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5872b18a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 1D: jge 0x5872b1ad
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 128h]
        mov dword ptr [ebp - 14h], edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 96 46 D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x46
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x5872b181
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 138h]
        ; Exact mapped bytes E8 AC 5A 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x5a
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 09: jmp 0x5872b1d2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 138h]
        ; Exact mapped bytes E8 87 5A 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x5a
        __asm _emit 0x09
        __asm _emit 0x00
        add eax, 4
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 8D DD 00 00 00: jge 0x5872b2d2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 138h]
        ; Exact mapped bytes E8 E4 E4 DF FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xe4
        __asm _emit 0xdf
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 8D BD 00 00 00: jge 0x5872b2d2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 140h]
        mov dword ptr [ebp - 20h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 138h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1E 59 09 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x59
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 EF 1D D6 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x1d
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 140h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 138h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 DF 58 09 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B0 1D D6 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x1d
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx eax, word ptr [eax + 6]
        mov dword ptr [ebp - 30h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 138h]
        ; Exact mapped bytes E8 C2 59 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x59
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        sub ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 128h]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 74 45 D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F7 FE FF FF: jmp 0x5872b1c9
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 35: jmp 0x5872b309
        __asm _emit 0xeb
        __asm _emit 0x35
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x5872b2e6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 7D 1D: jge 0x5872b309
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 128h]
        mov dword ptr [ebp - 38h], edx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 3A 45 D7 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x45
        __asm _emit 0xd7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x5872b2dd
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov esp, ebp
        pop ebp
        ret
    }
}
