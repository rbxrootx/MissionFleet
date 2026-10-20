// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B32F0 .. +0x23A bytes.
extern "C" __declspec(naked) void FUN_586b32f0_586B32F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 20h], 1
        push 0
        push 80h
        push 3
        push 0
        push 0
        push 80000000h
        push 588b0bbch
        ; Exact mapped bytes E8 DD FF 0F 00: call 0x587b3300
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], -1
        ; Exact mapped bytes 75 10: jne 0x586b333c
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 CB 01 00 00: jmp 0x586b3507
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes FF 15 00 43 89 58: call dword ptr [0x58894300]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 EE DC 17 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xdc
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        lea ecx, [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 18h]
        sub eax, 1
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 77 2B: ja 0x586b33bf
        __asm _emit 0x77
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 0dh
        ; Exact mapped bytes 75 12: jne 0x586b33b4
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB CA: jmp 0x586b3389
        __asm _emit 0xeb
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov ecx, 47h
        mul ecx
        mov edx, 0ffffffffh
        cmovb eax, edx
        push eax
        ; Exact mapped bytes E8 68 DC 17 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xdc
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 0a4h], ecx
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        imul eax, edx, 47h
        push eax
        push 20h
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 0a4h]
        push edx
        ; Exact mapped bytes E8 09 9A 19 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x9a
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 18h]
        sub eax, 1
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 0F 87 A6 00 00 00: ja 0x586b34d4
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 0dh
        ; Exact mapped bytes 75 1B: jne 0x586b3457
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 6F: jmp 0x586b34c6
        __asm _emit 0xeb
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 9
        ; Exact mapped bytes 75 3D: jne 0x586b34a2
        __asm _emit 0x75
        __asm _emit 0x3d
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x586b3477
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 8
        ; Exact mapped bytes 74 23: je 0x586b34a0
        __asm _emit 0x74
        __asm _emit 0x23
        cmp dword ptr [ebp - 8], 46h
        ; Exact mapped bytes 72 12: jb 0x586b3495
        __asm _emit 0x72
        __asm _emit 0x12
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 09: jmp 0x586b349e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB CE: jmp 0x586b346e
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes EB 24: jmp 0x586b34c6
        __asm _emit 0xeb
        __asm _emit 0x24
        imul ecx, dword ptr [ebp - 10h], 47h
        mov edx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [edx + 0a4h]
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov al, byte ptr [eax]
        mov byte ptr [ecx + edx], al
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes E9 4B FF FF FF: jmp 0x586b341f
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        imul eax, dword ptr [ebp - 10h], 47h
        mov ecx, dword ptr [ebp - 1ch]
        add eax, dword ptr [ecx + 0a4h]
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [eax + edx], 0
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 19: je 0x586b3507
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        ; Exact mapped bytes E8 4E DB 17 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xdb
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        imul edx, ecx, 47h
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 CB 8B DF FF: call 0x584ac0f0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x8b
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
