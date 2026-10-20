// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851CA80 .. +0x1BF bytes.
extern "C" __declspec(naked) void FUN_5851ca80_5851CA80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5851ca9c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 50: jge 0x5851caf2
        __asm _emit 0x7d
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 50h]
        ; Exact mapped bytes E8 1F 95 FA FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x95
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        sub edx, dword ptr [ecx + 94h]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 78 08: js 0x5851cac9
        __asm _emit 0x78
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 07: jmp 0x5851cad0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 50h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 51 8A 29 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x8a
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB A1: jmp 0x5851ca93
        __asm _emit 0xeb
        __asm _emit 0xa1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 50h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 06 8B 29 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x8b
        __asm _emit 0x29
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 50h]
        mov dword ptr [ebp - 1ch], edx
        push 100h
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 06 8A 29 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x8a
        __asm _emit 0x29
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 98h]
        mov esi, dword ptr [ebp - 4]
        mov dword ptr [esi + eax*8 + 60h], ecx
        mov dword ptr [esi + eax*8 + 64h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 98h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 80h], 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 30h]
        ; Exact mapped bytes E8 48 9E F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x9e
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*8 + 60h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        sub eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 98h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*8 + 60h], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 30h]
        ; Exact mapped bytes E8 01 F5 F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf5
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*8 + 64h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + eax*8 + 64h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + ecx*8 + 64h], 75h
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 98h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*8 + 64h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        and ecx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x5851cc2f
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffffch
        inc ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
