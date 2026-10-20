// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B2950 .. +0xF5 bytes.
extern "C" __declspec(naked) void FUN_587b2950_587B2950() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, dword ptr [ebp + 18h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 77 0B: ja 0x587b2969
        __asm _emit 0x77
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [ebp + 18h]
        cmp dword ptr [ebp + 10h], ecx
        ; Exact mapped bytes 76 08: jbe 0x587b2971
        __asm _emit 0x76
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 D2 00 00 00: jmp 0x587b2a43
        __asm _emit 0xe9
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 08: jne 0x587b297f
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x587b2a43
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 EC D0 D1 FF: call 0x584cfa70
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd0
        __asm _emit 0xd1
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 46: jne 0x587b29d1
        __asm _emit 0x75
        __asm _emit 0x46
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [ecx + eax*2]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [ecx + eax*2]
        push edx
        ; Exact mapped bytes E8 7E FF FF FF: call 0x587b2930
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 0C: je 0x587b29cc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 0ch]
        sub eax, dword ptr [ebp + 8]
        sar eax, 1
        ; Exact mapped bytes EB 79: jmp 0x587b2a43
        __asm _emit 0xeb
        __asm _emit 0x79
        ; Exact mapped bytes EB 05: jmp 0x587b29d1
        __asm _emit 0xeb
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 72: jmp 0x587b2a43
        __asm _emit 0xeb
        __asm _emit 0x72
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ebp + 8]
        lea eax, [edx + ecx*2 + 2]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp + 8]
        lea eax, [edx + ecx*2]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x587b29f8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 2
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        sub eax, dword ptr [ebp - 4]
        sar eax, 1
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 E2 18 00 00: call 0x587b42f0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x587b2a1f
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 24: jmp 0x587b2a43
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 F0 B6 D6 FF: call 0x5851e120
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xb6
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x587b2a41
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [ebp + 8]
        sar eax, 1
        ; Exact mapped bytes EB 02: jmp 0x587b2a43
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB AC: jmp 0x587b29ef
        __asm _emit 0xeb
        __asm _emit 0xac
        mov esp, ebp
    }
}
