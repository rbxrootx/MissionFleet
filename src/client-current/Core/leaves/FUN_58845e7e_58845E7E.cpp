// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58845E7E .. +0x282 bytes.
extern "C" __declspec(naked) void FUN_58845e7e_58845E7E() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 142ch
        ; Exact mapped bytes E8 65 BC FE FF: call 0x58831af0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 142ch], ecx
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DD B2 00 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 1410h], eax
        cmp dword ptr [ebp - 1410h], 1400h
        ; Exact mapped bytes 7E 07: jle 0x58845ebd
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 33 02 00 00: jmp 0x588460f0
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1410h], 0
        ; Exact mapped bytes 0F 84 23 02 00 00: je 0x588460ed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov byte ptr [ebp + eax - 1404h], 2
        mov eax, dword ptr [ebp + 0ch]
        xor edx, edx
        mov ecx, 100h
        div ecx
        mov dword ptr [ebp - 1408h], edx
        xor eax, eax
        inc eax
        shl eax, 0
        mov cl, byte ptr [ebp - 1408h]
        mov byte ptr [ebp + eax - 1404h], cl
        imul eax, dword ptr [ebp - 1408h], 7
        mov dword ptr [ebp - 1408h], eax
        mov eax, dword ptr [ebp - 1408h]
        add eax, 46h
        mov dword ptr [ebp - 1424h], eax
        mov eax, dword ptr [ebp - 1408h]
        inc eax
        mov dword ptr [ebp - 1408h], eax
        imul eax, dword ptr [ebp - 1408h], 7
        mov dword ptr [ebp - 1408h], eax
        mov eax, dword ptr [ebp - 1408h]
        add eax, 46h
        mov dword ptr [ebp - 1428h], eax
        mov eax, dword ptr [ebp - 1408h]
        inc eax
        mov dword ptr [ebp - 1408h], eax
        mov dword ptr [ebp - 1418h], 4
        and dword ptr [ebp - 140ch], 0
        ; Exact mapped bytes EB 0D: jmp 0x58845f6f
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 140ch]
        inc eax
        mov dword ptr [ebp - 140ch], eax
        mov eax, dword ptr [ebp - 140ch]
        cmp eax, dword ptr [ebp - 1410h]
        ; Exact mapped bytes 7D 59: jge 0x58845fd6
        __asm _emit 0x7d
        __asm _emit 0x59
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 140ch]
        mov al, byte ptr [eax]
        mov byte ptr [ebp - 1411h], al
        imul eax, dword ptr [ebp - 1408h], 7
        mov dword ptr [ebp - 1408h], eax
        ; Exact mapped bytes 0F BE 85 EF EB FF FF: movsx eax, byte ptr [ebp - 0x1411]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1408h]
        add ecx, 46h
        xor eax, ecx
        mov ecx, dword ptr [ebp - 1418h]
        mov byte ptr [ebp + ecx - 1404h], al
        mov eax, dword ptr [ebp - 1418h]
        inc eax
        mov dword ptr [ebp - 1418h], eax
        mov eax, dword ptr [ebp - 1408h]
        inc eax
        mov dword ptr [ebp - 1408h], eax
        ; Exact mapped bytes EB 8C: jmp 0x58845f62
        __asm _emit 0xeb
        __asm _emit 0x8c
        mov eax, dword ptr [ebp - 1418h]
        mov dword ptr [ebp - 141ch], eax
        cmp dword ptr [ebp - 141ch], 1400h
        ; Exact mapped bytes 73 02: jae 0x58845ff0
        __asm _emit 0x73
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x58845ff5
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 B4 B1 FE FF: call 0x588311a9
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 141ch]
        mov byte ptr [ebp + eax - 1404h], 0
        mov eax, dword ptr [ebp - 1418h]
        sub eax, 4
        mov dword ptr [ebp - 1410h], eax
        mov eax, dword ptr [ebp - 1410h]
        sar eax, 8
        xor ecx, ecx
        inc ecx
        shl ecx, 1
        mov byte ptr [ebp + ecx - 1404h], al
        xor eax, eax
        inc eax
        imul eax, eax, 3
        mov cl, byte ptr [ebp - 1410h]
        mov byte ptr [ebp + eax - 1404h], cl
        xor eax, eax
        inc eax
        shl eax, 1
        ; Exact mapped bytes 0F BE 84 05 FC EB FF FF: movsx eax, byte ptr [ebp + eax - 0x1404]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, dword ptr [ebp - 1424h]
        xor ecx, ecx
        inc ecx
        shl ecx, 1
        mov byte ptr [ebp + ecx - 1404h], al
        xor eax, eax
        inc eax
        imul eax, eax, 3
        ; Exact mapped bytes 0F BE 84 05 FC EB FF FF: movsx eax, byte ptr [ebp + eax - 0x1404]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, dword ptr [ebp - 1428h]
        xor ecx, ecx
        inc ecx
        imul ecx, ecx, 3
        mov byte ptr [ebp + ecx - 1404h], al
        push dword ptr [ebp - 1410h]
        push 0
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 86 6D 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        and dword ptr [ebp - 140ch], 0
        ; Exact mapped bytes EB 0D: jmp 0x588460a3
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 140ch]
        inc eax
        mov dword ptr [ebp - 140ch], eax
        mov eax, dword ptr [ebp - 1410h]
        add eax, 4
        cmp dword ptr [ebp - 140ch], eax
        ; Exact mapped bytes 7D 39: jge 0x588460ed
        __asm _emit 0x7d
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 140ch]
        movzx eax, byte ptr [ebp + eax - 1404h]
        push eax
        push 588f20dch
        lea eax, [ebp - 1420h]
        push eax
        ; Exact mapped bytes E8 8C 6A CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x6a
        __asm _emit 0xcc
        __asm _emit 0xff
        add esp, 0ch
        push 2
        lea eax, [ebp - 1420h]
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DF 0A 00 00: call 0x58846bc7
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB A9: jmp 0x58846096
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 56 AF FE FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
