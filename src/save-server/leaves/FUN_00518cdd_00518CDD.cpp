// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00518CDD .. +0x1BC bytes.
extern "C" __declspec(naked) void FUN_00518cdd_00518CDD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes E8 AE 37 FB FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x37
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 0a8h], 0
        push 5b3h
        push 674cach
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 64h
        ; Exact mapped bytes E8 8A D6 00 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, eax, 30h
        push eax
        ; Exact mapped bytes E8 AA 33 FB FF: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x33
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 0a8h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 8ch]
        and edx, 2020h
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x518d65
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 64h
        ; Exact mapped bytes E8 3A D6 00 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 0F 8D 08 01 00 00: jge 0x518e81
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 4F EE 00 00: call 0x527bd4
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 28h
        mov edx, dword ptr [ebp - 10h]
        add edx, 5ch
        push edx
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 30h
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, eax
        push ecx
        ; Exact mapped bytes E8 5E C5 F4 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc5
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 30h
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + edx], 30h
        push 6378a8h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CE 13 FC FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x13
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x518e64
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 8ch
        ; Exact mapped bytes E8 AE BF 00 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 38: jne 0x518e1a
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 8ch
        ; Exact mapped bytes E8 BA BF 00 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 30h
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + edx + 28h], eax
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 30h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx + 4]
        or ch, 10h
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 30h
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + edx + 4], ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 90h
        ; Exact mapped bytes E8 64 BF 00 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 38: jne 0x518e64
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 90h
        ; Exact mapped bytes E8 70 BF 00 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 30h
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + ecx + 2ch], eax
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 30h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 4]
        or dh, 20h
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 30h
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + eax + 4], edx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 30h
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, eax
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 72 D1 FF FF: call 0x515fee
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 DB FE FF FF: jmp 0x518d5c
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 64h
        ; Exact mapped bytes E8 1E D5 00 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 0a0h], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
